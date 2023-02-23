#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_Leg__get_position (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__set_position (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKSolverVR_Leg__get_rotation (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__set_rotation (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverVR_Leg__get_hasToes (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__set_hasToes (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, bool value, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Leg__get_thigh (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Leg__get_calf (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Leg__get_foot (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Leg__get_toes (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Leg__get_lastBone (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_Leg__get_thighRelativeToPelvis (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__set_thighRelativeToPelvis (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__OnRead (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, UnityEngine_Vector3_array* positions, UnityEngine_Quaternion_array* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__PreSolve (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__ApplyOffsets (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, float scale, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__ApplyPositionOffset (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, UnityEngine_Vector3_o offset, float weight, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__ApplyRotationOffset (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, UnityEngine_Quaternion_o offset, float weight, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__Solve (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, bool stretch, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__FixTwistRotations (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__Stretching (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__Write (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, UnityEngine_Vector3_array** solvedPositions, UnityEngine_Quaternion_array** solvedRotations, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg__ResetOffsets (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Leg___ctor (RootMotion_FinalIK_IKSolverVR_Leg_o* __this, const MethodInfo* method);
