#pragma once

#include "il2cpp.h"

bool RootMotion_FinalIK_IKMappingLimb__IsValid (RootMotion_FinalIK_IKMappingLimb_o* __this, RootMotion_FinalIK_IKSolver_o* solver, System_String_o** message, const MethodInfo* method);
RootMotion_FinalIK_IKMapping_BoneMap_o* RootMotion_FinalIK_IKMappingLimb__GetBoneMap (RootMotion_FinalIK_IKMappingLimb_o* __this, int32_t boneMap, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingLimb__SetLimbOrientation (RootMotion_FinalIK_IKMappingLimb_o* __this, UnityEngine_Vector3_o upper, UnityEngine_Vector3_o lower, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingLimb___ctor (RootMotion_FinalIK_IKMappingLimb_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingLimb___ctor (RootMotion_FinalIK_IKMappingLimb_o* __this, UnityEngine_Transform_o* bone1, UnityEngine_Transform_o* bone2, UnityEngine_Transform_o* bone3, UnityEngine_Transform_o* parentBone, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingLimb__SetBones (RootMotion_FinalIK_IKMappingLimb_o* __this, UnityEngine_Transform_o* bone1, UnityEngine_Transform_o* bone2, UnityEngine_Transform_o* bone3, UnityEngine_Transform_o* parentBone, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingLimb__StoreDefaultLocalState (RootMotion_FinalIK_IKMappingLimb_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingLimb__FixTransforms (RootMotion_FinalIK_IKMappingLimb_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingLimb__Initiate (RootMotion_FinalIK_IKMappingLimb_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingLimb__ReadPose (RootMotion_FinalIK_IKMappingLimb_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingLimb__WritePose (RootMotion_FinalIK_IKMappingLimb_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, bool fullBody, const MethodInfo* method);
