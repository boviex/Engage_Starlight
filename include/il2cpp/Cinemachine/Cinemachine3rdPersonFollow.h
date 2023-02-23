#pragma once

#include "il2cpp.h"

void Cinemachine_Cinemachine3rdPersonFollow__OnValidate (Cinemachine_Cinemachine3rdPersonFollow_o* __this, const MethodInfo* method);
void Cinemachine_Cinemachine3rdPersonFollow__Reset (Cinemachine_Cinemachine3rdPersonFollow_o* __this, const MethodInfo* method);
void Cinemachine_Cinemachine3rdPersonFollow__OnDestroy (Cinemachine_Cinemachine3rdPersonFollow_o* __this, const MethodInfo* method);
bool Cinemachine_Cinemachine3rdPersonFollow__get_IsValid (Cinemachine_Cinemachine3rdPersonFollow_o* __this, const MethodInfo* method);
int32_t Cinemachine_Cinemachine3rdPersonFollow__get_Stage (Cinemachine_Cinemachine3rdPersonFollow_o* __this, const MethodInfo* method);
float Cinemachine_Cinemachine3rdPersonFollow__GetMaxDampTime (Cinemachine_Cinemachine3rdPersonFollow_o* __this, const MethodInfo* method);
void Cinemachine_Cinemachine3rdPersonFollow__MutateCameraState (Cinemachine_Cinemachine3rdPersonFollow_o* __this, Cinemachine_CameraState_o* curState, float deltaTime, const MethodInfo* method);
void Cinemachine_Cinemachine3rdPersonFollow__PositionCamera (Cinemachine_Cinemachine3rdPersonFollow_o* __this, Cinemachine_CameraState_o* curState, float deltaTime, const MethodInfo* method);
void Cinemachine_Cinemachine3rdPersonFollow__GetRigPositions (Cinemachine_Cinemachine3rdPersonFollow_o* __this, UnityEngine_Vector3_o* root, UnityEngine_Vector3_o* shoulder, UnityEngine_Vector3_o* hand, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_Cinemachine3rdPersonFollow__GetHeading (Cinemachine_Cinemachine3rdPersonFollow_o* __this, UnityEngine_Vector3_o targetForward, UnityEngine_Vector3_o up, const MethodInfo* method);
void Cinemachine_Cinemachine3rdPersonFollow__GetRawRigPositions (Cinemachine_Cinemachine3rdPersonFollow_o* __this, UnityEngine_Vector3_o root, UnityEngine_Quaternion_o targetRot, UnityEngine_Quaternion_o heading, UnityEngine_Vector3_o* shoulder, UnityEngine_Vector3_o* hand, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_Cinemachine3rdPersonFollow__ResolveCollisions (Cinemachine_Cinemachine3rdPersonFollow_o* __this, UnityEngine_Vector3_o root, UnityEngine_Vector3_o tip, float cameraRadius, const MethodInfo* method);
void Cinemachine_Cinemachine3rdPersonFollow___ctor (Cinemachine_Cinemachine3rdPersonFollow_o* __this, const MethodInfo* method);
