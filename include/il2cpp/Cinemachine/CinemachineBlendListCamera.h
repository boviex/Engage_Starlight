#pragma once

#include "il2cpp.h"

System_String_o* Cinemachine_CinemachineBlendListCamera__get_Description (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__Reset (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__set_LiveChild (Cinemachine_CinemachineBlendListCamera_o* __this, Cinemachine_ICinemachineCamera_o* value, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineBlendListCamera__get_LiveChild (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineBlendListCamera__IsLiveChild (Cinemachine_CinemachineBlendListCamera_o* __this, Cinemachine_ICinemachineCamera_o* vcam, bool dominantChildOnly, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CinemachineBlendListCamera__get_State (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineBlendListCamera__get_LookAt (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__set_LookAt (Cinemachine_CinemachineBlendListCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineBlendListCamera__get_Follow (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__set_Follow (Cinemachine_CinemachineBlendListCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__OnTargetObjectWarped (Cinemachine_CinemachineBlendListCamera_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o positionDelta, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__ForceCameraPosition (Cinemachine_CinemachineBlendListCamera_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__OnTransitionFromCamera (Cinemachine_CinemachineBlendListCamera_o* __this, Cinemachine_ICinemachineCamera_o* fromCam, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineBlendListCamera__get_TransitioningFrom (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__set_TransitioningFrom (Cinemachine_CinemachineBlendListCamera_o* __this, Cinemachine_ICinemachineCamera_o* value, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__InternalUpdateCameraState (Cinemachine_CinemachineBlendListCamera_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__OnEnable (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__OnDisable (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__OnTransformChildrenChanged (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__OnGuiHandler (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
Cinemachine_CinemachineVirtualCameraBase_array* Cinemachine_CinemachineBlendListCamera__get_ChildCameras (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineBlendListCamera__get_IsBlending (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__InvalidateListOfChildren (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__UpdateListOfChildren (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__ValidateInstructions (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera__AdvanceCurrentInstruction (Cinemachine_CinemachineBlendListCamera_o* __this, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineBlendListCamera___ctor (Cinemachine_CinemachineBlendListCamera_o* __this, const MethodInfo* method);