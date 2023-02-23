#pragma once

#include "il2cpp.h"

int32_t UnityEngine_TerrainData__GetBoundaryValue (int32_t type, const MethodInfo* method);
void UnityEngine_TerrainData___ctor (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
void UnityEngine_TerrainData__Internal_Create (UnityEngine_TerrainData_o* terrainData, const MethodInfo* method);
int32_t UnityEngine_TerrainData__get_heightmapResolution (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
int32_t UnityEngine_TerrainData__get_internalHeightmapResolution (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_TerrainData__get_heightmapScale (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_TerrainData__get_size (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
System_Single_array* UnityEngine_TerrainData__GetHeights (UnityEngine_TerrainData_o* __this, int32_t xBase, int32_t yBase, int32_t width, int32_t height, const MethodInfo* method);
System_Single_array* UnityEngine_TerrainData__Internal_GetHeights (UnityEngine_TerrainData_o* __this, int32_t xBase, int32_t yBase, int32_t width, int32_t height, const MethodInfo* method);
void UnityEngine_TerrainData__SetHeights (UnityEngine_TerrainData_o* __this, int32_t xBase, int32_t yBase, System_Single_array* heights, const MethodInfo* method);
void UnityEngine_TerrainData__Internal_SetHeights (UnityEngine_TerrainData_o* __this, int32_t xBase, int32_t yBase, int32_t width, int32_t height, System_Single_array* heights, const MethodInfo* method);
UnityEngine_Vector3_o UnityEngine_TerrainData__GetInterpolatedNormal (UnityEngine_TerrainData_o* __this, float x, float y, const MethodInfo* method);
int32_t UnityEngine_TerrainData__get_alphamapLayers (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
System_Single_array* UnityEngine_TerrainData__GetAlphamaps (UnityEngine_TerrainData_o* __this, int32_t x, int32_t y, int32_t width, int32_t height, const MethodInfo* method);
System_Single_array* UnityEngine_TerrainData__Internal_GetAlphamaps (UnityEngine_TerrainData_o* __this, int32_t x, int32_t y, int32_t width, int32_t height, const MethodInfo* method);
int32_t UnityEngine_TerrainData__get_alphamapResolution (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
float UnityEngine_TerrainData__GetAlphamapResolutionInternal (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
int32_t UnityEngine_TerrainData__get_Internal_alphamapResolution (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
int32_t UnityEngine_TerrainData__get_alphamapWidth (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
int32_t UnityEngine_TerrainData__get_alphamapHeight (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
void UnityEngine_TerrainData__SetAlphamaps (UnityEngine_TerrainData_o* __this, int32_t x, int32_t y, System_Single_array* map, const MethodInfo* method);
void UnityEngine_TerrainData__Internal_SetAlphamaps (UnityEngine_TerrainData_o* __this, int32_t x, int32_t y, int32_t width, int32_t height, System_Single_array* map, const MethodInfo* method);
UnityEngine_Terrain_array* UnityEngine_TerrainData__get_users (UnityEngine_TerrainData_o* __this, const MethodInfo* method);
void UnityEngine_TerrainData___cctor (const MethodInfo* method);
void UnityEngine_TerrainData__get_heightmapScale_Injected (UnityEngine_TerrainData_o* __this, UnityEngine_Vector3_o* ret, const MethodInfo* method);
void UnityEngine_TerrainData__get_size_Injected (UnityEngine_TerrainData_o* __this, UnityEngine_Vector3_o* ret, const MethodInfo* method);
void UnityEngine_TerrainData__GetInterpolatedNormal_Injected (UnityEngine_TerrainData_o* __this, float x, float y, UnityEngine_Vector3_o* ret, const MethodInfo* method);
