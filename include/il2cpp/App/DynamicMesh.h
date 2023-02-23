#pragma once

#include "il2cpp.h"

void App_DynamicMesh___ctor (App_DynamicMesh_o* __this, int32_t vertexCapacity, const MethodInfo* method);
void App_DynamicMesh___ctor (App_DynamicMesh_o* __this, int32_t subMeshCount, int32_t vertexCapacity, const MethodInfo* method);
void App_DynamicMesh___ctor (App_DynamicMesh_o* __this, UnityEngine_GameObject_o* go, int32_t subMeshCount, int32_t vertexCapacity, const MethodInfo* method);
void App_DynamicMesh__Finalize (App_DynamicMesh_o* __this, const MethodInfo* method);
void App_DynamicMesh__Setup (App_DynamicMesh_o* __this, UnityEngine_GameObject_o* go, int32_t subMeshCount, int32_t vertexCapacity, const MethodInfo* method);
void App_DynamicMesh__Dispose (App_DynamicMesh_o* __this, const MethodInfo* method);
UnityEngine_Mesh_o* App_DynamicMesh__get_Mesh (App_DynamicMesh_o* __this, const MethodInfo* method);
void App_DynamicMesh__AddPosition (App_DynamicMesh_o* __this, UnityEngine_Vector3_o* position, const MethodInfo* method);
void App_DynamicMesh__AddNormal (App_DynamicMesh_o* __this, UnityEngine_Vector3_o* normal, const MethodInfo* method);
void App_DynamicMesh__AddTangents (App_DynamicMesh_o* __this, UnityEngine_Vector4_o* tangent, const MethodInfo* method);
void App_DynamicMesh__AddColor (App_DynamicMesh_o* __this, UnityEngine_Color_o* color, const MethodInfo* method);
void App_DynamicMesh__AddUV (App_DynamicMesh_o* __this, UnityEngine_Vector2_o* uv, const MethodInfo* method);
void App_DynamicMesh__AddUV (App_DynamicMesh_o* __this, int32_t ch, UnityEngine_Vector2_o* uv, const MethodInfo* method);
void App_DynamicMesh__AddVertex (App_DynamicMesh_o* __this, UnityEngine_Vector3_o* position, UnityEngine_Color_o* color, const MethodInfo* method);
void App_DynamicMesh__AddVertex (App_DynamicMesh_o* __this, UnityEngine_Vector3_o* position, UnityEngine_Color_o* color, UnityEngine_Vector2_o* uv, const MethodInfo* method);
void App_DynamicMesh__AddVertex (App_DynamicMesh_o* __this, UnityEngine_Vector3_o* position, UnityEngine_Vector2_o* uv, const MethodInfo* method);
void App_DynamicMesh__StripBegin (App_DynamicMesh_o* __this, const MethodInfo* method);
void App_DynamicMesh__StripEnd (App_DynamicMesh_o* __this, const MethodInfo* method);
void App_DynamicMesh__Clear (App_DynamicMesh_o* __this, const MethodInfo* method);
App_DynamicMesh_Scope_o App_DynamicMesh__CreateScope (App_DynamicMesh_o* __this, int32_t mode, int32_t subMeshIndex, const MethodInfo* method);
void App_DynamicMesh__Begin (App_DynamicMesh_o* __this, int32_t mode, int32_t subMeshIndex, const MethodInfo* method);
void App_DynamicMesh__End (App_DynamicMesh_o* __this, const MethodInfo* method);
int32_t App_DynamicMesh__GetCommonMode (App_DynamicMesh_o* __this, const MethodInfo* method);
void App_DynamicMesh__Commit (App_DynamicMesh_o* __this, const MethodInfo* method);
void App_DynamicMesh__CopySubMesh (App_DynamicMesh_o* __this, int32_t srcMeshIndex, int32_t dstMeshIndex, const MethodInfo* method);
void App_DynamicMesh___cctor (const MethodInfo* method);
