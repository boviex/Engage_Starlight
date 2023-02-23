#pragma once

#include "il2cpp.h"

RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Spine__get_pelvis (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Spine__get_firstSpineBone (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Spine__get_chest (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Spine__get_neck (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR_Spine__get_head (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKSolverVR_Spine__get_anchorRotation (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__set_anchorRotation (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKSolverVR_Spine__get_anchorRelativeToHead (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__set_anchorRelativeToHead (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__OnRead (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, UnityEngine_Vector3_array* positions, UnityEngine_Quaternion_array* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__PreSolve (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__ApplyOffsets (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, float scale, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__CalculateChestTargetRotation (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, RootMotion_FinalIK_IKSolverVR_VirtualBone_o* rootBone, RootMotion_FinalIK_IKSolverVR_Arm_array* arms, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__Solve (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, RootMotion_FinalIK_IKSolverVR_VirtualBone_o* rootBone, RootMotion_FinalIK_IKSolverVR_Leg_array* legs, RootMotion_FinalIK_IKSolverVR_Arm_array* arms, float scale, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__FABRIKPass (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, UnityEngine_Vector3_o animatedPelvisPos, UnityEngine_Vector3_o rootUp, float weight, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__SolvePelvis (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__Write (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, UnityEngine_Vector3_array** solvedPositions, UnityEngine_Quaternion_array** solvedRotations, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__ResetOffsets (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__AdjustChestByHands (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, UnityEngine_Quaternion_o* chestTargetRotation, RootMotion_FinalIK_IKSolverVR_Arm_array* arms, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__InverseTranslateToHead (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, RootMotion_FinalIK_IKSolverVR_Leg_array* legs, bool limited, bool useCurrentLegMag, UnityEngine_Vector3_o offset, float w, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__TranslatePelvis (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, RootMotion_FinalIK_IKSolverVR_Leg_array* legs, UnityEngine_Vector3_o deltaPosition, UnityEngine_Quaternion_o deltaRotation, float scale, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR_Spine__LimitPelvisPosition (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, RootMotion_FinalIK_IKSolverVR_Leg_array* legs, UnityEngine_Vector3_o pelvisPosition, bool useCurrentLegMag, int32_t it, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__Bend (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, int32_t firstIndex, int32_t lastIndex, UnityEngine_Quaternion_o targetRotation, float clampWeight, bool uniformWeight, float w, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine__Bend (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, RootMotion_FinalIK_IKSolverVR_VirtualBone_array* bones, int32_t firstIndex, int32_t lastIndex, UnityEngine_Quaternion_o targetRotation, UnityEngine_Quaternion_o rotationOffset, float clampWeight, bool uniformWeight, float w, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR_Spine___ctor (RootMotion_FinalIK_IKSolverVR_Spine_o* __this, const MethodInfo* method);
