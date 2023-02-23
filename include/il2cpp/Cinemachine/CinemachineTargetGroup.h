#pragma once

#include "il2cpp.h"

UnityEngine_Transform_o* Cinemachine_CinemachineTargetGroup__get_Transform (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
UnityEngine_Bounds_o Cinemachine_CinemachineTargetGroup__get_BoundingBox (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup__set_BoundingBox (Cinemachine_CinemachineTargetGroup_o* __this, UnityEngine_Bounds_o value, const MethodInfo* method);
UnityEngine_BoundingSphere_o Cinemachine_CinemachineTargetGroup__get_Sphere (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
bool Cinemachine_CinemachineTargetGroup__get_IsEmpty (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup__AddMember (Cinemachine_CinemachineTargetGroup_o* __this, UnityEngine_Transform_o* t, float weight, float radius, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup__RemoveMember (Cinemachine_CinemachineTargetGroup_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
int32_t Cinemachine_CinemachineTargetGroup__FindMember (Cinemachine_CinemachineTargetGroup_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
UnityEngine_BoundingSphere_o Cinemachine_CinemachineTargetGroup__GetWeightedBoundsForMember (Cinemachine_CinemachineTargetGroup_o* __this, int32_t index, const MethodInfo* method);
UnityEngine_Bounds_o Cinemachine_CinemachineTargetGroup__GetViewSpaceBoundingBox (Cinemachine_CinemachineTargetGroup_o* __this, UnityEngine_Matrix4x4_o observer, const MethodInfo* method);
UnityEngine_BoundingSphere_o Cinemachine_CinemachineTargetGroup__WeightedMemberBounds (Cinemachine_CinemachineTargetGroup_Target_o t, UnityEngine_Vector3_o avgPos, float maxWeight, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup__DoUpdate (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o Cinemachine_CinemachineTargetGroup__CalculateAveragePosition (Cinemachine_CinemachineTargetGroup_o* __this, float* maxWeight, const MethodInfo* method);
UnityEngine_Quaternion_o Cinemachine_CinemachineTargetGroup__CalculateAverageOrientation (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
UnityEngine_Bounds_o Cinemachine_CinemachineTargetGroup__CalculateBoundingBox (Cinemachine_CinemachineTargetGroup_o* __this, UnityEngine_Vector3_o avgPos, float maxWeight, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup__OnValidate (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup__FixedUpdate (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup__Update (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup__LateUpdate (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup__GetViewSpaceAngularBounds (Cinemachine_CinemachineTargetGroup_o* __this, UnityEngine_Matrix4x4_o observer, UnityEngine_Vector2_o* minAngles, UnityEngine_Vector2_o* maxAngles, UnityEngine_Vector2_o* zRange, const MethodInfo* method);
void Cinemachine_CinemachineTargetGroup___ctor (Cinemachine_CinemachineTargetGroup_o* __this, const MethodInfo* method);
