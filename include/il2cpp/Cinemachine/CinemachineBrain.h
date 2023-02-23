#pragma once

#include "il2cpp.h"

UnityEngine_Camera_o* Cinemachine_CinemachineBrain__get_OutputCamera (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineBrain__get_SoloCamera (const MethodInfo* method);
void Cinemachine_CinemachineBrain__set_SoloCamera (Cinemachine_ICinemachineCamera_o* value, const MethodInfo* method);
UnityEngine_Color_o Cinemachine_CinemachineBrain__GetSoloGUIColor (const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineBrain__get_DefaultWorldUp (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBrain__OnEnable (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBrain__OnDisable (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBrain__OnSceneLoaded (Cinemachine_CinemachineBrain_o* __this, UnityEngine_SceneManagement_Scene_o scene, int32_t mode, const MethodInfo* method);
void Cinemachine_CinemachineBrain__OnSceneUnloaded (Cinemachine_CinemachineBrain_o* __this, UnityEngine_SceneManagement_Scene_o scene, const MethodInfo* method);
void Cinemachine_CinemachineBrain__Start (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBrain__OnGuiHandler (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Cinemachine_CinemachineBrain__AfterPhysics (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBrain__LateUpdate (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBrain__ManualUpdate (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
float Cinemachine_CinemachineBrain__GetEffectiveDeltaTime (Cinemachine_CinemachineBrain_o* __this, bool fixedDelta, const MethodInfo* method);
void Cinemachine_CinemachineBrain__UpdateVirtualCameras (Cinemachine_CinemachineBrain_o* __this, int32_t updateFilter, float deltaTime, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineBrain__get_ActiveVirtualCamera (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineBrain__DeepCamBFromBlend (Cinemachine_CinemachineBlend_o* blend, const MethodInfo* method);
bool Cinemachine_CinemachineBrain__get_IsBlending (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
Cinemachine_CinemachineBlend_o* Cinemachine_CinemachineBrain__get_ActiveBlend (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
int32_t Cinemachine_CinemachineBrain__GetBrainFrame (Cinemachine_CinemachineBrain_o* __this, int32_t withId, const MethodInfo* method);
int32_t Cinemachine_CinemachineBrain__SetCameraOverride (Cinemachine_CinemachineBrain_o* __this, int32_t overrideId, Cinemachine_ICinemachineCamera_o* camA, Cinemachine_ICinemachineCamera_o* camB, float weightB, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineBrain__ReleaseCameraOverride (Cinemachine_CinemachineBrain_o* __this, int32_t overrideId, const MethodInfo* method);
void Cinemachine_CinemachineBrain__ProcessActiveCamera (Cinemachine_CinemachineBrain_o* __this, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineBrain__UpdateFrame0 (Cinemachine_CinemachineBrain_o* __this, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineBrain__ComputeCurrentBlend (Cinemachine_CinemachineBrain_o* __this, Cinemachine_CinemachineBlend_o** outputBlend, int32_t numTopLayersToExclude, const MethodInfo* method);
bool Cinemachine_CinemachineBrain__IsLive (Cinemachine_CinemachineBrain_o* __this, Cinemachine_ICinemachineCamera_o* vcam, bool dominantChildOnly, const MethodInfo* method);
Cinemachine_CameraState_o Cinemachine_CinemachineBrain__get_CurrentCameraState (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBrain__set_CurrentCameraState (Cinemachine_CinemachineBrain_o* __this, Cinemachine_CameraState_o value, const MethodInfo* method);
Cinemachine_ICinemachineCamera_o* Cinemachine_CinemachineBrain__TopCameraFromPriorityQueue (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
Cinemachine_CinemachineBlendDefinition_o Cinemachine_CinemachineBrain__LookupBlend (Cinemachine_CinemachineBrain_o* __this, Cinemachine_ICinemachineCamera_o* fromKey, Cinemachine_ICinemachineCamera_o* toKey, const MethodInfo* method);
void Cinemachine_CinemachineBrain__PushStateToUnityCamera (Cinemachine_CinemachineBrain_o* __this, Cinemachine_CameraState_o state, const MethodInfo* method);
void Cinemachine_CinemachineBrain___ctor (Cinemachine_CinemachineBrain_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineBrain___cctor (const MethodInfo* method);
