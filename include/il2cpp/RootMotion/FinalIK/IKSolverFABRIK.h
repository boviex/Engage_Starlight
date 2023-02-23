#pragma once

#include "il2cpp.h"

void RootMotion_FinalIK_IKSolverFABRIK__SolveForward (RootMotion_FinalIK_IKSolverFABRIK_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__SolveBackward (RootMotion_FinalIK_IKSolverFABRIK_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverFABRIK__GetIKPosition (RootMotion_FinalIK_IKSolverFABRIK_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__OnInitiate (RootMotion_FinalIK_IKSolverFABRIK_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__OnUpdate (RootMotion_FinalIK_IKSolverFABRIK_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverFABRIK__get_boneLengthCanBeZero (RootMotion_FinalIK_IKSolverFABRIK_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverFABRIK__SolveJoint (RootMotion_FinalIK_IKSolverFABRIK_o* __this, UnityEngine_Vector3_o pos1, UnityEngine_Vector3_o pos2, float length, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__OnPreSolve (RootMotion_FinalIK_IKSolverFABRIK_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__OnPostSolve (RootMotion_FinalIK_IKSolverFABRIK_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__Solve (RootMotion_FinalIK_IKSolverFABRIK_o* __this, UnityEngine_Vector3_o targetPosition, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__ForwardReach (RootMotion_FinalIK_IKSolverFABRIK_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__SolverMove (RootMotion_FinalIK_IKSolverFABRIK_o* __this, int32_t index, UnityEngine_Vector3_o offset, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__SolverRotate (RootMotion_FinalIK_IKSolverFABRIK_o* __this, int32_t index, UnityEngine_Quaternion_o rotation, bool recursive, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__SolverRotateChildren (RootMotion_FinalIK_IKSolverFABRIK_o* __this, int32_t index, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__SolverMoveChildrenAroundPoint (RootMotion_FinalIK_IKSolverFABRIK_o* __this, int32_t index, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKSolverFABRIK__GetParentSolverRotation (RootMotion_FinalIK_IKSolverFABRIK_o* __this, int32_t index, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverFABRIK__GetParentSolverPosition (RootMotion_FinalIK_IKSolverFABRIK_o* __this, int32_t index, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKSolverFABRIK__GetLimitedRotation (RootMotion_FinalIK_IKSolverFABRIK_o* __this, int32_t index, UnityEngine_Quaternion_o q, bool* changed, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__LimitForward (RootMotion_FinalIK_IKSolverFABRIK_o* __this, int32_t rotateBone, int32_t limitBone, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__BackwardReach (RootMotion_FinalIK_IKSolverFABRIK_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__BackwardReachUnlimited (RootMotion_FinalIK_IKSolverFABRIK_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__BackwardReachLimited (RootMotion_FinalIK_IKSolverFABRIK_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositions (RootMotion_FinalIK_IKSolverFABRIK_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited (RootMotion_FinalIK_IKSolverFABRIK_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverFABRIK___ctor (RootMotion_FinalIK_IKSolverFABRIK_o* __this, const MethodInfo* method);
