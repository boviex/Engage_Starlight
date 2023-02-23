#pragma once

#include "il2cpp.h"

void RootMotion_FinalIK_FBIKChain___ctor (RootMotion_FinalIK_FBIKChain_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain___ctor (RootMotion_FinalIK_FBIKChain_o* __this, float pin, float pull, UnityEngine_Transform_array* nodeTransforms, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__SetNodes (RootMotion_FinalIK_FBIKChain_o* __this, UnityEngine_Transform_array* boneTransforms, const MethodInfo* method);
int32_t RootMotion_FinalIK_FBIKChain__GetNodeIndex (RootMotion_FinalIK_FBIKChain_o* __this, UnityEngine_Transform_o* boneTransform, const MethodInfo* method);
bool RootMotion_FinalIK_FBIKChain__IsValid (RootMotion_FinalIK_FBIKChain_o* __this, System_String_o** message, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__Initiate (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__ReadPose (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, bool fullBody, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__CalculateBoneLengths (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__Reach (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_FBIKChain__Push (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__SolveTrigonometric (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, bool calculateBendDirection, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__Stage1 (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__Stage2 (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, UnityEngine_Vector3_o position, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__SolveConstraintSystems (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_FBIKChain__SolveFABRIKJoint (RootMotion_FinalIK_FBIKChain_o* __this, UnityEngine_Vector3_o pos1, UnityEngine_Vector3_o pos2, float length, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_FBIKChain__GetDirToBendPoint (RootMotion_FinalIK_FBIKChain_o* __this, UnityEngine_Vector3_o direction, UnityEngine_Vector3_o bendDirection, float directionMagnitude, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__SolveChildConstraints (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__SolveLinearConstraint (RootMotion_FinalIK_FBIKChain_o* __this, RootMotion_FinalIK_IKSolver_Node_o* node1, RootMotion_FinalIK_IKSolver_Node_o* node2, float crossFade, float distance, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__ForwardReach (RootMotion_FinalIK_FBIKChain_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void RootMotion_FinalIK_FBIKChain__BackwardReach (RootMotion_FinalIK_FBIKChain_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
