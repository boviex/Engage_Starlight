#pragma once

#include "il2cpp.h"

bool Cinemachine_CinemachineConfiner__CameraWasDisplaced (Cinemachine_CinemachineConfiner_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
float Cinemachine_CinemachineConfiner__GetCameraDisplacementDistance (Cinemachine_CinemachineConfiner_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, const MethodInfo* method);
void Cinemachine_CinemachineConfiner__OnValidate (Cinemachine_CinemachineConfiner_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineConfiner__ConnectToVcam (Cinemachine_CinemachineConfiner_o* __this, bool connect, const MethodInfo* method);
bool Cinemachine_CinemachineConfiner__get_IsValid (Cinemachine_CinemachineConfiner_o* __this, const MethodInfo* method);
float Cinemachine_CinemachineConfiner__GetMaxDampTime (Cinemachine_CinemachineConfiner_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineConfiner__PostPipelineStageCallback (Cinemachine_CinemachineConfiner_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, int32_t stage, Cinemachine_CameraState_o* state, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineConfiner__InvalidatePathCache (Cinemachine_CinemachineConfiner_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineConfiner__ValidatePathCache (Cinemachine_CinemachineConfiner_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineConfiner__ConfinePoint (Cinemachine_CinemachineConfiner_o* __this, UnityEngine_Vector3_o camPos, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineConfiner__ConfineScreenEdges (Cinemachine_CinemachineConfiner_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, Cinemachine_CameraState_o* state, const MethodInfo* method);
void Cinemachine_CinemachineConfiner___ctor (Cinemachine_CinemachineConfiner_o* __this, const MethodInfo* method);
