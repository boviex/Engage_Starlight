#pragma once

#include "il2cpp.h"

System_String_o* Cinemachine_CinemachineClearShot__get_Description (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__set_LiveChild (Cinemachine_CinemachineClearShot_o* __this, Cinemachine_ICinemachineCamera_o* value, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineClearShot__get_LiveChild (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CinemachineClearShot__get_State (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineClearShot__IsLiveChild (Cinemachine_CinemachineClearShot_o* __this, Cinemachine_ICinemachineCamera_o* vcam, bool dominantChildOnly, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineClearShot__get_LookAt (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__set_LookAt (Cinemachine_CinemachineClearShot_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineClearShot__get_Follow (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__set_Follow (Cinemachine_CinemachineClearShot_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__OnTargetObjectWarped (Cinemachine_CinemachineClearShot_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o positionDelta, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__ForceCameraPosition (Cinemachine_CinemachineClearShot_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__InternalUpdateCameraState (Cinemachine_CinemachineClearShot_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__OnEnable (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__OnDisable (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__OnTransformChildrenChanged (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__OnGuiHandler (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineClearShot__get_IsBlending (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
Cinemachine_CinemachineVirtualCameraBase_array* Cinemachine_CinemachineClearShot__get_ChildCameras (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__InvalidateListOfChildren (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__ResetRandomization (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__UpdateListOfChildren (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineClearShot__ChooseCurrentCamera (Cinemachine_CinemachineClearShot_o* __this, UnityEngine_Vector3_o worldUp, const MethodInfo* method);
Cinemachine_CinemachineVirtualCameraBase_array* Cinemachine_CinemachineClearShot__Randomize (Cinemachine_CinemachineClearShot_o* __this, Cinemachine_CinemachineVirtualCameraBase_array* src, const MethodInfo* method);
Cinemachine_CinemachineBlendDefinition_o Cinemachine_CinemachineClearShot__LookupBlend (Cinemachine_CinemachineClearShot_o* __this, Cinemachine_ICinemachineCamera_o* fromKey, Cinemachine_ICinemachineCamera_o* toKey, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__OnTransitionFromCamera (Cinemachine_CinemachineClearShot_o* __this, Cinemachine_ICinemachineCamera_o* fromCam, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineClearShot__get_TransitioningFrom (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineClearShot__set_TransitioningFrom (Cinemachine_CinemachineClearShot_o* __this, Cinemachine_ICinemachineCamera_o* value, const MethodInfo* method);
void Cinemachine_CinemachineClearShot___ctor (Cinemachine_CinemachineClearShot_o* __this, const MethodInfo* method);