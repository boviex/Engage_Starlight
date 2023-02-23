#pragma once

#include "il2cpp.h"

float Cinemachine_CinemachineMixingCamera__GetWeight (Cinemachine_CinemachineMixingCamera_o* __this, int32_t index, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__SetWeight (Cinemachine_CinemachineMixingCamera_o* __this, int32_t index, float w, const MethodInfo* method);
float Cinemachine_CinemachineMixingCamera__GetWeight (Cinemachine_CinemachineMixingCamera_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__SetWeight (Cinemachine_CinemachineMixingCamera_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, float w, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__set_LiveChild (Cinemachine_CinemachineMixingCamera_o* __this, Cinemachine_ICinemachineCamera_o* value, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineMixingCamera__get_LiveChild (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CinemachineMixingCamera__get_State (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineMixingCamera__get_LookAt (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__set_LookAt (Cinemachine_CinemachineMixingCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineMixingCamera__get_Follow (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__set_Follow (Cinemachine_CinemachineMixingCamera_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__OnTargetObjectWarped (Cinemachine_CinemachineMixingCamera_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o positionDelta, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__ForceCameraPosition (Cinemachine_CinemachineMixingCamera_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__OnEnable (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__OnTransformChildrenChanged (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__OnValidate (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineMixingCamera__IsLiveChild (Cinemachine_CinemachineMixingCamera_o* __this, Cinemachine_ICinemachineCamera_o* vcam, bool dominantChildOnly, const MethodInfo* method);
Cinemachine_CinemachineVirtualCameraBase_array* Cinemachine_CinemachineMixingCamera__get_ChildCameras (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__InvalidateListOfChildren (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__ValidateListOfChildren (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__OnTransitionFromCamera (Cinemachine_CinemachineMixingCamera_o* __this, Cinemachine_ICinemachineCamera_o* fromCam, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera__InternalUpdateCameraState (Cinemachine_CinemachineMixingCamera_o* __this, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineMixingCamera___ctor (Cinemachine_CinemachineMixingCamera_o* __this, const MethodInfo* method);
