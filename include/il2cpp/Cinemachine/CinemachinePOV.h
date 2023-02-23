#pragma once

#include "il2cpp.h"

bool Cinemachine_CinemachinePOV__get_IsValid (Cinemachine_CinemachinePOV_o* __this, const MethodInfo* method);
int32_t Cinemachine_CinemachinePOV__get_Stage (Cinemachine_CinemachinePOV_o* __this, const MethodInfo* method);
void Cinemachine_CinemachinePOV__OnValidate (Cinemachine_CinemachinePOV_o* __this, const MethodInfo* method);
void Cinemachine_CinemachinePOV__OnEnable (Cinemachine_CinemachinePOV_o* __this, const MethodInfo* method);
void Cinemachine_CinemachinePOV__UpdateInputAxisProvider (Cinemachine_CinemachinePOV_o* __this, const MethodInfo* method);
void Cinemachine_CinemachinePOV__PrePipelineMutateCameraState (Cinemachine_CinemachinePOV_o* __this, Cinemachine_CameraState_o* state, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachinePOV__MutateCameraState (Cinemachine_CinemachinePOV_o* __this, Cinemachine_CameraState_o* curState, float deltaTime, const MethodInfo* method);
UnityEngine_Vector2_o Cinemachine_CinemachinePOV__GetRecenterTarget (Cinemachine_CinemachinePOV_o* __this, const MethodInfo* method);
void Cinemachine_CinemachinePOV__ForceCameraPosition (Cinemachine_CinemachinePOV_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, const MethodInfo* method);
bool Cinemachine_CinemachinePOV__OnTransitionFromCamera (Cinemachine_CinemachinePOV_o* __this, Cinemachine_ICinemachineCamera_o* fromCam, UnityEngine_Vector3_o worldUp, float deltaTime, Cinemachine_CinemachineVirtualCameraBase_TransitionParams_o* transitionParams, const MethodInfo* method);
void Cinemachine_CinemachinePOV__SetAxesForRotation (Cinemachine_CinemachinePOV_o* __this, UnityEngine_Quaternion_o targetRot, const MethodInfo* method);
void Cinemachine_CinemachinePOV___ctor (Cinemachine_CinemachinePOV_o* __this, const MethodInfo* method);
