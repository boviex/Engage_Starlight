#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o UTJ_SpringBone__get_CurrentTipPosition (UTJ_SpringBone_o* __this, const MethodInfo* method);
void UTJ_SpringBone__Stabilize (UTJ_SpringBone_o* __this, const MethodInfo* method);
void UTJ_SpringBone__Initialize (UTJ_SpringBone_o* __this, UTJ_SpringManager_o* owner, const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringBone__ComputeChildPosition (UTJ_SpringBone_o* __this, const MethodInfo* method);
void UTJ_SpringBone__RemoveAllColliders (UTJ_SpringBone_o* __this, const MethodInfo* method);
void UTJ_SpringBone__UpdateSpring (UTJ_SpringBone_o* __this, float deltaTime, UnityEngine_Vector3_o externalForce, const MethodInfo* method);
void UTJ_SpringBone__SatisfyConstraintsAndComputeRotation (UTJ_SpringBone_o* __this, float deltaTime, float dynamicRatio, const MethodInfo* method);
void UTJ_SpringBone__ComputeRotation (UTJ_SpringBone_o* __this, float dynamicRatio, const MethodInfo* method);
UnityEngine_Transform_o* UTJ_SpringBone__GetPivotTransform (UTJ_SpringBone_o* __this, const MethodInfo* method);
System_Collections_Generic_IList_Transform__o* UTJ_SpringBone__GetValidChildren (UnityEngine_Transform_o* parent, const MethodInfo* method);
void UTJ_SpringBone__ApplyAngleLimits (UTJ_SpringBone_o* __this, float deltaTime, const MethodInfo* method);
bool UTJ_SpringBone__CheckForCollision (UTJ_SpringBone_o* __this, const MethodInfo* method);
bool UTJ_SpringBone__CheckForGroundCollision (UTJ_SpringBone_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringBone__FixBoneLength (UTJ_SpringBone_o* __this, UnityEngine_Vector3_o headPosition, UnityEngine_Vector3_o tailPosition, float minLength, float maxLength, const MethodInfo* method);
void UTJ_SpringBone__InitializeSpringLengthAndTipPosition (UTJ_SpringBone_o* __this, const MethodInfo* method);
void UTJ_SpringBone__ResetSpringLengthAndTipPosition (UTJ_SpringBone_o* __this, const MethodInfo* method);
UnityEngine_Quaternion_o UTJ_SpringBone__ComputeRotation (UTJ_SpringBone_o* __this, UnityEngine_Vector3_o tipPosition, const MethodInfo* method);
UnityEngine_Vector3_o UTJ_SpringBone__ApplyLengthLimits (UTJ_SpringBone_o* __this, float deltaTime, const MethodInfo* method);
void UTJ_SpringBone___ctor (UTJ_SpringBone_o* __this, const MethodInfo* method);
