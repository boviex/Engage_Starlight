#pragma once

#include "il2cpp.h"

bool RootMotion_BipedReferences__get_isFilled (RootMotion_BipedReferences_o* __this, const MethodInfo* method);
bool RootMotion_BipedReferences__get_isEmpty (RootMotion_BipedReferences_o* __this, const MethodInfo* method);
bool RootMotion_BipedReferences__IsEmpty (RootMotion_BipedReferences_o* __this, bool includeRoot, const MethodInfo* method);
bool RootMotion_BipedReferences__Contains (RootMotion_BipedReferences_o* __this, UnityEngine_Transform_o* t, bool ignoreRoot, const MethodInfo* method);
bool RootMotion_BipedReferences__AutoDetectReferences (RootMotion_BipedReferences_o** references, UnityEngine_Transform_o* root, RootMotion_BipedReferences_AutoDetectParams_o autoDetectParams, const MethodInfo* method);
void RootMotion_BipedReferences__DetectReferencesByNaming (RootMotion_BipedReferences_o** references, UnityEngine_Transform_o* root, RootMotion_BipedReferences_AutoDetectParams_o autoDetectParams, const MethodInfo* method);
void RootMotion_BipedReferences__AssignHumanoidReferences (RootMotion_BipedReferences_o** references, UnityEngine_Animator_o* animator, RootMotion_BipedReferences_AutoDetectParams_o autoDetectParams, const MethodInfo* method);
bool RootMotion_BipedReferences__SetupError (RootMotion_BipedReferences_o* references, System_String_o** errorMessage, const MethodInfo* method);
bool RootMotion_BipedReferences__SetupWarning (RootMotion_BipedReferences_o* references, System_String_o** warningMessage, const MethodInfo* method);
bool RootMotion_BipedReferences__IsNeckBone (UnityEngine_Transform_o* bone, UnityEngine_Transform_o* leftUpperArm, const MethodInfo* method);
bool RootMotion_BipedReferences__AddBoneToEyes (UnityEngine_Transform_o* bone, RootMotion_BipedReferences_o** references, RootMotion_BipedReferences_AutoDetectParams_o autoDetectParams, const MethodInfo* method);
bool RootMotion_BipedReferences__AddBoneToSpine (UnityEngine_Transform_o* bone, RootMotion_BipedReferences_o** references, RootMotion_BipedReferences_AutoDetectParams_o autoDetectParams, const MethodInfo* method);
void RootMotion_BipedReferences__DetectLimb (int32_t boneType, int32_t boneSide, UnityEngine_Transform_o** firstBone, UnityEngine_Transform_o** secondBone, UnityEngine_Transform_o** lastBone, UnityEngine_Transform_array* transforms, const MethodInfo* method);
void RootMotion_BipedReferences__AddBoneToHierarchy (UnityEngine_Transform_array** bones, UnityEngine_Transform_o* transform, const MethodInfo* method);
bool RootMotion_BipedReferences__LimbError (UnityEngine_Transform_o* bone1, UnityEngine_Transform_o* bone2, UnityEngine_Transform_o* bone3, System_String_o** errorMessage, const MethodInfo* method);
bool RootMotion_BipedReferences__LimbWarning (UnityEngine_Transform_o* bone1, UnityEngine_Transform_o* bone2, UnityEngine_Transform_o* bone3, System_String_o** warningMessage, const MethodInfo* method);
bool RootMotion_BipedReferences__SpineError (RootMotion_BipedReferences_o* references, System_String_o** errorMessage, const MethodInfo* method);
bool RootMotion_BipedReferences__SpineWarning (RootMotion_BipedReferences_o* references, System_String_o** warningMessage, const MethodInfo* method);
bool RootMotion_BipedReferences__EyesError (RootMotion_BipedReferences_o* references, System_String_o** errorMessage, const MethodInfo* method);
bool RootMotion_BipedReferences__EyesWarning (RootMotion_BipedReferences_o* references, System_String_o** warningMessage, const MethodInfo* method);
bool RootMotion_BipedReferences__RootHeightWarning (RootMotion_BipedReferences_o* references, System_String_o** warningMessage, const MethodInfo* method);
bool RootMotion_BipedReferences__FacingAxisWarning (RootMotion_BipedReferences_o* references, System_String_o** warningMessage, const MethodInfo* method);
float RootMotion_BipedReferences__GetVerticalOffset (UnityEngine_Vector3_o p1, UnityEngine_Vector3_o p2, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void RootMotion_BipedReferences___ctor (RootMotion_BipedReferences_o* __this, const MethodInfo* method);
