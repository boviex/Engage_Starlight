#pragma once

#include "il2cpp.h"

void RootMotion_FinalIK_IKSolverLookAt__SetLookAtWeight (RootMotion_FinalIK_IKSolverLookAt_o* __this, float weight, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SetLookAtWeight (RootMotion_FinalIK_IKSolverLookAt_o* __this, float weight, float bodyWeight, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SetLookAtWeight (RootMotion_FinalIK_IKSolverLookAt_o* __this, float weight, float bodyWeight, float headWeight, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SetLookAtWeight (RootMotion_FinalIK_IKSolverLookAt_o* __this, float weight, float bodyWeight, float headWeight, float eyesWeight, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SetLookAtWeight (RootMotion_FinalIK_IKSolverLookAt_o* __this, float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SetLookAtWeight (RootMotion_FinalIK_IKSolverLookAt_o* __this, float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__StoreDefaultLocalState (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SetDirty (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__FixTransforms (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverLookAt__IsValid (RootMotion_FinalIK_IKSolverLookAt_o* __this, System_String_o** message, const MethodInfo* method);
RootMotion_FinalIK_IKSolver_Point_array* RootMotion_FinalIK_IKSolverLookAt__GetPoints (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolver_Point_o* RootMotion_FinalIK_IKSolverLookAt__GetPoint (RootMotion_FinalIK_IKSolverLookAt_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverLookAt__SetChain (RootMotion_FinalIK_IKSolverLookAt_o* __this, UnityEngine_Transform_array* spine, UnityEngine_Transform_o* head, UnityEngine_Transform_array* eyes, UnityEngine_Transform_o* root, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__OnInitiate (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__OnUpdate (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverLookAt__get_spineIsValid (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverLookAt__get_spineIsEmpty (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SolveSpine (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverLookAt__get_headIsValid (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverLookAt__get_headIsEmpty (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SolveHead (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverLookAt__get_eyesIsValid (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverLookAt__get_eyesIsEmpty (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SolveEyes (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
UnityEngine_Vector3_array* RootMotion_FinalIK_IKSolverLookAt__GetForwards (RootMotion_FinalIK_IKSolverLookAt_o* __this, UnityEngine_Vector3_array** forwards, UnityEngine_Vector3_o baseForward, UnityEngine_Vector3_o targetForward, int32_t bones, float clamp, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt__SetBones (RootMotion_FinalIK_IKSolverLookAt_o* __this, UnityEngine_Transform_array* array, RootMotion_FinalIK_IKSolverLookAt_LookAtBone_array** bones, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverLookAt___ctor (RootMotion_FinalIK_IKSolverLookAt_o* __this, const MethodInfo* method);
