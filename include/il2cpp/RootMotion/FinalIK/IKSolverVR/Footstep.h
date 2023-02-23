#pragma once

#include "il2cpp.h"

bool RootMotion_FinalIK_IKSolverVR_Footstep__get_isStepping (RootMotion_FinalIK_IKSolverVR_Footstep_o* __this, const MethodInfo* method);
float RootMotion_FinalIK_IKSolverVR_Footstep__get_stepProgress (RootMotion_FinalIK_IKSolverVR_Footstep_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Footstep__set_stepProgress (RootMotion_FinalIK_IKSolverVR_Footstep_o* __this, float value, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Footstep___ctor (RootMotion_FinalIK_IKSolverVR_Footstep_o* __this, UnityEngine_Quaternion_o rootRotation, UnityEngine_Vector3_o footPosition, UnityEngine_Quaternion_o footRotation, UnityEngine_Vector3_o characterSpaceOffset, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Footstep__Reset (RootMotion_FinalIK_IKSolverVR_Footstep_o* __this, UnityEngine_Quaternion_o rootRotation, UnityEngine_Vector3_o footPosition, UnityEngine_Quaternion_o footRotation, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Footstep__StepTo (RootMotion_FinalIK_IKSolverVR_Footstep_o* __this, UnityEngine_Vector3_o p, UnityEngine_Quaternion_o rootRotation, float stepThreshold, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Footstep__UpdateStepping (RootMotion_FinalIK_IKSolverVR_Footstep_o* __this, UnityEngine_Vector3_o p, UnityEngine_Quaternion_o rootRotation, float speed, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Footstep__UpdateStanding (RootMotion_FinalIK_IKSolverVR_Footstep_o* __this, UnityEngine_Quaternion_o rootRotation, float minAngle, float speed, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Footstep__Update (RootMotion_FinalIK_IKSolverVR_Footstep_o* __this, int32_t interpolation, UnityEngine_Events_UnityEvent_o* onStep, const MethodInfo* method);
