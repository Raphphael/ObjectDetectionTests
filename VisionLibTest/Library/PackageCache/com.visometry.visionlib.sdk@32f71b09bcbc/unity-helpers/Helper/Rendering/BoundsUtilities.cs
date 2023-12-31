﻿using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Visometry.Helpers
{
    public static class BoundsUtilities
    {
        /// <summary>
        /// Creates an array of all corner points in the Bounds
        /// </summary>
        public static Vector3[] Corners(this Bounds bounds)
        {
            var corners = new Vector3[8];
            corners[0] = bounds.min;
            corners[1] = new Vector3(bounds.min.x, bounds.min.y, bounds.max.z);
            corners[2] = new Vector3(bounds.min.x, bounds.max.y, bounds.min.z);
            corners[4] = new Vector3(bounds.min.x, bounds.max.y, bounds.max.z);
            corners[3] = new Vector3(bounds.max.x, bounds.min.y, bounds.min.z);
            corners[5] = new Vector3(bounds.max.x, bounds.min.y, bounds.max.z);
            corners[6] = new Vector3(bounds.max.x, bounds.max.y, bounds.min.z);
            corners[7] = bounds.max;
            return corners;
        }

        public static Bounds GetBounds(Vector3[] points)
        {
            if (points.Length == 0)
            {
                throw new ArgumentException("GetBounds cannot be called with empty array");
            }

            var newBounds = new Bounds(points[0], Vector3.zero);
            foreach (var point in points)
            {
                newBounds.Encapsulate(point);
            }
            return newBounds;
        }

        /// <summary>
        /// Combines the given bounds by encapsulating them into the first one.
        ///
        /// Returns null if no bounds are supplied.
        /// </summary>

        public static Bounds? Combine(this IEnumerable<Bounds> bounds)
        {
            if (bounds.Count() == 0)
            {
                return null;
            }
            var newBounds = bounds.First();
            foreach (var bound in bounds)
            {
                newBounds.Encapsulate(bound);
            }
            return newBounds;
        }

        /// <summary>
        /// Creates a rotated version of the Bounds
        /// </summary>
        public static Bounds Rotate(this Bounds bounds, Quaternion rotation)
        {
            return GetBounds(bounds.Corners().Select(corner => rotation * corner).ToArray());
        }

        /// <summary>
        /// Creates a rotated version of the Bounds
        /// </summary>
        public static Bounds Transform(this Bounds bounds, Matrix4x4 transform)
        {
            return GetBounds(bounds.Corners().Select(transform.MultiplyPoint3x4).ToArray());
        }

        /// <summary>
        ///     Get the "axis-aligned bounding box of the meshes on this gameobject (not including children)
        ///     in its local space. (that is, not affected by the transform)". I.e. the bounding box around the mesh
        ///     as it was imported.
        ///     For more details see: https://docs.unity3d.com/ScriptReference/Mesh-bounds.html
        /// </summary>
        /// <param name="gameObject">
        ///     GameObject whose bounding box should be calculated. Only <see cref="MeshFilter"/>
        ///     components are considered in the bounding box calculations. 
        /// </param>
        /// @exception UnsupportedTypeException
        public static Bounds GetMeshBounds(GameObject gameObject)
        {
            return GetBoundsFrom<MeshFilter>(
                gameObject,
                component => component.sharedMesh.bounds,
                false);
        }

        /// <summary>
        ///     Get the "axis-aligned bounding box fully enclosing the object in world space.".
        ///     I.e. the bounding box around the mesh considering the transforms that have been
        ///     applied to it in the scene.
        ///     For more details see: https://docs.unity3d.com/ScriptReference/Renderer-bounds.html
        /// </summary>
        /// <param name="gameObject">
        ///     GameObject whose bounding box should be calculated. Only <see cref="MeshFilter"/>
        ///     components are considered in the bounding box calculations. 
        /// </param>
        /// <param name="includeChildren">
        ///     If true, <see cref="MeshFilter"/>s on child GameObjects are included in the
        ///     bounding box calculation.
        /// </param>
        /// @exception UnsupportedTypeException
        public static Bounds GetRendererBounds(GameObject gameObject, bool includeChildren = true)
        {
            return GetBoundsFrom<MeshRenderer>(
                gameObject,
                component => component.bounds,
                includeChildren);
        }

        /// <summary>
        ///     Get the size of the model in meters.
        /// </summary>
        /// <param name="gameObject">
        ///     GameObject whose dimensions should be calculated. Only <see cref="MeshFilter"/>
        ///     components are considered in the calculations. 
        /// </param>
        /// <param name="includeChildren">
        ///     If true, <see cref="MeshFilter"/>s on child GameObjects are included in the
        ///     calculation.
        /// </param>
        /// @exception UnsupportedTypeException
        public static Vector3 GetModelDimensions(GameObject gameObject, bool includeChildren = true)
        {
            return GetMeshBoundsInParentCoordinates(
                gameObject,
                gameObject.transform,
                includeChildren).size;
        }

        /// <summary>
        ///     Get the bounding box of the child in the coordinate system of the parent.
        /// </summary>
        /// <param name="gameObject">
        ///     GameObject whose dimensions should be calculated. Only <see cref="MeshFilter"/>
        ///     components are considered in the calculations. 
        /// </param>
        /// <param name="parent">
        ///    The coordinate system in which the GameObject's bounding box should be given. 
        /// </param>
        /// <param name="includeChildren">
        ///     If true, <see cref="MeshFilter"/>s on child GameObjects are included in the
        ///     calculation.
        /// </param>
        /// @exception UnsupportedTypeException
        public static Bounds GetMeshBoundsInParentCoordinates(
            GameObject gameObject,
            Transform parent,
            bool includeChildren = true)
        {
            return GetBoundsFrom<MeshFilter>(
                gameObject,
                component => component.sharedMesh.bounds.Transform(
                    TransformUtilities.GetRelativeTransform(component.transform, parent)),
                includeChildren);
        }

        private static Bounds GetBoundsFrom<ComponentType>(
            GameObject parent,
            Func<ComponentType, Bounds> getBoundsFromComponent,
            bool includeChildren) where ComponentType : Component
        {
            if (parent == null)
            {
                return new Bounds();
            }

            var components = includeChildren
                ? parent.transform.GetComponentsInChildren<ComponentType>()
                : parent.transform.GetComponents<ComponentType>();
            if (components.Length == 0)
            {
                return new Bounds(parent.transform.position, Vector3.zero);
            }

            var bounds = getBoundsFromComponent(components[0]);
            foreach (var component in components)
            {
                bounds.Encapsulate(getBoundsFromComponent(component));
            }
            return bounds;
        }
    }
}
