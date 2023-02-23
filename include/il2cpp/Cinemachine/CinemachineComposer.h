#pragma once

#include "il2cpp.h"

bool Cinemachine_CinemachineComposer__get_IsValid (Cinemachine_CinemachineComposer_o* __this, const MethodInfo* method);
int32_t Cinemachine_CinemachineComposer__get_Stage (Cinemachine_CinemachineComposer_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineComposer__get_TrackedPoint (Cinemachine_CinemachineComposer_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineComposer__set_TrackedPoint (Cinemachine_CinemachineComposer_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineComposer__GetLookAtPointAndSetTrackedPoint (Cinemachine_CinemachineComposer_o* __this, UnityEngine_Vector3_o lookAt, UnityEngine_Vector3_o up, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineComposer__OnTargetObjectWarped (Cinemachine_CinemachineComposer_o* __this, UnityEngine_Transform_o* target, UnityEngine_Vector3_o positionDelta, const MethodInfo* method);
void Cinemachine_CinemachineComposer__ForceCameraPosition (Cinemachine_CinemachineComposer_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, const MethodInfo* method);
float Cinemachine_CinemachineComposer__GetMaxDampTime (Cinemachine_CinemachineComposer_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineComposer__PrePipelineMutateCameraState (Cinemachine_CinemachineComposer_o* __this, Cinemachine_CameraState_o* curState, float deltaTime, const MethodInfo* method);
void Cinemachine_CinemachineComposer__MutateCameraState (Cinemachine_CinemachineComposer_o* __this, Cinemachine_CameraState_o* curState, float deltaTime, const MethodInfo* method);
UnityEngine_Rect_o Cinemachine_CinemachineComposer__get_SoftGuideRect (Cinemachine_CinemachineComposer_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineComposer__set_SoftGuideRect (Cinemachine_CinemachineComposer_o* __this, UnityEngine_Rect_o value, const MethodInfo* method);
UnityEngine_Rect_o Cinemachine_CinemachineComposer__get_HardGuideRect (Cinemachine_CinemachineComposer_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineComposer__set_HardGuideRect (Cinemachine_CinemachineComposer_o* __this, UnityEngine_Rect_o value, const MethodInfo* method);
void Cinemachine_CinemachineComposer__RotateToScreenBounds (Cinemachine_CinemachineComposer_o* __this, Cinemachine_CameraState_o* state, UnityEngine_Rect_o screenRect, UnityEngine_Vector3_o trackedPoint, UnityEngine_Quaternion_o* rigOrientation, float fov, float fovH, float deltaTime, const MethodInfo* method);
bool Cinemachine_CinemachineComposer__ClampVerticalBounds (Cinemachine_CinemachineComposer_o* __this, UnityEngine_Rect_o* r, UnityEngine_Vector3_o dir, UnityEngine_Vector3_o up, float fov, const MethodInfo* method);
void Cinemachine_CinemachineComposer___ctor (Cinemachine_CinemachineComposer_o* __this, const MethodInfo* method);
