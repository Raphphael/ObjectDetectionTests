#if UNITY_ANDROID
using UnityEditor;
using UnityEditor.Build.Reporting;

namespace Visometry.VisionLib.SDK.Core.Details
{
    /// <summary>
    /// Class containing all checks to be performed before each Build with target platform Android.
    /// </summary>
    public class AndroidPreBuildChecks : PreBuildChecks
    {
        /// <summary>
        /// Callback containing checks that are performed directly after a Build is initialized
        /// and before the build actually starts.
        /// </summary>
        public override void OnPreprocessBuild(BuildReport report)
        {
#if !UNITY_2021_1_OR_NEWER
            CheckForMinimalAPILevel();
#endif
            CheckFor64Bit();
        }

#if !UNITY_2021_1_OR_NEWER
        private static void CheckForMinimalAPILevel()
        {
            Check(
                (int) PlayerSettings.Android.minSdkVersion >= 21,
                () =>
                {
                    PlayerSettings.Android.minSdkVersion = AndroidSdkVersions.AndroidApiLevel21;
                },
                "Minimum API Level too low",
                "VisionLib requires at least an minimum API level of 21. " +
                "You are currently using " + PlayerSettings.Android.minSdkVersion + "\n\n" +
                "Would you like to increase the minimum API level to 21?",
                "Increase minimum API level");
        }
#endif

        private static void CheckFor64Bit()
        {
            CheckOptional(
                !(!UsesIL2CPP() || Is32BitWithout64Bit()),
                () =>
                {
                    EnableIL2CPP();
                    if (Is32BitWithout64Bit_ARM())
                    {
                        Enable64Bit_ARM();
                    }
                    if (Is32BitWithout64Bit_x86())
                    {
                        Enable64Bit_x86();
                    }
                },
                "64 bit Disabled",
                "We strongly recommend enabling IL2CPP and selecting a 64 Bit target architecture in the Player " +
                "settings for Android. \n" +
                "VisionLib uses ARCore internally when deployed to android devices." +
                " ARCore is only available in our 64 bit builds. " +
                "If you continue the build, the resulting application will not use ARCore, " +
                "falling back to 'legacyCameraMode' instead. External SLAM features and " +
                "real-time calibration data will be unavailable." +
                "\n\nWould you like to enable IL2CPP and 64 Bit build?",
                "Enable 64 bit and continue");
        }

        private static bool UsesIL2CPP()
        {
            return PlayerSettings.GetScriptingBackend(BuildTargetGroup.Android) ==
                   ScriptingImplementation.IL2CPP;
        }

        private static bool Is32BitWithout64Bit()
        {
            return Is32BitWithout64Bit_ARM() || Is32BitWithout64Bit_x86();
        }

        private static bool Is32BitWithout64Bit_ARM()
        {
            var arm32BitEnabled =
                (PlayerSettings.Android.targetArchitectures & AndroidArchitecture.ARMv7) !=
                AndroidArchitecture.None;
            var arm64BitEnabled =
                (PlayerSettings.Android.targetArchitectures & AndroidArchitecture.ARM64) !=
                AndroidArchitecture.None;
            return arm32BitEnabled && !arm64BitEnabled;
        }

        private static bool Is32BitWithout64Bit_x86()
        {
            var x86_32BitEnabled =
                (PlayerSettings.Android.targetArchitectures & AndroidArchitecture.X86) !=
                AndroidArchitecture.None;
            var x86_64BitEnabled =
                (PlayerSettings.Android.targetArchitectures & AndroidArchitecture.X86_64) !=
                AndroidArchitecture.None;
            return x86_32BitEnabled && !x86_64BitEnabled;
        }

        private static void EnableIL2CPP()
        {
            PlayerSettings.SetScriptingBackend(
                BuildTargetGroup.Android,
                ScriptingImplementation.IL2CPP);
        }

        private static void Enable64Bit_ARM()
        {
            PlayerSettings.Android.targetArchitectures |= AndroidArchitecture.ARM64;
        }

        private static void Enable64Bit_x86()
        {
            PlayerSettings.Android.targetArchitectures |= AndroidArchitecture.X86_64;
        }
    }
}
#endif // UNITY_ANDROID
