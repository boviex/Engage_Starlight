#pragma once

#include "il2cpp.h"

int32_t UnityEngine_Rendering_CullingResults__GetLightIndexCount (intptr_t cullingResultsPtr, const MethodInfo* method);
int32_t UnityEngine_Rendering_CullingResults__GetReflectionProbeIndexCount (intptr_t cullingResultsPtr, const MethodInfo* method);
void UnityEngine_Rendering_CullingResults__FillLightAndReflectionProbeIndices (intptr_t cullingResultsPtr, UnityEngine_ComputeBuffer_o* computeBuffer, const MethodInfo* method);
int32_t UnityEngine_Rendering_CullingResults__GetLightIndexMapSize (intptr_t cullingResultsPtr, const MethodInfo* method);
void UnityEngine_Rendering_CullingResults__FillLightIndexMap (intptr_t cullingResultsPtr, intptr_t indexMapPtr, int32_t indexMapSize, const MethodInfo* method);
void UnityEngine_Rendering_CullingResults__SetLightIndexMap (intptr_t cullingResultsPtr, intptr_t indexMapPtr, int32_t indexMapSize, const MethodInfo* method);
bool UnityEngine_Rendering_CullingResults__GetShadowCasterBounds (intptr_t cullingResultsPtr, int32_t lightIndex, UnityEngine_Bounds_o* bounds, const MethodInfo* method);
bool UnityEngine_Rendering_CullingResults__ComputeSpotShadowMatricesAndCullingPrimitives (intptr_t cullingResultsPtr, int32_t activeLightIndex, UnityEngine_Matrix4x4_o* viewMatrix, UnityEngine_Matrix4x4_o* projMatrix, UnityEngine_Rendering_ShadowSplitData_o* shadowSplitData, const MethodInfo* method);
bool UnityEngine_Rendering_CullingResults__ComputeDirectionalShadowMatricesAndCullingPrimitives (intptr_t cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, UnityEngine_Vector3_o splitRatio, int32_t shadowResolution, float shadowNearPlaneOffset, UnityEngine_Matrix4x4_o* viewMatrix, UnityEngine_Matrix4x4_o* projMatrix, UnityEngine_Rendering_ShadowSplitData_o* shadowSplitData, const MethodInfo* method);
Unity_Collections_NativeArray_VisibleLight__o UnityEngine_Rendering_CullingResults__get_visibleLights (UnityEngine_Rendering_CullingResults_o __this, const MethodInfo* method);
Unity_Collections_NativeArray_T__o UnityEngine_Rendering_CullingResults__GetNativeArray_VisibleLight_ (UnityEngine_Rendering_CullingResults_o __this, void* dataPointer, int32_t length, const MethodInfo_22C4330* method);
int32_t UnityEngine_Rendering_CullingResults__get_lightAndReflectionProbeIndexCount (UnityEngine_Rendering_CullingResults_o __this, const MethodInfo* method);
void UnityEngine_Rendering_CullingResults__FillLightAndReflectionProbeIndices (UnityEngine_Rendering_CullingResults_o __this, UnityEngine_ComputeBuffer_o* computeBuffer, const MethodInfo* method);
Unity_Collections_NativeArray_int__o UnityEngine_Rendering_CullingResults__GetLightIndexMap (UnityEngine_Rendering_CullingResults_o __this, int32_t allocator, const MethodInfo* method);
void UnityEngine_Rendering_CullingResults__SetLightIndexMap (UnityEngine_Rendering_CullingResults_o __this, Unity_Collections_NativeArray_int__o lightIndexMap, const MethodInfo* method);
bool UnityEngine_Rendering_CullingResults__GetShadowCasterBounds (UnityEngine_Rendering_CullingResults_o __this, int32_t lightIndex, UnityEngine_Bounds_o* outBounds, const MethodInfo* method);
bool UnityEngine_Rendering_CullingResults__ComputeSpotShadowMatricesAndCullingPrimitives (UnityEngine_Rendering_CullingResults_o __this, int32_t activeLightIndex, UnityEngine_Matrix4x4_o* viewMatrix, UnityEngine_Matrix4x4_o* projMatrix, UnityEngine_Rendering_ShadowSplitData_o* shadowSplitData, const MethodInfo* method);
bool UnityEngine_Rendering_CullingResults__ComputeDirectionalShadowMatricesAndCullingPrimitives (UnityEngine_Rendering_CullingResults_o __this, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, UnityEngine_Vector3_o splitRatio, int32_t shadowResolution, float shadowNearPlaneOffset, UnityEngine_Matrix4x4_o* viewMatrix, UnityEngine_Matrix4x4_o* projMatrix, UnityEngine_Rendering_ShadowSplitData_o* shadowSplitData, const MethodInfo* method);
bool UnityEngine_Rendering_CullingResults__Equals (UnityEngine_Rendering_CullingResults_o __this, UnityEngine_Rendering_CullingResults_o other, const MethodInfo* method);
bool UnityEngine_Rendering_CullingResults__Equals (UnityEngine_Rendering_CullingResults_o __this, Il2CppObject* obj, const MethodInfo* method);
int32_t UnityEngine_Rendering_CullingResults__GetHashCode (UnityEngine_Rendering_CullingResults_o __this, const MethodInfo* method);
bool UnityEngine_Rendering_CullingResults__ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected (intptr_t cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, UnityEngine_Vector3_o* splitRatio, int32_t shadowResolution, float shadowNearPlaneOffset, UnityEngine_Matrix4x4_o* viewMatrix, UnityEngine_Matrix4x4_o* projMatrix, UnityEngine_Rendering_ShadowSplitData_o* shadowSplitData, const MethodInfo* method);