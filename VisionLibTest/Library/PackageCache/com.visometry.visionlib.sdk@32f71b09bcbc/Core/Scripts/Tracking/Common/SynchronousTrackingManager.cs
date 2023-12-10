using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using Visometry.VisionLib.SDK.Core.API.Native;
using Visometry.VisionLib.SDK.Core.Details;
using UnityEngine.UI;
using Visometry.VisionLib.SDK.Core.API;
#if NETFX_CORE
using System.Threading.Tasks;
#endif

namespace Visometry.VisionLib.SDK.Core
{
    /**
     *  @ingroup Core
     */
    public interface InputFrame : IDisposable
    {
        Frame Evaluate();
    }

    /// <summary>
    ///     A special type of <see cref="TrackingManager"/> for use in scenes where camera image
    ///     acquisition is not handled natively by the VisionLib, and camera images are
    ///     fed into the VisionLib via scripts instead (e.g. our ImageInjection
    ///     and AR Foundation examples).
    /// </summary>
    /// @ingroup Core
    [AddComponentMenu("VisionLib/Core/Synchronous Tracking Manager")]
    [HelpURL(DocumentationLink.APIReferenceURI.Core + "synchronous_tracking_manager.html")]
    public class SynchronousTrackingManager : TrackingManager
    {
        private class FrameBuffer<FrameType> : IDisposable where FrameType : class, IDisposable
        {
            private List<FrameType> frames = new List<FrameType>();
            private const int maxSize = 2;
            private bool disposed = false;
            private object framesLock = new object();

            public void Push(FrameType frame)
            {
                if (this.disposed)
                {
                    throw new ObjectDisposedException("FrameBuffer");
                }
                FrameType frameToDispose = null;
                lock (this.framesLock)
                {
                    if (this.frames.Count == maxSize)
                    {
                        frameToDispose = this.frames[0];
                        this.frames.RemoveAt(0);
                    }
                    this.frames.Add(frame);
                }
                if (frameToDispose != null)
                {
                    frameToDispose.Dispose();
                }
            }

            public FrameType Pop()
            {
                if (this.disposed)
                {
                    throw new ObjectDisposedException("FrameBuffer");
                }
                FrameType fetchedFrame = null;
                lock (this.framesLock)
                {
                    if (this.frames.Count > 0)
                    {
                        fetchedFrame = this.frames[0];
                        this.frames.RemoveAt(0);
                    }
                }
                return fetchedFrame;
            }

            public void Dispose()
            {
                Dispose(true);
                GC.SuppressFinalize(this);
            }

            public void Clear()
            {
                lock (this.framesLock)
                {
                    foreach (var frame in this.frames)
                    {
                        frame.Dispose();
                    }
                    this.frames.Clear();
                }
            }

            protected virtual void Dispose(bool disposing)
            {
                if (this.disposed)
                {
                    return;
                }
                if (disposing)
                {
                    Clear();
                }
                this.disposed = true;
            }
        }

#if NETFX_CORE
        private class MyThread
        {
            private Task task;
            public MyThread(Action run)
            {
                this.task = new Task(run);
                this.task.Start();
            }
            public void Join()
            {
                this.task.Wait();
            }
        }
#else
        private class MyThread
        {
            private Thread thread;

            public MyThread(ThreadStart run)
            {
                this.thread = new Thread(run);
                this.thread.Start();
            }

            public void Join()
            {
                this.thread.Join();
            }
        }
#endif
        /// <summary>
        ///     Get a reference to the <see cref="SynchronousTrackingManager"/> in the scene.
        /// </summary>
        /// <remarks>
        ///     Usage:
        /// 
        ///     <c> var thisScenesSynchronousTrackingManager =
        ///         <see cref="SynchronousTrackingManager"/>.<see cref="Instance"/>;</c>
        ///
        ///     This raises a <see cref="WrongTypeException"/> if the <see cref="TrackingManager"/>
        ///     in the current scene is not an <see cref="SynchronousTrackingManager"/>.
        /// </remarks>
        /// @exception WrongTypeException, NullSingletonException, DuplicateSingletonException
        public new static SynchronousTrackingManager Instance
        {
            get => TrackingManager.instance.As<SynchronousTrackingManager>();
        }

        /// <summary>
        /// Executes a command synchronously
        /// </summary>
        /// <param name="command"></param>
        /// <returns>result of the command</returns>
        public string Execute(WorkerCommands.CommandBase command)
        {
            return this.worker.ProcessCommand(command);
        }

        public T Execute<T>(WorkerCommands.CommandBase command)
        {
            return this.worker.ProcessCommand<T>(command);
        }

        public static void CatchCommandErrors(
            Func<WorkerCommands.CommandWarnings> task,
            MonoBehaviour caller = null)
        {
            try
            {
                TriggerWarnings(task(), caller);
            }
            catch (WorkerCommands.CommandError e)
            {
                var issue = e.GetIssue();
                issue.caller = caller;
                TriggerIssue(issue);
            }
            catch (TaskCanceledException) {}
        }

        public static void CatchCommandErrors(Action task, MonoBehaviour caller = null)
        {
            CatchCommandErrors(
                () =>
                {
                    task();
                    return WorkerCommands.NoWarnings();
                },
                caller);
        }

        private MyThread workerThread;

