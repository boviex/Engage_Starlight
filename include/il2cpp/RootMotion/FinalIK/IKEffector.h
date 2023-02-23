#pragma once

#include "il2cpp.h"

RootMotion_FinalIK_IKSolver_Node_o* RootMotion_FinalIK_IKEffector__GetNode (RootMotion_FinalIK_IKEffector_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
bool RootMotion_FinalIK_IKEffector__get_isEndEffector (RootMotion_FinalIK_IKEffector_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector__set_isEndEffector (RootMotion_FinalIK_IKEffector_o* __this, bool value, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector__PinToBone (RootMotion_FinalIK_IKEffector_o* __this, float positionWeight, float rotationWeight, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector___ctor (RootMotion_FinalIK_IKEffector_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector___ctor (RootMotion_FinalIK_IKEffector_o* __this, UnityEngine_Transform_o* bone, UnityEngine_Transform_array* childBones, const MethodInfo* method);
bool RootMotion_FinalIK_IKEffector__IsValid (RootMotion_FinalIK_IKEffector_o* __this, RootMotion_FinalIK_IKSolver_o* solver, System_String_o** message, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector__Initiate (RootMotion_FinalIK_IKEffector_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector__ResetOffset (RootMotion_FinalIK_IKEffector_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector__SetToTarget (RootMotion_FinalIK_IKEffector_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector__OnPreSolve (RootMotion_FinalIK_IKEffector_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector__OnPostWrite (RootMotion_FinalIK_IKEffector_o* __this, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKEffector__GetPlaneRotation (RootMotion_FinalIK_IKEffector_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
void RootMotion_FinalIK_IKEffector__Update (RootMotion_FinalIK_IKEffector_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKEffector__GetPosition (RootMotion_FinalIK_IKEffector_o* __this, RootMotion_FinalIK_IKSolverFullBody_o* solver, UnityEngine_Quaternion_o* planeRotationOffset, const MethodInfo* method);
