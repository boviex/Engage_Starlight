#pragma once

#include "il2cpp.h"

void RootMotion_BakerTransform___ctor (RootMotion_BakerTransform_o* __this, UnityEngine_Transform_o* transform, UnityEngine_Transform_o* root, bool recordPosition, bool isRootNode, const MethodInfo* method);
void RootMotion_BakerTransform__SetRelativeSpace (RootMotion_BakerTransform_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void RootMotion_BakerTransform__SetCurves (RootMotion_BakerTransform_o* __this, UnityEngine_AnimationClip_o** clip, const MethodInfo* method);
void RootMotion_BakerTransform__AddRootMotionCurves (RootMotion_BakerTransform_o* __this, UnityEngine_AnimationClip_o** clip, const MethodInfo* method);
void RootMotion_BakerTransform__Reset (RootMotion_BakerTransform_o* __this, const MethodInfo* method);
void RootMotion_BakerTransform__ReduceKeyframes (RootMotion_BakerTransform_o* __this, float maxError, const MethodInfo* method);
void RootMotion_BakerTransform__SetKeyframes (RootMotion_BakerTransform_o* __this, float time, const MethodInfo* method);
void RootMotion_BakerTransform__AddLoopFrame (RootMotion_BakerTransform_o* __this, float time, const MethodInfo* method);
