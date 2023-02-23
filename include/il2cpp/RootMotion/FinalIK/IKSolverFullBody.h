#pragma once

#include "il2cpp.h"

RootMotion_FinalIK_IKEffector_o* RootMotion_FinalIK_IKSolverFullBody__GetEffector (RootMotion_FinalIK_IKSolverFullBody_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
RootMotion_FinalIK_FBIKChain_o* RootMotion_FinalIK_IKSolverFullBody__GetChain (RootMotion_FinalIK_IKSolverFullBody_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
int32_t RootMotion_FinalIK_IKSolverFullBody__GetChainIndex (RootMotion_FinalIK_IKSolverFullBody_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
RootMotion_FinalIK_IKSolver_Node_o* RootMotion_FinalIK_IKSolverFullBody__GetNode (RootMotion_FinalIK_IKSolverFullBody_o* __this, int32_t chainIndex, int32_t nodeIndex, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody__GetChainAndNodeIndexes (RootMotion_FinalIK_IKSolverFullBody_o* __this, UnityEngine_Transform_o* transform, int32_t* chainIndex, int32_t* nodeIndex, const MethodInfo* method);
RootMotion_FinalIK_IKSolver_Point_array* RootMotion_FinalIK_IKSolverFullBody__GetPoints (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolver_Point_o* RootMotion_FinalIK_IKSolverFullBody__GetPoint (RootMotion_FinalIK_IKSolverFullBody_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverFullBody__IsValid (RootMotion_FinalIK_IKSolverFullBody_o* __this, System_String_o** message, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody__StoreDefaultLocalState (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody__FixTransforms (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody__OnInitiate (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody__OnUpdate (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody__ReadPose (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody__Solve (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody__ApplyBendConstraints (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody__WritePose (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFullBody___ctor (RootMotion_FinalIK_IKSolverFullBody_o* __this, const MethodInfo* method);
