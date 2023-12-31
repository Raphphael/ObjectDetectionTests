﻿using System;
using UnityEditor;

namespace Visometry.VisionLib.SDK.Core
{
    /**
     *  @ingroup Core
     */
    [CustomEditor(typeof(PosterTrackerLegacy))]
    [Obsolete("The PosterTrackerLegacy uses the old tracking setup where only the camera moves. Use the PosterTracker instead.")]
    public class PosterTrackerLegacyEditor : SceneValidationCheckEditor
    {
    }
}
