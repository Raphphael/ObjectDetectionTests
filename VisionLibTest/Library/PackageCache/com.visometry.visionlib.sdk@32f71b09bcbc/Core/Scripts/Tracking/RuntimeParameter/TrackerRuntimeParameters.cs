using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Visometry.VisionLib.SDK.Core.API;
using Visometry.VisionLib.SDK.Core.Details;

namespace Visometry.VisionLib.SDK.Core
{
    [Serializable]
    public class TrackerRuntimeParameters
    {
        public ImageSourceEnabled imageSourceEnabled = new();
#if VL_HL_XRPROVIDER_OPENXR || VL_HL_XRPROVIDER_WINDOWSMR
        public FieldOfView fieldOfView = new();
#endif

        internal List<ITrackingParameter> GetListOfAllParameters()
        {
            return new List<ITrackingParameter>()
            {
#if VL_HL_XRPROVIDER_OPENXR || VL_HL_XRPROVIDER_WINDOWSMR
                this.fieldOfView,
#endif
                this.imageSourceEnabled
            };
        }

        public Task<WorkerCommands.CommandWarnings> UpdateParametersInBackendAsync(
            IParameterHandler parameterHandler)
        {
            return GetListOfAllParameters().UpdateInBackendAsync(parameterHandler);
        }

        internal Task<WorkerCommands.CommandWarnings> ResetParametersToDefaultAsync(
            IParameterHandler parameterHandler)
        {
            var trackingManager = parameterHandler as TrackingManager;
            if (trackingManager != null)
            {
                return GetListOfAllParameters().ResetToDefaultAsync(parameterHandler);
            }
            LogHelper.LogWarning(
                "Given IParameterSetter is no TrackingManager. Cannot reset parameters to default.");
            return Task.FromResult(WorkerCommands.NoWarnings());
        }
    }
}