        private FrameBuffer<InputFrame> frameToInject = new FrameBuffer<InputFrame>();
        private FrameBuffer<Frame> trackingResult = new FrameBuffer<Frame>();
        private bool exitThread = true;

        protected override void Update()
        {
            base.Update();

            if (!this.trackerInitialized)
            {
                return;
            }

            using (var trackingResult = this.trackingResult.Pop())
            {
                if (trackingResult != null)
                {
                    TrackingManager.EmitEvents(trackingResult);
                }
            }
        }

        protected override void OnDestroy()
        {
            StopTracking();
            this.frameToInject.Dispose();
            this.trackingResult.Dispose();
            base.OnDestroy();
        }

        public override void StartTracking(string path)
        {
            StopTracking();
            this.exitThread = false;
            base.StartTracking(path);
            StartWorkerThread();
        }

        public override void StopTracking()
        {
            if (this.workerThread != null)
            {
                StopWorkerThread();
                base.StopTracking();
            }
            this.frameToInject.Clear();
            this.trackingResult.Clear();
        }

        public bool IsReady()
        {
            return this.trackerInitialized;
        }

        public void Push(InputFrame frame)
        {
            this.frameToInject.Push(frame);
        }

        /// <summary>
        ///     Execute the tracking pipeline on the previously set <see cref="Frame"/>.
        /// </summary>
        private bool RunOnceSync()
        {
            return this.Worker.RunOnceSync();
        }

        /// <summary>
        ///     Execute the tracking pipeline on <see cref="frame"/> and return the result.
        /// </summary>
        private Frame TrackFrame(Frame frame)
        {
            lock (this.workerLock)
            {
                if (!this.Worker.IsRunning())
                {
                    return null;
                }

                this.Worker.SetNodeImageSync(frame.image, "inject0", "imageIn");
                this.Worker.SetNodeIntrinsicDataSync(frame.intrinsicData, "inject0", "intrinsic");
                this.Worker.SetNodeExtrinsicDataSync(frame.extrinsicData, "inject0", "extrinsic");
                CatchCommandErrors(
                    () => Execute<WorkerCommands.CommandWarnings>(
                        new WorkerCommands.SetTimestampCmd(frame.timestamp)),
                    this);

                RunOnceSync();

                Frame result = new Frame();
                foreach (var anchorName in anchorObservableMap.GetAnchorNames())
                {
                    var transform = this.Worker.GetNodeSimilarityTransformSync(
                        "",
                        "WorldFrom" + anchorName + "Transform");
                    result.anchorTransforms[anchorName] = transform;
                }

                result.debugImage = this.Worker.TryGetNodeImageSync("", "DebugImage");
                result.intrinsicData =
                    this.Worker.GetNodeIntrinsicDataSync("inject0", "intrinsicDisplay");
                result.cameraTransform =
                    this.Worker.GetNodeExtrinsicDataSync("", "worldFromCameraTransform");

                if (GetTrackerType() == "PosterTracker")
                {
                    result.anchorTransforms["TrackedObject"] =
                        this.Worker.GetNodeSimilarityTransformSync(
                            "",
                            "WorldFromTrackedObjectTransform");
                    result.image = frame.image;
                    result.extrinsicData = this.Worker.GetNodeExtrinsicDataSync("", "extrinsic");
                }
                else
                {
                    result.image = this.Worker.GetNodeImageSync("", "imageDisplay");
                    result.extrinsicData = result.cameraTransform;
                }

                result.timestamp = frame.timestamp;
                result.trackingState = this.Worker.GetNodeTrackingStateSync("");
                return result;
            }
        }

        protected override bool TryAddDebugImageListener()
        {
            return true;
        }

        protected override bool TryRemoveDebugImageListener()
        {
            return true;
        }

        protected override void CreateWorker()
        {
            this.worker = new Worker(true);
        }

        protected override void RegisterListeners() {}

        protected override void UnregisterListeners() {}

        protected override void RegisterTrackerListeners() {}

        protected override void UnregisterTrackerListeners() {}

        protected override void UpdateAnchorTransformListeners() {}

        private void StartWorkerThread()
        {
            this.workerThread = new MyThread(WorkerThreadRun);
        }

        private void StopWorkerThread()
        {
            this.exitThread = true;
            this.workerThread.Join();
            this.workerThread = null;
        }

        private void WorkerThreadRun()
        {
            while (!this.trackerInitialized && !this.exitThread)
            {
                this.RunOnceSync();
            }
            while (this.trackerInitialized && !this.exitThread)
            {
                WorkerThreadApply();
            }
        }

        private void WorkerThreadApply()
        {
            using (var frameToInject = this.frameToInject.Pop())
            {
                if (frameToInject == null)
                {
                    return;
                }
                try
                {
                    using (var frameToTrack = frameToInject.Evaluate())
                    {
                        if (frameToTrack == null)
                        {
                            return;
                        }
                        using (var newTrackingResult = this.TrackFrame(frameToTrack))
                        {
                            if (newTrackingResult != null)
                            {
                                this.trackingResult.Push(newTrackingResult.Clone());
                            }
                        }
                    }
                }
                catch (InvalidOperationException e)
                {
                    LogHelper.LogException(e);
                }
            }
        }

        protected override bool ShouldShowMark()
        {
            return true;
        }
    }
}
