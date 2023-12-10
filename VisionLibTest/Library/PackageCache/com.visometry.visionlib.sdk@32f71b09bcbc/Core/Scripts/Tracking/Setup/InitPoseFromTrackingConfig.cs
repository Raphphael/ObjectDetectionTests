using System.Threading.Tasks;
using UnityEngine;
using Visometry.VisionLib.SDK.Core.API;
using Visometry.VisionLib.SDK.Core.Details;

namespace Visometry.VisionLib.SDK.Core
{
    // @ingroup Core
    [HelpURL(DocumentationLink.APIReferenceURI.Core + "init_pose_from_tracking_config.html")]
    [RequireComponent(typeof(TrackingAnchor))]
    public class InitPoseFromTrackingConfig : MonoBehaviour
    {
        private Matrix4x4 renderRotationMatrixFromVLToUnity;

        private void Awake()
        {
            this.renderRotationMatrixFromVLToUnity = CameraHelper.rotationZ0;
        }

        private void OnOrientationChange(ScreenOrientation orientation)
        {
            var renderRotation = CameraHelper.GetRenderRotation(orientation);
            this.renderRotationMatrixFromVLToUnity =
                CameraHelper.GetRenderRotationMatrixFromVLToUnity(renderRotation);
        }

        private void OnEnable()
        {
            ScreenOrientationObserver.OnOrientationChange += OnOrientationChange;
            var trackingAnchor = this.gameObject.GetComponent<TrackingAnchor>();
            if (trackingAnchor.AnchorExists)
            {
                HandleAnchorAdded();
            }
            trackingAnchor.OnAnchorAdded += HandleAnchorAdded;
        }

        private void OnDisable()
        {
            var trackingAnchor = GetComponent<TrackingAnchor>();
            ScreenOrientationObserver.OnOrientationChange -= OnOrientationChange;
            trackingAnchor.OnAnchorAdded -= HandleAnchorAdded;
        }

        private void HandleAnchorAdded()
        {
            TrackingManager.CatchCommandErrors(SetTransformPoseFromTrackingConfig(), this);
        }

        private async Task SetTransformPoseFromTrackingConfig()
        {
            var trackingAnchor = GetComponent<TrackingAnchor>();
            var maybeInitPose = await GetInitPoseFromTrackingConfig(trackingAnchor);
            if (!maybeInitPose.HasValue)
            {
                return;
            }
            var initCameraFromModel = this.renderRotationMatrixFromVLToUnity * maybeInitPose.Value;
            var worldFromModel = new ModelTransform(trackingAnchor.GetSLAMCamera().transform) *
                                 initCameraFromModel.Inverse();

            this.transform.rotation = worldFromModel.r;
            this.transform.position = worldFromModel.t;
            trackingAnchor.SetTransformAsInitPose();
        }

        private static async Task<ModelTransform?> GetInitPoseFromTrackingConfig(
            TrackingAnchor trackingAnchor)
        {
            var maybeInitPose = await MultiModelTrackerCommands.AnchorGetInitPoseAsync(
                TrackingManager.Instance.Worker,
                trackingAnchor.GetAnchorName());

            if (!maybeInitPose.HasValue)
            {
                return null;
            }

            var initPose = maybeInitPose.Value;

            Vector3 position;
            Quaternion orientation;
            CameraHelper.VLPoseToCamera(
                new Vector3(initPose.t[0], initPose.t[1], initPose.t[2]),
                new Quaternion(initPose.r[0], initPose.r[1], initPose.r[2], initPose.r[3]),
                out position,
                out orientation);
            return new ModelTransform(orientation, position);
        }
    }
}
