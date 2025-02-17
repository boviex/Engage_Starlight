#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_Locomotion__get_centerOfMass (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Locomotion__set_centerOfMass (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Locomotion__Initiate (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, UnityEngine_Vector3_array* positions, UnityEngine_Quaternion_array* rotations, bool hasToes, float scale, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Locomotion__Reset (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, UnityEngine_Vector3_array* positions, UnityEngine_Quaternion_array* rotations, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Locomotion__Relax (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Locomotion__AddDeltaRotation (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, UnityEngine_Quaternion_o delta, UnityEngine_Vector3_o pivot, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Locomotion__AddDeltaPosition (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, UnityEngine_Vector3_o delta, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Locomotion__Solve (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, RootMotion_FinalIK_IKSolverVR_VirtualBone_o* rootBone, RootMotion_FinalIK_IKSolverVR_Spine_o* spine, RootMotion_FinalIK_IKSolverVR_Leg_o* leftLeg, RootMotion_FinalIK_IKSolverVR_Leg_o* rightLeg, RootMotion_FinalIK_IKSolverVR_Arm_o* leftArm, RootMotion_FinalIK_IKSolverVR_Arm_o* rightArm, int32_t supportLegIndex, UnityEngine_Vector3_o* leftFootPosition, UnityEngine_Vector3_o* rightFootPosition, UnityEngine_Quaternion_o* leftFootRotation, UnityEngine_Quaternion_o* rightFootRotation, float* leftFootOffset, float* rightFootOffset, float* leftHeelOffset, float* rightHeelOffset, float scale, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_Locomotion__get_leftFootstepPosition (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_Locomotion__get_rightFootstepPosition (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKSolverVR_Locomotion__get_leftFootstepRotation (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKSolverVR_Locomotion__get_rightFootstepRotation (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverVR_Locomotion__StepBlocked (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, UnityEngine_Vector3_o fromPosition, UnityEngine_Vector3_o toPosition, UnityEngine_Vector3_o rootPosition, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverVR_Locomotion__CanStep (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverVR_Locomotion__GetLineSphereCollision (UnityEngine_Vector3_o lineStart, UnityEngine_Vector3_o lineEnd, UnityEngine_Vector3_o sphereCenter, float sphereRadius, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Locomotion___ctor (RootMotion_FinalIK_IKSolverVR_Locomotion_o* __this, const MethodInfo* method);
