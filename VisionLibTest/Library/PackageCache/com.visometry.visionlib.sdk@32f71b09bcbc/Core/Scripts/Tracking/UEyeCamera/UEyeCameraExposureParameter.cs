using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using Visometry.VisionLib.SDK.Core.Details;
using UnityEngine;
using UnityEngine.Events;
using Visometry.VisionLib.SDK.Core.API;

namespace Visometry.VisionLib.SDK.Core
{
    [Serializable]
    public class UEyeCameraExposureParameter : UEyeCameraParameter
    {
        public UnityEvent<float> OnMinChanged = new UnityEvent<float>();
        public UnityEvent<float> OnMaxChanged = new UnityEvent<float>();

        private float maxValue = -1.0f;
        private float minValue = -1.0f;

        public UEyeCameraExposureParameter()
            : base("imageSource.exposure") {}

        public override async Task InitializeValueFromBackend()
        {
            await base.InitializeValueFromBackend();

            this.maxValue = await WorkerCommands.GetAttributeAsync<float>(
                TrackingManager.Instance.Worker,
                this.attributeName + "Max");
            this.OnMaxChanged?.Invoke(this.maxValue);

            this.minValue = await WorkerCommands.GetAttributeAsync<float>(
                TrackingManager.Instance.Worker,
                this.attributeName + "Min");
            this.OnMinChanged?.Invoke(this.minValue);
        }

#if UNITY_EDITOR
        public override List<SetupIssue> CheckOnValueChangedForBrokenListeners(
            GameObject sourceGameObject = null)
        {
            return EventSetupIssueHelper.CheckEventsForBrokenReferences(
                new UnityEventBase[] {this.OnValueChanged, this.OnMaxChanged, this.OnMinChanged},
                sourceGameObject);
        }
#endif
    }
}
