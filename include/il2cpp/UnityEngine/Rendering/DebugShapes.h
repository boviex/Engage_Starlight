#pragma once

#include "il2cpp.h"

UnityEngine_Rendering_DebugShapes_o* UnityEngine_Rendering_DebugShapes__get_instance (const MethodInfo* method);
void UnityEngine_Rendering_DebugShapes__BuildSphere (UnityEngine_Rendering_DebugShapes_o* __this, UnityEngine_Mesh_o** outputMesh, float radius, uint32_t longSubdiv, uint32_t latSubdiv, const MethodInfo* method);
void UnityEngine_Rendering_DebugShapes__BuildBox (UnityEngine_Rendering_DebugShapes_o* __this, UnityEngine_Mesh_o** outputMesh, float length, float width, float height, const MethodInfo* method);
void UnityEngine_Rendering_DebugShapes__BuildCone (UnityEngine_Rendering_DebugShapes_o* __this, UnityEngine_Mesh_o** outputMesh, float height, float topRadius, float bottomRadius, int32_t nbSides, const MethodInfo* method);
void UnityEngine_Rendering_DebugShapes__BuildPyramid (UnityEngine_Rendering_DebugShapes_o* __this, UnityEngine_Mesh_o** outputMesh, float width, float height, float depth, const MethodInfo* method);
void UnityEngine_Rendering_DebugShapes__BuildShapes (UnityEngine_Rendering_DebugShapes_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugShapes__RebuildResources (UnityEngine_Rendering_DebugShapes_o* __this, const MethodInfo* method);
UnityEngine_Mesh_o* UnityEngine_Rendering_DebugShapes__RequestSphereMesh (UnityEngine_Rendering_DebugShapes_o* __this, const MethodInfo* method);
UnityEngine_Mesh_o* UnityEngine_Rendering_DebugShapes__RequestBoxMesh (UnityEngine_Rendering_DebugShapes_o* __this, const MethodInfo* method);
UnityEngine_Mesh_o* UnityEngine_Rendering_DebugShapes__RequestConeMesh (UnityEngine_Rendering_DebugShapes_o* __this, const MethodInfo* method);
UnityEngine_Mesh_o* UnityEngine_Rendering_DebugShapes__RequestPyramidMesh (UnityEngine_Rendering_DebugShapes_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugShapes___ctor (UnityEngine_Rendering_DebugShapes_o* __this, const MethodInfo* method);
void UnityEngine_Rendering_DebugShapes___cctor (const MethodInfo* method);
