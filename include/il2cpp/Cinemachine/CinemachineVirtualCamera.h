#pragma once

#include "il2cpp.h"

Cinemachine_CameraState_o Cinemachine_CinemachineVirtualCamera__get_State (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineVirtualCamera__get_LookAt (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__set_LookAt (Cinemachine_CinemachineVirtualCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineVirtualCamera__get_Follow (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__set_Follow (Cinemachine_CinemachineVirtualCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
float Cinemachine_CinemachineVirtualCamera__GetMaxDampTime (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__InternalUpdateCameraState (Cinemachine_CinemachineVirtualCamera_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__OnEnable (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__OnDestroy (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__OnValidate (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__OnTransformChildrenChanged (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__Reset (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__DestroyPipeline (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineVirtualCamera__CreatePipeline (Cinemachine_CinemachineVirtualCamera_o* __this, Cinemachine_CinemachineVirtualCamera_o* copyFrom, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__InvalidateComponentPipeline (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineVirtualCamera__GetComponentOwner (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
Cinemachine_CinemachineComponentBase_array* Cinemachine_CinemachineVirtualCamera__GetComponentPipeline (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
Cinemachine_CinemachineComponentBase_o* Cinemachine_CinemachineVirtualCamera__GetCinemachineComponent (Cinemachine_CinemachineVirtualCamera_o* __this, int32_t stage, const MethodInfo* method);
Cinemachine_CinemachineComposer_o* Cinemachine_CinemachineVirtualCamera__GetCinemachineComponent_CinemachineComposer_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C1620* method);
Cinemachine_CinemachineOrbitalTransposer_o* Cinemachine_CinemachineVirtualCamera__GetCinemachineComponent_CinemachineOrbitalTransposer_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C1620* method);
Il2CppObject* Cinemachine_CinemachineVirtualCamera__GetCinemachineComponent_object_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C1620* method);
Combat_VCamShaker_o* Cinemachine_CinemachineVirtualCamera__GetCinemachineComponent_VCamShaker_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C1620* method);
Cinemachine_CinemachineHardLockToTarget_o* Cinemachine_CinemachineVirtualCamera__AddCinemachineComponent_CinemachineHardLockToTarget_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C12D0* method);
Cinemachine_CinemachineHardLookAt_o* Cinemachine_CinemachineVirtualCamera__AddCinemachineComponent_CinemachineHardLookAt_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C12D0* method);
Cinemachine_CinemachineOrbitalTransposer_o* Cinemachine_CinemachineVirtualCamera__AddCinemachineComponent_CinemachineOrbitalTransposer_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C12D0* method);
Il2CppObject* Cinemachine_CinemachineVirtualCamera__AddCinemachineComponent_object_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C12D0* method);
Combat_VCamShaker_o* Cinemachine_CinemachineVirtualCamera__AddCinemachineComponent_VCamShaker_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C12D0* method);
void Cinemachine_CinemachineVirtualCamera__DestroyCinemachineComponent_object_ (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo_22C14F0* method);
bool Cinemachine_CinemachineVirtualCamera__get_UserIsDragging (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__set_UserIsDragging (Cinemachine_CinemachineVirtualCamera_o* __this, bool value, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__UpdateComponentPipeline (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__SetFlagsForHiddenChild (UnityEngine_GameObject_o* child, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CinemachineVirtualCamera__CalculateNewState (Cinemachine_CinemachineVirtualCamera_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__OnTargetObjectWarped (Cinemachine_CinemachineVirtualCamera_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o positionDelta, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__ForceCameraPosition (Cinemachine_CinemachineVirtualCamera_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__SetStateRawPosition (Cinemachine_CinemachineVirtualCamera_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera__OnTransitionFromCamera (Cinemachine_CinemachineVirtualCamera_o* __this, Cinemachine_ICinemachineCamera_o* fromCam, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineVirtualCamera___ctor (Cinemachine_CinemachineVirtualCamera_o* __this, const MethodInfo* method);