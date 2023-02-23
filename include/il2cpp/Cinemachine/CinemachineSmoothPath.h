#pragma once

#include "il2cpp.h"

float Cinemachine_CinemachineSmoothPath__get_MinPos (Cinemachine_CinemachineSmoothPath_o* __this, const MethodInfo* method);
float Cinemachine_CinemachineSmoothPath__get_MaxPos (Cinemachine_CinemachineSmoothPath_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineSmoothPath__get_Looped (Cinemachine_CinemachineSmoothPath_o* __this, const MethodInfo* method);
int32_t Cinemachine_CinemachineSmoothPath__get_DistanceCacheSampleStepsPerSegment (Cinemachine_CinemachineSmoothPath_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineSmoothPath__OnValidate (Cinemachine_CinemachineSmoothPath_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineSmoothPath__Reset (Cinemachine_CinemachineSmoothPath_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineSmoothPath__InvalidateDistanceCache (Cinemachine_CinemachineSmoothPath_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineSmoothPath__UpdateControlPoints (Cinemachine_CinemachineSmoothPath_o* __this, const MethodInfo* method);
float Cinemachine_CinemachineSmoothPath__GetBoundingIndices (Cinemachine_CinemachineSmoothPath_o* __this, float pos, int32_t* indexA, int32_t* indexB, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineSmoothPath__EvaluatePosition (Cinemachine_CinemachineSmoothPath_o* __this, float pos, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineSmoothPath__EvaluateTangent (Cinemachine_CinemachineSmoothPath_o* __this, float pos, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CinemachineSmoothPath__EvaluateOrientation (Cinemachine_CinemachineSmoothPath_o* __this, float pos, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CinemachineSmoothPath__RollAroundForward (Cinemachine_CinemachineSmoothPath_o* __this, float angle, const MethodInfo* method);
void Cinemachine_CinemachineSmoothPath___ctor (Cinemachine_CinemachineSmoothPath_o* __this, const MethodInfo* method);
