#pragma once

#include "il2cpp.h"

void Cinemachine_StaticPointVirtualCamera___ctor (Cinemachine_StaticPointVirtualCamera_o* __this, Cinemachine_CameraState_o state, System_String_o* name, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__SetState (Cinemachine_StaticPointVirtualCamera_o* __this, Cinemachine_CameraState_o state, const MethodInfo* method);
System_String_o* Cinemachine_StaticPointVirtualCamera__get_Name (Cinemachine_StaticPointVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__set_Name (Cinemachine_StaticPointVirtualCamera_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* Cinemachine_StaticPointVirtualCamera__get_Description (Cinemachine_StaticPointVirtualCamera_o* __this, const MethodInfo* method);
int32_t Cinemachine_StaticPointVirtualCamera__get_Priority (Cinemachine_StaticPointVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__set_Priority (Cinemachine_StaticPointVirtualCamera_o* __this, int32_t value, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_StaticPointVirtualCamera__get_LookAt (Cinemachine_StaticPointVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__set_LookAt (Cinemachine_StaticPointVirtualCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_StaticPointVirtualCamera__get_Follow (Cinemachine_StaticPointVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__set_Follow (Cinemachine_StaticPointVirtualCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_StaticPointVirtualCamera__get_State (Cinemachine_StaticPointVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__set_State (Cinemachine_StaticPointVirtualCamera_o* __this, Cinemachine_CameraState_o value, const MethodInfo* method);
UnityEngine_GameObject_o* Cinemachine_StaticPointVirtualCamera__get_VirtualCameraGameObject (Cinemachine_StaticPointVirtualCamera_o* __this, const MethodInfo* method);
bool Cinemachine_StaticPointVirtualCamera__get_IsValid (Cinemachine_StaticPointVirtualCamera_o* __this, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_StaticPointVirtualCamera__get_ParentCamera (Cinemachine_StaticPointVirtualCamera_o* __this, const MethodInfo* method);
bool Cinemachine_StaticPointVirtualCamera__IsLiveChild (Cinemachine_StaticPointVirtualCamera_o* __this, Cinemachine_ICinemachineCamera_o* vcam, bool dominantChildOnly, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__UpdateCameraState (Cinemachine_StaticPointVirtualCamera_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__InternalUpdateCameraState (Cinemachine_StaticPointVirtualCamera_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__OnTransitionFromCamera (Cinemachine_StaticPointVirtualCamera_o* __this, Cinemachine_ICinemachineCamera_o* fromCam, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_StaticPointVirtualCamera__OnTargetObjectWarped (Cinemachine_StaticPointVirtualCamera_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o positionDelta, const MethodInfo* method);
