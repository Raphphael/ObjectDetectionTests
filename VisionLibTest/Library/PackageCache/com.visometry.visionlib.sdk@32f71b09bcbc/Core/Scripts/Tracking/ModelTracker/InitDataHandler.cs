using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using Visometry.VisionLib.SDK.Core.API;
using Visometry.VisionLib.SDK.Core.API.Native;
using Visometry.VisionLib.SDK.Core.Details;

namespace Visometry.VisionLib.SDK.Core
{
    /// <summary>
    ///  The InitDataHandler contains all functions related to InitData
    /// </summary>
    /// @ingroup Core
    [HelpURL(DocumentationLink.APIReferenceURI.Core + "init_data_handler.html")]
    public class InitDataHandler : MonoBehaviour
    {
        public string initDataURI = null;
        private const string defaultInitDataLocation = "local-storage-dir:VisionLib/InitData/";
        private const string defaultInitDatafileName = "/InitData.binz";

        public async Task WriteInitDataAsync()
        {
            var writeURI = GetInitDataURI();
            await ModelTrackerCommands.WriteInitDataAsync(
                TrackingManager.Instance.Worker,
                writeURI);
            NotificationHelper.SendInfo(
                "Init data written to: '" + VLSDK.GetPhysicalPath(writeURI) + "'");
        }

        /// <summary>
        ///  Write the captured initialization data into the file specified in
        ///  <see cref="initDataURI"/>.
        /// </summary>
        /// <remarks> This function will be performed asynchronously.</remarks>
        /// <remarks>
        ///  In order to avoid having to use a different file path for each
        ///  platform, the "local-storage-dir" scheme can be used as file prefix.
        ///  This scheme points to different locations depending on the platform:
        ///  * Windows: Current users home directory
        ///  * MacOS: Current users document directory
        ///  * iOS / Android: The current applications document directory
        /// </remarks>
        public void WriteInitData()
        {
            TrackingManager.CatchCommandErrors(WriteInitDataAsync(), this);
        }

        public async Task ReadInitDataAsync()
        {
            await ModelTrackerCommands.ReadInitDataAsync(
                TrackingManager.Instance.Worker,
                GetInitDataURI());
            NotificationHelper.SendInfo("Init data read.");
        }

        /// <summary>
        ///  Loads stored initialization data from the file specified in <see cref="initDataURI"/>.
        /// </summary>
        /// <remarks> This function will be performed asynchronously.</remarks>
        /// <remarks>
        ///  In order to load init data at best use a static uri. A common way is for each
        ///  platform, is using  "local-storage-dir" scheme which can be used as file prefix.
        ///  This scheme points to different locations depending on the platform:
        ///  * Windows: Current users home directory
        ///  * MacOS: Current users document directory
        ///  * iOS / Android: The current applications document directory
        /// </remarks>
        public void ReadInitData()
        {
            TrackingManager.CatchCommandErrors(ReadInitDataAsync(), this);
        }

        public async Task ResetInitDataAsync()
        {
            await ModelTrackerCommands.ResetInitDataAsync(TrackingManager.Instance.Worker);
            NotificationHelper.SendInfo("Init data reset.");
        }

        /// <summary>
        ///  Reset the initialization data loaded via <see cref="ReadInitData"/>.
        /// </summary>
        /// <remarks> This function will be performed asynchronously.</remarks>
        /// <remarks>
        ///  This Function only resets int data previously loaded from files (static init data). It
        ///  does not affect init data learned on the fly (dynamic init data). To reset dynamic init
        ///  data, use `TrackingAnchor.ResetHard` function on the desired anchor(s) (or
        ///  `ModelTracker.ResetTrackingHard` if you use single model tracking). 
        /// </remarks>
        public void ResetInitData()
        {
            TrackingManager.CatchCommandErrors(ResetInitDataAsync(), this);
        }

        private string GetInitDataURI()
        {
            if (string.IsNullOrEmpty(this.initDataURI))
            {
                this.initDataURI = InitDataHandler.defaultInitDataLocation +
                                   SceneManager.GetActiveScene().name +
                                   InitDataHandler.defaultInitDatafileName;
            }
            return this.initDataURI;
        }
    }
}
