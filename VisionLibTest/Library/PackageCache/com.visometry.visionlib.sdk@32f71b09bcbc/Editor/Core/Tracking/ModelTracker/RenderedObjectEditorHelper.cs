using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Visometry.VisionLib.SDK.Core
{
    public static class RenderedObjectEditorHelper
    {
        public static void DrawEnableMeshRenderersButton(GameObject rootObject)
        {
            var buttonShouldEnableRenderers = rootObject.GetComponentsInChildren<MeshRenderer>()
                .Any(renderer => !renderer.enabled);
            var buttonParameters = buttonShouldEnableRenderers
                ? RenderedObjectEditorSettings.enableMeshRenderersButtonParameters
                : RenderedObjectEditorSettings.disableMeshRenderersButtonParameters;

            if (ButtonParameters.ButtonWasClicked(buttonParameters))
            {
                TrackingObjectHelper.SetMeshRenderersEnabledInSubtree(
                    rootObject,
                    buttonShouldEnableRenderers);
            }
        }

        public static void DrawRenderedObjectsSection(List<RenderedObject> renderedObjects)
        {
            if (renderedObjects.Count <= 0)
            {
                return;
            }
            GUILayout.BeginVertical("", "HelpBox");
            foreach (var renderedObject in renderedObjects)
            {
                DrawRenderedObject(renderedObject);
            }
            GUILayout.EndVertical();
        }

        private static void DrawRenderedObject(RenderedObject renderedObject)
        {
            RevealInHierarchy.DrawButton(
                GetRenderedObjectLabel(renderedObject),
                renderedObject.gameObject);
        }

        private static string GetRenderedObjectLabel(RenderedObject renderedObject)
        {
            return renderedObject.gameObject.name + " (" + renderedObject.renderMode + ")";
        }
    }
}
