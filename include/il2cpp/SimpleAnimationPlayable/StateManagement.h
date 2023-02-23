#pragma once

#include "il2cpp.h"

int32_t SimpleAnimationPlayable_StateManagement__get_Count (SimpleAnimationPlayable_StateManagement_o* __this, const MethodInfo* method);
SimpleAnimationPlayable_StateInfo_o* SimpleAnimationPlayable_StateManagement__get_Item (SimpleAnimationPlayable_StateManagement_o* __this, int32_t i, const MethodInfo* method);
void SimpleAnimationPlayable_StateManagement___ctor (SimpleAnimationPlayable_StateManagement_o* __this, const MethodInfo* method);
SimpleAnimationPlayable_StateInfo_o* SimpleAnimationPlayable_StateManagement__InsertState (SimpleAnimationPlayable_StateManagement_o* __this, const MethodInfo* method);
bool SimpleAnimationPlayable_StateManagement__AnyStatePlaying (SimpleAnimationPlayable_StateManagement_o* __this, const MethodInfo* method);
void SimpleAnimationPlayable_StateManagement__RemoveState (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
bool SimpleAnimationPlayable_StateManagement__RemoveClip (SimpleAnimationPlayable_StateManagement_o* __this, UnityEngine_AnimationClip_o* clip, const MethodInfo* method);
SimpleAnimationPlayable_StateInfo_o* SimpleAnimationPlayable_StateManagement__FindState (SimpleAnimationPlayable_StateManagement_o* __this, System_String_o* name, const MethodInfo* method);
void SimpleAnimationPlayable_StateManagement__EnableState (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
void SimpleAnimationPlayable_StateManagement__DisableState (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
void SimpleAnimationPlayable_StateManagement__SetInputWeight (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, float weight, const MethodInfo* method);
void SimpleAnimationPlayable_StateManagement__SetStateTime (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, float time, const MethodInfo* method);
float SimpleAnimationPlayable_StateManagement__GetStateTime (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
bool SimpleAnimationPlayable_StateManagement__IsCloneOf (SimpleAnimationPlayable_StateManagement_o* __this, int32_t potentialCloneIndex, int32_t originalIndex, const MethodInfo* method);
float SimpleAnimationPlayable_StateManagement__GetStateSpeed (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
void SimpleAnimationPlayable_StateManagement__SetStateSpeed (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, float value, const MethodInfo* method);
float SimpleAnimationPlayable_StateManagement__GetInputWeight (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
float SimpleAnimationPlayable_StateManagement__GetStateLength (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
float SimpleAnimationPlayable_StateManagement__GetClipLength (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
float SimpleAnimationPlayable_StateManagement__GetStatePlayableDuration (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
UnityEngine_AnimationClip_o* SimpleAnimationPlayable_StateManagement__GetStateClip (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
int32_t SimpleAnimationPlayable_StateManagement__GetStateWrapMode (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
System_String_o* SimpleAnimationPlayable_StateManagement__GetStateName (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, const MethodInfo* method);
void SimpleAnimationPlayable_StateManagement__SetStateName (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, System_String_o* name, const MethodInfo* method);
void SimpleAnimationPlayable_StateManagement__StopState (SimpleAnimationPlayable_StateManagement_o* __this, int32_t index, bool cleanup, const MethodInfo* method);
