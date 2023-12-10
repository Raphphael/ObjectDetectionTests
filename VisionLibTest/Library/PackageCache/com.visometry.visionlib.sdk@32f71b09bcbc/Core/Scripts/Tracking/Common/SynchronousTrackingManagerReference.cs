using UnityEngine;

namespace Visometry.VisionLib.SDK.Core
{
    /**
     *  @ingroup Core
     */
    [System.Obsolete(
        "SynchronousTrackingManagerReference is obsolete and slated for removal in the" +
        " next major release. Instead of inheriting from SynchronousTrackingManagerReference," +
        " use SynchronousTrackingManagerReference.Instance to access the synchronous" +
        " tracking manager in the scene.")]
    [HelpURL(DocumentationLink.APIReferenceURI.Core + "synchronous_tracking_manager_reference.html")]
    public abstract class SynchronousTrackingManagerReference : TrackingManagerReference
    {
        protected SynchronousTrackingManager syncTrackingManager
        {
            get => SynchronousTrackingManager.Instance;
        }

        [System.Obsolete(
            "InitWorkerReference is obsolete.\nThe reference will be searched " +
            "automatically when accessing the \"syncTrackingManager\" property.")]
        protected override bool InitWorkerReference()
        {
            return this.syncTrackingManager != null;
        }
    }
}
