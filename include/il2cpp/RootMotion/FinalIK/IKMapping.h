#pragma once

#include "il2cpp.h"

bool RootMotion_FinalIK_IKMapping__IsValid (RootMotion_FinalIK_IKMapping_o* __this, RootMotion_FinalIK_IKSolver_o* solver, System_String_o** message, const MethodInfo* method);
void RootMotion_FinalIK_IKMapping__Initiate (RootMotion_FinalIK_IKMapping_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
bool RootMotion_FinalIK_IKMapping__BoneIsValid (RootMotion_FinalIK_IKMapping_o* __this, UnityEngine_Transform_o* bone, RootMotion_FinalIK_IKSolver_o* solver, System_String_o** message, RootMotion_Warning_Logger_o* logger, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKMapping__SolveFABRIKJoint (RootMotion_FinalIK_IKMapping_o* __this, UnityEngine_Vector3_o pos1, UnityEngine_Vector3_o pos2, float length, const MethodInfo* method);
void RootMotion_FinalIK_IKMapping___ctor (RootMotion_FinalIK_IKMapping_o* __this, const MethodInfo* method);
