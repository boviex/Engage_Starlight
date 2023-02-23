#pragma once

#include "il2cpp.h"

void UnityEngine_Mesh_MeshDataArray__AcquireReadOnlyMeshData (UnityEngine_Mesh_o* mesh, intptr_t* datas, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray__AcquireReadOnlyMeshDatas (UnityEngine_Mesh_array* meshes, intptr_t* datas, int32_t count, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray__ReleaseMeshDatas (intptr_t* datas, int32_t count, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray__CreateNewMeshDatas (intptr_t* datas, int32_t count, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray__ApplyToMeshesImpl (UnityEngine_Mesh_array* meshes, intptr_t* datas, int32_t count, int32_t flags, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray__ApplyToMeshImpl (UnityEngine_Mesh_o* mesh, intptr_t data, int32_t flags, const MethodInfo* method);
int32_t UnityEngine_Mesh_MeshDataArray__get_Length (UnityEngine_Mesh_MeshDataArray_o __this, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray__Dispose (UnityEngine_Mesh_MeshDataArray_o __this, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray__ApplyToMeshAndDispose (UnityEngine_Mesh_MeshDataArray_o __this, UnityEngine_Mesh_o* mesh, int32_t flags, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray__ApplyToMeshesAndDispose (UnityEngine_Mesh_MeshDataArray_o __this, UnityEngine_Mesh_array* meshes, int32_t flags, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray___ctor (UnityEngine_Mesh_MeshDataArray_o __this, UnityEngine_Mesh_o* mesh, bool checkReadWrite, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray___ctor (UnityEngine_Mesh_MeshDataArray_o __this, UnityEngine_Mesh_array* meshes, int32_t meshesCount, bool checkReadWrite, const MethodInfo* method);
void UnityEngine_Mesh_MeshDataArray___ctor (UnityEngine_Mesh_MeshDataArray_o __this, int32_t meshesCount, const MethodInfo* method);
