#pragma once

#include "il2cpp.h"

bool Cinemachine_CinemachineCollider__IsTargetObscured (Cinemachine_CinemachineCollider_o* __this, Cinemachine_ICinemachineCamera_o* vcam, const MethodInfo* method);
bool Cinemachine_CinemachineCollider__CameraWasDisplaced (Cinemachine_CinemachineCollider_o* __this, Cinemachine_ICinemachineCamera_o* vcam, const MethodInfo* method);
float Cinemachine_CinemachineCollider__GetCameraDisplacementDistance (Cinemachine_CinemachineCollider_o* __this, Cinemachine_ICinemachineCamera_o* vcam, const MethodInfo* method);
void Cinemachine_CinemachineCollider__OnValidate (Cinemachine_CinemachineCollider_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineCollider__OnDestroy (Cinemachine_CinemachineCollider_o* __this, const MethodInfo* method);
System_Collections_Generic_List_List_Vector3___o* Cinemachine_CinemachineCollider__get_DebugPaths (Cinemachine_CinemachineCollider_o* __this, const MethodInfo* method);
float Cinemachine_CinemachineCollider__GetMaxDampTime (Cinemachine_CinemachineCollider_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineCollider__PostPipelineStageCallback (Cinemachine_CinemachineCollider_o* __this, Cinemachine_CinemachineVirtualCameraBase_o* vcam, int32_t stage, Cinemachine_CameraState_o* state, float deltaTime, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineCollider__PreserveLineOfSight (Cinemachine_CinemachineCollider_o* __this, Cinemachine_CameraState_o* state, Cinemachine_CinemachineCollider_VcamExtraState_o** extra, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineCollider__PullCameraInFrontOfNearestObstacle (Cinemachine_CinemachineCollider_o* __this, UnityEngine_Vector3_o cameraPos, UnityEngine_Vector3_o lookAtPos, int32_t layerMask, UnityEngine_RaycastHit_o* hitInfo, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineCollider__PushCameraBack (Cinemachine_CinemachineCollider_o* __this, UnityEngine_Vector3_o currentPos, UnityEngine_Vector3_o pushDir, UnityEngine_RaycastHit_o obstacle, UnityEngine_Vector3_o lookAtPos, UnityEngine_Plane_o startPlane, float targetDistance, int32_t iterations, Cinemachine_CinemachineCollider_VcamExtraState_o** extra, const MethodInfo* method);
bool Cinemachine_CinemachineCollider__GetWalkingDirection (Cinemachine_CinemachineCollider_o* __this, UnityEngine_Vector3_o pos, UnityEngine_Vector3_o pushDir, UnityEngine_RaycastHit_o obstacle, UnityEngine_Vector3_o* outDir, const MethodInfo* method);
float Cinemachine_CinemachineCollider__GetPushBackDistance (Cinemachine_CinemachineCollider_o* __this, UnityEngine_Ray_o ray, UnityEngine_Plane_o startPlane, float targetDistance, UnityEngine_Vector3_o lookAtPos, const MethodInfo* method);
float Cinemachine_CinemachineCollider__ClampRayToBounds (Cinemachine_CinemachineCollider_o* __this, UnityEngine_Ray_o ray, float distance, UnityEngine_Bounds_o bounds, const MethodInfo* method);
void Cinemachine_CinemachineCollider__DestroyCollider (const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineCollider__RespectCameraRadius (Cinemachine_CinemachineCollider_o* __this, UnityEngine_Vector3_o cameraPos, Cinemachine_CameraState_o* state, const MethodInfo* method);
bool Cinemachine_CinemachineCollider__CheckForTargetObstructions (Cinemachine_CinemachineCollider_o* __this, Cinemachine_CameraState_o state, const MethodInfo* method);
bool Cinemachine_CinemachineCollider__IsTargetOffscreen (Cinemachine_CinemachineCollider_o* __this, Cinemachine_CameraState_o state, const MethodInfo* method);
void Cinemachine_CinemachineCollider___ctor (Cinemachine_CinemachineCollider_o* __this, const MethodInfo* method);
