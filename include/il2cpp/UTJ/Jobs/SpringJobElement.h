#pragma once

#include "il2cpp.h"

void UTJ_Jobs_SpringJobElement__Execute (UTJ_Jobs_SpringJobElement_o __this, Unity_Collections_NativeArray_SpringForceComponent__o forces, int32_t forceCount, const MethodInfo* method);
void UTJ_Jobs_SpringJobElement__UpdateSpring (UTJ_Jobs_SpringJobElement_o __this, UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, Unity_Mathematics_quaternion_o baseWorldRotation, Unity_Mathematics_float3_o externalForce, const MethodInfo* method);
void UTJ_Jobs_SpringJobElement__ResolveCollisionsAndConstraints (UTJ_Jobs_SpringJobElement_o __this, UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, int32_t index, FUtility_NestedNativeArray_SpringBoneComponents__o boneComponents, const MethodInfo* method);
void UTJ_Jobs_SpringJobElement__ApplyLengthLimits (UTJ_Jobs_SpringJobElement_o __this, UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, FUtility_NestedNativeArray_SpringBoneComponents__o boneComponents, const MethodInfo* method);
bool UTJ_Jobs_SpringJobElement__ResolveGroundCollision (UTJ_Jobs_SpringJobElement_o __this, UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, const MethodInfo* method);
Unity_Mathematics_float3_o UTJ_Jobs_SpringJobElement__FixBoneLength (UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, Unity_Mathematics_float3_o* tailPosition, const MethodInfo* method);
bool UTJ_Jobs_SpringJobElement__ResolveCollisions (UTJ_Jobs_SpringJobElement_o __this, UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, const MethodInfo* method);
void UTJ_Jobs_SpringJobElement__ApplyAngleLimits (UTJ_Jobs_SpringJobElement_o __this, UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, Unity_Mathematics_float4x4_o* pivotLocalToWorld, const MethodInfo* method);
void UTJ_Jobs_SpringJobElement__UpdateRotation (UTJ_Jobs_SpringJobElement_o __this, UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, Unity_Mathematics_quaternion_o baseWorldRotation, const MethodInfo* method);
Unity_Mathematics_quaternion_o UTJ_Jobs_SpringJobElement__FromToRotation (Unity_Mathematics_float3_o from, Unity_Mathematics_float3_o to, const MethodInfo* method);
Unity_Mathematics_quaternion_o UTJ_Jobs_SpringJobElement__ComputeLocalRotation (Unity_Mathematics_quaternion_o* baseWorldRotation, UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, const MethodInfo* method);
Unity_Mathematics_float3_o UTJ_Jobs_SpringJobElement__ApplyWindForce (UTJ_Jobs_SpringJobElement_o __this, Unity_Mathematics_float3_o* pos, float time, const MethodInfo* method);
Unity_Mathematics_float3_o UTJ_Jobs_SpringJobElement__GetTotalForceOnBone (UTJ_Jobs_SpringJobElement_o __this, UTJ_Jobs_SpringBoneComponents_o* bone, UTJ_Jobs_SpringBoneProperties_o* prop, Unity_Collections_NativeArray_SpringForceComponent__o forces, int32_t forceCount, const MethodInfo* method);
Unity_Mathematics_float3_o UTJ_Jobs_SpringJobElement__ComputeForceOnBone (UTJ_Jobs_SpringForceComponent_o* force, UTJ_Jobs_SpringBoneComponents_o* bone, float boneWindInfluence, const MethodInfo* method);