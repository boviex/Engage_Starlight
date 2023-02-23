#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_Arm__get_position (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__set_position (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKSolverVR_Arm__get_rotation (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__set_rotation (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Arm__get_shoulder (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Arm__get_upperArm (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Arm__get_forearm (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Arm__get_hand (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__OnRead (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, UnityEngine_Vector3_array* positions, UnityEngine_Quaternion_array* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__PreSolve (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__ApplyOffsets (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, float scale, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__Stretching (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__Solve (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, bool isLeft, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__ResetOffsets (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__Write (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, UnityEngine_Vector3_array** solvedPositions, UnityEngine_Quaternion_array** solvedRotations, const MethodInfo* method);
float RootMotion_FinalIK_IKSolverVR_Arm__DamperValue (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, float value, float min, float max, float weight, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_Arm__GetBendNormal (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, UnityEngine_Vector3_o dir, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm__Visualize (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, RootMotion_FinalIK_IKSolverVR_VirtualBone_o* bone1, RootMotion_FinalIK_IKSolverVR_VirtualBone_o* bone2, RootMotion_FinalIK_IKSolverVR_VirtualBone_o* bone3, UnityEngine_Color_o color, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Arm___ctor (RootMotion_FinalIK_IKSolverVR_Arm_o* __this, const MethodInfo* method);
