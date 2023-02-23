#pragma once

#include "il2cpp.h"

void Cinemachine_CinemachineImpulseManager___ctor (Cinemachine_CinemachineImpulseManager_o* __this, const MethodInfo* method);
Cinemachine_CinemachineImpulseManager_o* Cinemachine_CinemachineImpulseManager__get_Instance (const MethodInfo* method);
void Cinemachine_CinemachineImpulseManager__InitializeModule (const MethodInfo* method);
bool Cinemachine_CinemachineImpulseManager__GetImpulseAt (Cinemachine_CinemachineImpulseManager_o* __this, UnityEngine_Vector3_o listenerLocation, bool distance2D, int32_t channelMask, UnityEngine_Vector3_o* pos, UnityEngine_Quaternion_o* rot, const MethodInfo* method);
bool Cinemachine_CinemachineImpulseManager__get_IgnoreTimeScale (Cinemachine_CinemachineImpulseManager_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineImpulseManager__set_IgnoreTimeScale (Cinemachine_CinemachineImpulseManager_o* __this, bool value, const MethodInfo* method);
float Cinemachine_CinemachineImpulseManager__get_CurrentTime (Cinemachine_CinemachineImpulseManager_o* __this, const MethodInfo* method);
Cinemachine_CinemachineImpulseManager_ImpulseEvent_o* Cinemachine_CinemachineImpulseManager__NewImpulseEvent (Cinemachine_CinemachineImpulseManager_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineImpulseManager__AddImpulseEvent (Cinemachine_CinemachineImpulseManager_o* __this, Cinemachine_CinemachineImpulseManager_ImpulseEvent_o* e, const MethodInfo* method);
void Cinemachine_CinemachineImpulseManager__Clear (Cinemachine_CinemachineImpulseManager_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineImpulseManager___cctor (const MethodInfo* method);
