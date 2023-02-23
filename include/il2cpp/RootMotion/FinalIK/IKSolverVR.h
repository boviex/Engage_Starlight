#pragma once

#include "il2cpp.h"

void RootMotion_FinalIK_IKSolverVR__SetToReferences (RootMotion_FinalIK_IKSolverVR_o* __this, RootMotion_FinalIK_VRIK_References_o* references, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__GuessHandOrientations (RootMotion_FinalIK_IKSolverVR_o* __this, RootMotion_FinalIK_VRIK_References_o* references, bool onlyIfZero, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__DefaultAnimationCurves (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__AddPositionOffset (RootMotion_FinalIK_IKSolverVR_o* __this, int32_t positionOffset, UnityEngine_Vector3_o value, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__AddRotationOffset (RootMotion_FinalIK_IKSolverVR_o* __this, int32_t rotationOffset, UnityEngine_Vector3_o value, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__AddRotationOffset (RootMotion_FinalIK_IKSolverVR_o* __this, int32_t rotationOffset, UnityEngine_Quaternion_o value, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__AddPlatformMotion (RootMotion_FinalIK_IKSolverVR_o* __this, UnityEngine_Vector3_o deltaPosition, UnityEngine_Quaternion_o deltaRotation, UnityEngine_Vector3_o platformPivot, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__Reset (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__StoreDefaultLocalState (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__FixTransforms (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolver_Point_array* RootMotion_FinalIK_IKSolverVR__GetPoints (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
RootMotion_FinalIK_IKSolver_Point_o* RootMotion_FinalIK_IKSolverVR__GetPoint (RootMotion_FinalIK_IKSolverVR_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
bool RootMotion_FinalIK_IKSolverVR__IsValid (RootMotion_FinalIK_IKSolverVR_o* __this, System_String_o** message, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR__GetNormal (RootMotion_FinalIK_IKSolverVR_o* __this, UnityEngine_Transform_array* transforms, const MethodInfo* method);
UnityEngine_Keyframe_array* RootMotion_FinalIK_IKSolverVR__GetSineKeyframes (float mag, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__UpdateSolverTransforms (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__OnInitiate (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__OnUpdate (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__WriteTransforms (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__Read (RootMotion_FinalIK_IKSolverVR_o* __this, UnityEngine_Vector3_array* positions, UnityEngine_Quaternion_array* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__Solve (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR__GetPosition (RootMotion_FinalIK_IKSolverVR_o* __this, int32_t index, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_FinalIK_IKSolverVR__GetRotation (RootMotion_FinalIK_IKSolverVR_o* __this, int32_t index, const MethodInfo* method);
RootMotion_FinalIK_IKSolverVR_VirtualBone_o* RootMotion_FinalIK_IKSolverVR__get_rootBone (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__set_rootBone (RootMotion_FinalIK_IKSolverVR_o* __this, RootMotion_FinalIK_IKSolverVR_VirtualBone_o* value, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR__Write (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
UnityEngine_Vector3_o RootMotion_FinalIK_IKSolverVR__GetPelvisOffset (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
void RootMotion_FinalIK_IKSolverVR___ctor (RootMotion_FinalIK_IKSolverVR_o* __this, const MethodInfo* method);
