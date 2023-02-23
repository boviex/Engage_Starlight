#pragma once

#include "il2cpp.h"

void RootMotion_FinalIK_IKSolverVR_VirtualBone___ctor (RootMotion_FinalIK_IKSolverVR_VirtualBone_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_VirtualBone__Read (RootMotion_FinalIK_IKSolverVR_VirtualBone_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_VirtualBone__SwingRotation (RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, int32_t index, UnityEngine_Vector3_o swingTarget, float weight, const MethodInfo* method);
float RootMotion_FinalIK_IKSolverVR_VirtualBone__PreSolve (RootMotion_FinalIK_IKSolverVR_VirtualBone_array** bones, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_VirtualBone__RotateAroundPoint (RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, int32_t index, UnityEngine_Vector3_o point, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_VirtualBone__RotateBy (RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, int32_t index, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_VirtualBone__RotateBy (RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_VirtualBone__RotateTo (RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, int32_t index, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_VirtualBone__SolveTrigonometric (RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, int32_t first, int32_t second, int32_t third, UnityEngine_Vector3_o targetPosition, UnityEngine_Vector3_o bendNormal, float weight, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_VirtualBone__GetDirectionToBendPoint (UnityEngine_Vector3_o direction, float directionMag, UnityEngine_Vector3_o bendDirection, float sqrMag1, float sqrMag2, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_VirtualBone__SolveFABRIK (RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, UnityEngine_Vector3_o startPosition, UnityEngine_Vector3_o targetPosition, float weight, float minNormalizedTargetDistance, int32_t iterations, float length, UnityEngine_Vector3_o startOffset, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_VirtualBone__SolveFABRIKJoint (UnityEngine_Vector3_o pos1, UnityEngine_Vector3_o pos2, float length, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_VirtualBone__SolveCCD (RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, UnityEngine_Vector3_o targetPosition, float weight, int32_t iterations, const MethodInfo* method);
