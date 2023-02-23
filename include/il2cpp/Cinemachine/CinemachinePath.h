#pragma once

#include "il2cpp.h"

float Cinemachine_CinemachinePath__get_MinPos (Cinemachine_CinemachinePath_o* __this, const MethodInfo* method);
float Cinemachine_CinemachinePath__get_MaxPos (Cinemachine_CinemachinePath_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachinePath__get_Looped (Cinemachine_CinemachinePath_o* __this, const MethodInfo* method);
void Cinemachine_CinemachinePath__Reset (Cinemachine_CinemachinePath_o* __this, const MethodInfo* method);
int32_t Cinemachine_CinemachinePath__get_DistanceCacheSampleStepsPerSegment (Cinemachine_CinemachinePath_o* __this, const MethodInfo* method);
float Cinemachine_CinemachinePath__GetBoundingIndices (Cinemachine_CinemachinePath_o* __this, float pos, int32_t* indexA, int32_t* indexB, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachinePath__EvaluatePosition (Cinemachine_CinemachinePath_o* __this, float pos, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachinePath__EvaluateTangent (Cinemachine_CinemachinePath_o* __this, float pos, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CinemachinePath__EvaluateOrientation (Cinemachine_CinemachinePath_o* __this, float pos, const MethodInfo* method);
void Cinemachine_CinemachinePath__OnValidate (Cinemachine_CinemachinePath_o* __this, const MethodInfo* method);
void Cinemachine_CinemachinePath___ctor (Cinemachine_CinemachinePath_o* __this, const MethodInfo* method);
