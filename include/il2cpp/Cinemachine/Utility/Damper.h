#pragma once

#include "il2cpp.h"

float Cinemachine_Utility_Damper__DecayConstant (float time, float residual, const MethodInfo* method);
float Cinemachine_Utility_Damper__DecayedRemainder (float initial, float decayConstant, float deltaTime, const MethodInfo* method);
float Cinemachine_Utility_Damper__Damp (float initial, float dampTime, float deltaTime, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_Utility_Damper__Damp (UnityEngine_Vector3_o initial, UnityEngine_Vector3_o dampTime, float deltaTime, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_Utility_Damper__Damp (UnityEngine_Vector3_o initial, float dampTime, float deltaTime, const MethodInfo* method);
