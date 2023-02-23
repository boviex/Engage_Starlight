#pragma once

#include "il2cpp.h"

void UnityEngine_AI_NavMesh__Internal_CallOnNavMeshPreUpdate (const MethodInfo* method);
bool UnityEngine_AI_NavMesh__CalculatePath (UnityEngine_Vector3_o sourcePosition, UnityEngine_Vector3_o targetPosition, int32_t areaMask, UnityEngine_AI_NavMeshPath_o* path, const MethodInfo* method);
bool UnityEngine_AI_NavMesh__CalculatePathInternal (UnityEngine_Vector3_o sourcePosition, UnityEngine_Vector3_o targetPosition, int32_t areaMask, UnityEngine_AI_NavMeshPath_o* path, const MethodInfo* method);
bool UnityEngine_AI_NavMesh__SamplePosition (UnityEngine_Vector3_o sourcePosition, UnityEngine_AI_NavMeshHit_o* hit, float maxDistance, int32_t areaMask, const MethodInfo* method);
bool UnityEngine_AI_NavMesh__CalculatePathInternal_Injected (UnityEngine_Vector3_o* sourcePosition, UnityEngine_Vector3_o* targetPosition, int32_t areaMask, UnityEngine_AI_NavMeshPath_o* path, const MethodInfo* method);
bool UnityEngine_AI_NavMesh__SamplePosition_Injected (UnityEngine_Vector3_o* sourcePosition, UnityEngine_AI_NavMeshHit_o* hit, float maxDistance, int32_t areaMask, const MethodInfo* method);
