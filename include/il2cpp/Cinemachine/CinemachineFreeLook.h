#pragma once

#include "il2cpp.h"

void Cinemachine_CinemachineFreeLook__OnValidate (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
Cinemachine_CinemachineVirtualCamera_o* Cinemachine_CinemachineFreeLook__GetRig (Cinemachine_CinemachineFreeLook_o* __this, int32_t i, const MethodInfo* method);
System_String_array* Cinemachine_CinemachineFreeLook__get_RigNames (const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__OnEnable (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__UpdateInputAxisProvider (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__OnDestroy (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__OnTransformChildrenChanged (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__Reset (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineFreeLook__get_PreviousStateIsValid (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__set_PreviousStateIsValid (Cinemachine_CinemachineFreeLook_o* __this, bool value, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CinemachineFreeLook__get_State (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineFreeLook__get_LookAt (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__set_LookAt (Cinemachine_CinemachineFreeLook_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineFreeLook__get_Follow (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__set_Follow (Cinemachine_CinemachineFreeLook_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
bool Cinemachine_CinemachineFreeLook__IsLiveChild (Cinemachine_CinemachineFreeLook_o* __this, Cinemachine_ICinemachineCamera_o* vcam, bool dominantChildOnly, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__OnTargetObjectWarped (Cinemachine_CinemachineFreeLook_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o positionDelta, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__ForceCameraPosition (Cinemachine_CinemachineFreeLook_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__InternalUpdateCameraState (Cinemachine_CinemachineFreeLook_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__OnTransitionFromCamera (Cinemachine_CinemachineFreeLook_o* __this, Cinemachine_ICinemachineCamera_o* fromCam, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
float Cinemachine_CinemachineFreeLook__GetYAxisClosestValue (Cinemachine_CinemachineFreeLook_o* __this, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o up, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__InvalidateRigCache (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__DestroyRigs (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
Cinemachine_CinemachineVirtualCamera_array* Cinemachine_CinemachineFreeLook__CreateRigs (Cinemachine_CinemachineFreeLook_o* __this, Cinemachine_CinemachineVirtualCamera_array* copyFrom, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__UpdateRigCache (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
int32_t Cinemachine_CinemachineFreeLook__LocateExistingRigs (Cinemachine_CinemachineFreeLook_o* __this, System_String_array* rigNames, bool forceOrbital, const MethodInfo* method);
float Cinemachine_CinemachineFreeLook__get_CachedXAxisHeading (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__set_CachedXAxisHeading (Cinemachine_CinemachineFreeLook_o* __this, float value, const MethodInfo* method);
float Cinemachine_CinemachineFreeLook__UpdateXAxisHeading (Cinemachine_CinemachineFreeLook_o* __this, Cinemachine_CinemachineOrbitalTransposer_o* orbital, float deltaTime, UnityEngine_Vector3_o up, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__PushSettingsToRigs (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
float Cinemachine_CinemachineFreeLook__GetYAxisValue (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CinemachineFreeLook__CalculateNewState (Cinemachine_CinemachineFreeLook_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineFreeLook__GetLocalPositionForCameraFromInput (Cinemachine_CinemachineFreeLook_o* __this, float t, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook__UpdateCachedSpline (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineFreeLook___ctor (Cinemachine_CinemachineFreeLook_o* __this, const MethodInfo* method);
