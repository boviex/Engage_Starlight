#pragma once

#include "il2cpp.h"

void RootMotion_BakerUtilities__ReduceKeyframes (UnityEngine_AnimationCurve_o* curve, float maxError, const MethodInfo* method);
UnityEngine_Keyframe_array* RootMotion_BakerUtilities__GetReducedKeyframes (UnityEngine_AnimationCurve_o* curve, float maxError, const MethodInfo* method);
void RootMotion_BakerUtilities__SetLoopFrame (float time, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);
void RootMotion_BakerUtilities__SetTangentMode (UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);
UnityEngine_Quaternion_o RootMotion_BakerUtilities__EnsureQuaternionContinuity (UnityEngine_Quaternion_o lastQ, UnityEngine_Quaternion_o q, const MethodInfo* method);
