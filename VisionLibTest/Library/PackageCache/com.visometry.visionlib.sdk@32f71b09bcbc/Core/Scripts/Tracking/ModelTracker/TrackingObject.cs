using System.Collections.Generic;
using UnityEngine;
using Visometry.VisionLib.SDK.Core.API;
using Visometry.VisionLib.SDK.Core.Details;

#if UNITY_EDITOR
using UnityEditor;
#endif

namespace Visometry.VisionLib.SDK.Core
{
    /// @ingroup Core
    [HelpURL(DocumentationLink.APIReferenceURI.Core + "tracking_object.html")]
    [ExecuteAlways]
    [System.Serializable]
    public abstract class TrackingObject : MonoBehaviour, ISceneValidationCheck
    {
        private const string noTrackingAnchorLogMessage =
            "TrackingObject not assigned to a TrackingAnchor." +
            " Click on this message to find the offending GameObject and " +
            "move it under a TrackingAnchor in the hierarchy.";

        protected LoadedModelHandle loadedModelHandle;

        public bool ModelStateSynchronizedWithBackend
        {
            get
            {
                return this.loadedModelHandle.ModelStateSynchronizedWithBackend;
            }
        }

        /// <summary>
        ///  Enable/Disable this property in order to use/not use all models in this object as a tracking occluder.
        /// </summary>
        [SerializeField]
        public bool occluder;

        /// <summary>
        ///  Enable/Disable this property in order to use/not use manual lines from all models in this object for tracking.
        /// </summary>
        [SerializeField]
        private bool useLines;

        [SerializeField]
        private Transform rootTransform = null;

        public Transform GetRootTransform()
        {
            if (!this.rootTransform)
            {
                UpdateRootTransform();
            }
            return this.rootTransform;
        }

        public TrackingAnchor GetTrackingAnchor()
        {
            return GetRootTransform()?.GetComponent<TrackingAnchor>();
        }

        public void SetOccluder(bool occluder)
        {
            this.occluder = occluder;
            Update();
        }

        public void UseLines(bool useLines)
        {
            this.useLines = useLines;
            Update();
        }

        public abstract Bounds GetBoundingBoxInModelCoordinates();

        public abstract Bounds GetBoundingBoxInAnchorCoordinates();

        public Vector3 GetModelDimensionsInMeters()
        {
            var dimensionsInModelCoordinates = GetBoundingBoxInModelCoordinates().size;
            return Vector3.Scale(dimensionsInModelCoordinates, this.transform.lossyScale);
        }

        public string GetModelDimensionsString()
        {
            var dimensionsInMeters = GetModelDimensionsInMeters();
            var metric = GetRootTransform() != null
                ? GetTrackingAnchor().GetMetric()
                : Metric.Unit.m;
            dimensionsInMeters /= Metric.GetScale(metric);
            return $"{dimensionsInMeters.x:0.###} {metric} x " +
                   $"{dimensionsInMeters.y:0.###} {metric} x " +
                   $"{dimensionsInMeters.z:0.###} {metric}";
        }

        private void Start()
        {
            if (Application.isPlaying)
            {
                if (HasParentTrackingAnchor())
                {
                    CreateLoadedModelsHandle();
                }
                else
                {
                    NotificationHelper.SendError(
                        "Model without associated TrackingAnchor was not" +
                        " sent to VisionLib for tracking.",
                        TrackingObject.noTrackingAnchorLogMessage,
                        this.gameObject);
                }
            }
        }

        private void Update()
        {
            if (Application.isPlaying)
            {
                SetParametersInLoadedModelHandle(true);
            }
            else
            {
                UpdateRootTransform();
            }
        }

#if UNITY_EDITOR
        public void OnDrawGizmosSelected()
        {
            if (Selection.activeGameObject != this.gameObject)
            {
                return;
            }
            DrawAxisColoredBoundingBoxGizmo(true);
        }

        public void DrawAxisColoredBoundingBoxGizmo(bool annotateDimensions)
        {
            var boundingBoxInLocalSpace = GetBoundingBoxInModelCoordinates();
            if (boundingBoxInLocalSpace.extents == Vector3.zero)
            {
                return;
            }
            AxisColoredBoundingBoxGizmo.Draw(
                boundingBoxInLocalSpace,
                this.transform,
                annotateDimensions ? GetTrackingAnchor().GetMetric() : null);
        }
#endif

        private void OnEnable()
        {
            if (Application.isPlaying)
            {
                SetParametersInLoadedModelHandle(true);
            }
        }

        private void OnDisable()
        {
            if (Application.isPlaying)
            {
                SetParametersInLoadedModelHandle(false);
            }
        }

        private void OnTransformParentChanged()
        {
            UpdateRootTransform();
        }

        protected virtual void OnDestroy()
        {
            this.loadedModelHandle?.Clear();
        }

        protected abstract void CreateLoadedModelsHandle();

        private void UpdateRootTransform()
        {
            var trackingAnchor = GetComponentInParent<TrackingAnchor>();
            var newRootTransform = trackingAnchor ? trackingAnchor.transform : null;
            if (newRootTransform == this.rootTransform)
            {
                return;
            }
            this.rootTransform = newRootTransform;

            if (Application.isPlaying && this.loadedModelHandle != null)
            {
                this.loadedModelHandle.Clear();
                if (this.rootTransform != null)
                {
                    CreateLoadedModelsHandle();
                }
            }
        }

        private bool HasParentTrackingAnchor()
        {
            UpdateRootTransform();
            return this.rootTransform != null;
        }

        private void SetParametersInLoadedModelHandle(bool isEnabled)
        {
            this.loadedModelHandle?.SetAllParameters(
                new ModelTransform(this.transform, this.rootTransform),
                isEnabled,
                this.occluder,
                this.useLines);
        }

#if UNITY_EDITOR
        public abstract List<SetupIssue> GetSceneIssues();
#endif
    }
}
