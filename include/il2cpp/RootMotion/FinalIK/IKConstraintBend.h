#pragma once

#include "il2cpp.h"

bool RootMotion_FinalIK_IKConstraintBend__IsValid (RootMotion_FinalIK_IKConstraintBend_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, RootMotion_Warning_Logger_o* logger, const MethodInfo* method);
bool RootMotion_FinalIK_IKConstraintBend__get_initiated (RootMotion_FinalIK_IKConstraintBend_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKConstraintBend__set_initiated (RootMotion_FinalIK_IKConstraintBend_o* __this, bool value, const MethodInfo* method);
void RootMotion_FinalIK_IKConstraintBend___ctor (RootMotion_FinalIK_IKConstraintBend_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKConstraintBend___ctor (RootMotion_FinalIK_IKConstraintBend_o* __this, UnityEngine_Transform_o* bone1, UnityEngine_Transform_o* bone2, UnityEngine_Transform_o* bone3, const MethodInfo* method);
void RootMotion_FinalIK_IKConstraintBend__SetBones (RootMotion_FinalIK_IKConstraintBend_o* __this, UnityEngine_Transform_o* bone1, UnityEngine_Transform_o* bone2, UnityEngine_Transform_o* bone3, const MethodInfo* method);
void RootMotion_FinalIK_IKConstraintBend__Initiate (RootMotion_FinalIK_IKConstraintBend_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_IKConstraintBend__SetLimbOrientation (RootMotion_FinalIK_IKConstraintBend_o* __this, UnityEngine_Vector3_o upper, UnityEngine_Vector3_o lower, UnityEngine_Vector3_o last, const MethodInfo* method);
void RootMotion_FinalIK_IKConstraintBend__LimitBend (RootMotion_FinalIK_IKConstraintBend_o* __this, float solverWeight, float positionWeight, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKConstraintBend__GetDir (RootMotion_FinalIK_IKConstraintBend_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKConstraintBend__OrthoToLimb (RootMotion_FinalIK_IKConstraintBend_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, UnityEngine_Vector3_o tangent, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKConstraintBend__OrthoToBone1 (RootMotion_FinalIK_IKConstraintBend_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, UnityEngine_Vector3_o tangent, const MethodInfo* method);
