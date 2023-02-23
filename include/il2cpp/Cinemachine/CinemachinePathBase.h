#pragma once

#include "il2cpp.h"

float Cinemachine_CinemachinePathBase__StandardizePos (Cinemachine_CinemachinePathBase_o* __this, float pos, const MethodInfo* method);
float Cinemachine_CinemachinePathBase__FindClosestPoint (Cinemachine_CinemachinePathBase_o* __this, UnityEngine_Vector3_o p, int32_t startSegment, int32_t searchRadius, int32_t stepsPerSegment, const MethodInfo* method);
float Cinemachine_CinemachinePathBase__MinUnit (Cinemachine_CinemachinePathBase_o* __this, int32_t units, const MethodInfo* method);
float Cinemachine_CinemachinePathBase__MaxUnit (Cinemachine_CinemachinePathBase_o* __this, int32_t units, const MethodInfo* method);
float Cinemachine_CinemachinePathBase__StandardizeUnit (Cinemachine_CinemachinePathBase_o* __this, float pos, int32_t units, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachinePathBase__EvaluatePositionAtUnit (Cinemachine_CinemachinePathBase_o* __this, float pos, int32_t units, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachinePathBase__EvaluateTangentAtUnit (Cinemachine_CinemachinePathBase_o* __this, float pos, int32_t units, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CinemachinePathBase__EvaluateOrientationAtUnit (Cinemachine_CinemachinePathBase_o* __this, float pos, int32_t units, const MethodInfo* method);
void Cinemachine_CinemachinePathBase__InvalidateDistanceCache (Cinemachine_CinemachinePathBase_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachinePathBase__DistanceCacheIsValid (Cinemachine_CinemachinePathBase_o* __this, const MethodInfo* method);
float Cinemachine_CinemachinePathBase__get_PathLength (Cinemachine_CinemachinePathBase_o* __this, const MethodInfo* method);
float Cinemachine_CinemachinePathBase__StandardizePathDistance (Cinemachine_CinemachinePathBase_o* __this, float distance, const MethodInfo* method);
float Cinemachine_CinemachinePathBase__ToNativePathUnits (Cinemachine_CinemachinePathBase_o* __this, float pos, int32_t units, const MethodInfo* method);
float Cinemachine_CinemachinePathBase__FromPathNativeUnits (Cinemachine_CinemachinePathBase_o* __this, float pos, int32_t units, const MethodInfo* method);
void Cinemachine_CinemachinePathBase__ResamplePath (Cinemachine_CinemachinePathBase_o* __this, int32_t stepsPerSegment, const MethodInfo* method);
void Cinemachine_CinemachinePathBase___ctor (Cinemachine_CinemachinePathBase_o* __this, const MethodInfo* method);
