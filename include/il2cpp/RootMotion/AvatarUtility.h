#pragma once

#include "il2cpp.h"

UnityEngine_Quaternion_o RootMotion_AvatarUtility__GetPostRotation (UnityEngine_Avatar_o* avatar, int32_t avatarIKGoal, const MethodInfo* method);
RootMotion_TQ_o* RootMotion_AvatarUtility__GetIKGoalTQ (UnityEngine_Avatar_o* avatar, float humanScale, int32_t avatarIKGoal, RootMotion_TQ_o* bodyPositionRotation, RootMotion_TQ_o* boneTQ, const MethodInfo* method);
int32_t RootMotion_AvatarUtility__HumanIDFromAvatarIKGoal (int32_t avatarIKGoal, const MethodInfo* method);
void RootMotion_AvatarUtility___ctor (RootMotion_AvatarUtility_o* __this, const MethodInfo* method);
