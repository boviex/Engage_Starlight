#pragma once

#include "il2cpp.h"

Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineBlend__get_CamA (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlend__set_CamA (Cinemachine_CinemachineBlend_o* __this, Cinemachine_ICinemachineCamera_o* value, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineBlend__get_CamB (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlend__set_CamB (Cinemachine_CinemachineBlend_o* __this, Cinemachine_ICinemachineCamera_o* value, const MethodInfo* method);
UnityEngine_AnimationCurve_o* Cinemachine_CinemachineBlend__get_BlendCurve (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlend__set_BlendCurve (Cinemachine_CinemachineBlend_o* __this, UnityEngine_AnimationCurve_o* value, const MethodInfo* method);
float Cinemachine_CinemachineBlend__get_TimeInBlend (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlend__set_TimeInBlend (Cinemachine_CinemachineBlend_o* __this, float value, const MethodInfo* method);
float Cinemachine_CinemachineBlend__get_BlendWeight (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineBlend__get_IsValid (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
float Cinemachine_CinemachineBlend__get_Duration (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlend__set_Duration (Cinemachine_CinemachineBlend_o* __this, float value, const MethodInfo* method);
bool Cinemachine_CinemachineBlend__get_IsComplete (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
System_String_o* Cinemachine_CinemachineBlend__get_Description (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineBlend__Uses (Cinemachine_CinemachineBlend_o* __this, Cinemachine_ICinemachineCamera_o* cam, const MethodInfo* method);
void Cinemachine_CinemachineBlend___ctor (Cinemachine_CinemachineBlend_o* __this, Cinemachine_ICinemachineCamera_o* a, Cinemachine_ICinemachineCamera_o* b, UnityEngine_AnimationCurve_o* curve, float duration, float t, const MethodInfo* method);
void Cinemachine_CinemachineBlend__UpdateCameraState (Cinemachine_CinemachineBlend_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CinemachineBlend__get_State (Cinemachine_CinemachineBlend_o* __this, const MethodInfo* method);
