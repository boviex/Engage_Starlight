#pragma once

#include "il2cpp.h"

Cinemachine_CinemachineCore_o* Cinemachine_CinemachineCore__get_Instance (const MethodInfo* method);
float Cinemachine_CinemachineCore__get_DeltaTime (const MethodInfo* method);
float Cinemachine_CinemachineCore__get_CurrentTime (const MethodInfo* method);
int32_t Cinemachine_CinemachineCore__get_BrainCount (Cinemachine_CinemachineCore_o* __this, const MethodInfo* method);
Cinemachine_CinemachineBrain_o* Cinemachine_CinemachineCore__GetActiveBrain (Cinemachine_CinemachineCore_o* __this, int32_t index, const MethodInfo* method);
void Cinemachine_CinemachineCore__AddActiveBrain (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineBrain_o* brain, const MethodInfo* method);
void Cinemachine_CinemachineCore__RemoveActiveBrain (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineBrain_o* brain, const MethodInfo* method);
int32_t Cinemachine_CinemachineCore__get_VirtualCameraCount (Cinemachine_CinemachineCore_o* __this, const MethodInfo* method);
Cinemachine_CinemachineVirtualCameraBase_o* Cinemachine_CinemachineCore__GetVirtualCamera (Cinemachine_CinemachineCore_o* __this, int32_t index, const MethodInfo* method);
void Cinemachine_CinemachineCore__AddActiveCamera (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
void Cinemachine_CinemachineCore__RemoveActiveCamera (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
void Cinemachine_CinemachineCore__CameraDestroyed (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
void Cinemachine_CinemachineCore__CameraEnabled (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
void Cinemachine_CinemachineCore__CameraDisabled (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
int32_t Cinemachine_CinemachineCore__get_FixedFrameCount (const MethodInfo* method);
void Cinemachine_CinemachineCore__set_FixedFrameCount (int32_t value, const MethodInfo* method);
void Cinemachine_CinemachineCore__UpdateAllActiveVirtualCameras (Cinemachine_CinemachineCore_o* __this, int32_t layerMask, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineCore__UpdateVirtualCamera (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, UnityEngine_Vector3_o worldUp, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineCore__InitializeModule (const MethodInfo* method);
int32_t Cinemachine_CinemachineCore__get_CurrentUpdateFilter (Cinemachine_CinemachineCore_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineCore__set_CurrentUpdateFilter (Cinemachine_CinemachineCore_o* __this, int32_t value, const MethodInfo* method);
UnityEngine_Transform_o* Cinemachine_CinemachineCore__GetUpdateTarget (Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
int32_t Cinemachine_CinemachineCore__GetVcamUpdateStatus (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
bool Cinemachine_CinemachineCore__IsLive (Cinemachine_CinemachineCore_o* __this, Cinemachine_ICinemachineCamera_o* vcam, const MethodInfo* method);
void Cinemachine_CinemachineCore__GenerateCameraActivationEvent (Cinemachine_CinemachineCore_o* __this, Cinemachine_ICinemachineCamera_o* vcam, Cinemachine_ICinemachineCamera_o* vcamFrom, const MethodInfo* method);
void Cinemachine_CinemachineCore__GenerateCameraCutEvent (Cinemachine_CinemachineCore_o* __this, Cinemachine_ICinemachineCamera_o* vcam, const MethodInfo* method);
Cinemachine_CinemachineBrain_o* Cinemachine_CinemachineCore__FindPotentialTargetBrain (Cinemachine_CinemachineCore_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
void Cinemachine_CinemachineCore___ctor (Cinemachine_CinemachineCore_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineCore___cctor (const MethodInfo* method);
