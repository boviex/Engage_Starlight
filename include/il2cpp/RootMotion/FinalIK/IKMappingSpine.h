#pragma once

#include "il2cpp.h"

bool RootMotion_FinalIK_IKMappingSpine__IsValid (RootMotion_FinalIK_IKMappingSpine_o* __this, RootMotion_FinalIK_IKSolver_o* solver, System_String_o** message, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine___ctor (RootMotion_FinalIK_IKMappingSpine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine___ctor (RootMotion_FinalIK_IKMappingSpine_o* __this, UnityEngine_Transform_array* spineBones, UnityEngine_Transform_o* leftUpperArmBone, UnityEngine_Transform_o* rightUpperArmBone, UnityEngine_Transform_o* leftThighBone, UnityEngine_Transform_o* rightThighBone, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine__SetBones (RootMotion_FinalIK_IKMappingSpine_o* __this, UnityEngine_Transform_array* spineBones, UnityEngine_Transform_o* leftUpperArmBone, UnityEngine_Transform_o* rightUpperArmBone, UnityEngine_Transform_o* leftThighBone, UnityEngine_Transform_o* rightThighBone, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine__StoreDefaultLocalState (RootMotion_FinalIK_IKMappingSpine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine__FixTransforms (RootMotion_FinalIK_IKMappingSpine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine__Initiate (RootMotion_FinalIK_IKMappingSpine_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
bool RootMotion_FinalIK_IKMappingSpine__UseFABRIK (RootMotion_FinalIK_IKMappingSpine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine__ReadPose (RootMotion_FinalIK_IKMappingSpine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine__WritePose (RootMotion_FinalIK_IKMappingSpine_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine__ForwardReach (RootMotion_FinalIK_IKMappingSpine_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine__BackwardReach (RootMotion_FinalIK_IKMappingSpine_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void RootMotion_FinalIK_IKMappingSpine__MapToSolverPositions (RootMotion_FinalIK_IKMappingSpine_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
