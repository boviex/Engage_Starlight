#pragma once

#include "il2cpp.h"

void RootMotion_BakerHumanoidQT___ctor (RootMotion_BakerHumanoidQT_o* __this, System_String_o* name, const MethodInfo* method);
void RootMotion_BakerHumanoidQT___ctor (RootMotion_BakerHumanoidQT_o* __this, UnityEngine_Transform_o* transform, int32_t goal, System_String_o* name, const MethodInfo* method);
void RootMotion_BakerHumanoidQT__Reset (RootMotion_BakerHumanoidQT_o* __this, const MethodInfo* method);
void RootMotion_BakerHumanoidQT__SetIKKeyframes (RootMotion_BakerHumanoidQT_o* __this, float time, UnityEngine_Avatar_o* avatar, UnityEngine_Transform_o* root, float humanScale, UnityEngine_Vector3_o bodyPosition, UnityEngine_Quaternion_o bodyRotation, const MethodInfo* method);
void RootMotion_BakerHumanoidQT__SetKeyframes (RootMotion_BakerHumanoidQT_o* __this, float time, UnityEngine_Vector3_o pos, UnityEngine_Quaternion_o rot, const MethodInfo* method);
void RootMotion_BakerHumanoidQT__MoveLastKeyframes (RootMotion_BakerHumanoidQT_o* __this, float time, const MethodInfo* method);
void RootMotion_BakerHumanoidQT__SetLoopFrame (RootMotion_BakerHumanoidQT_o* __this, float time, const MethodInfo* method);
void RootMotion_BakerHumanoidQT__MoveLastKeyframe (RootMotion_BakerHumanoidQT_o* __this, float time, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);
void RootMotion_BakerHumanoidQT__MultiplyLength (RootMotion_BakerHumanoidQT_o* __this, UnityEngine_AnimationCurve_o* curve, float mlp, const MethodInfo* method);
void RootMotion_BakerHumanoidQT__SetCurves (RootMotion_BakerHumanoidQT_o* __this, UnityEngine_AnimationClip_o** clip, float maxError, float lengthMlp, const MethodInfo* method);
