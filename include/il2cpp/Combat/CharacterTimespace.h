#pragma once

#include "il2cpp.h"

Combat_Character_o* Combat_CharacterTimespace__get_CP (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
float Combat_CharacterTimespace__get_PlaybackRate (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
void Combat_CharacterTimespace__set_PlaybackRate (Combat_CharacterTimespace_o* __this, float value, const MethodInfo* method);
float Combat_CharacterTimespace__get_DeltaTime (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
float Combat_CharacterTimespace__get_SmoothDeltaTime (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
float Combat_CharacterTimespace__get_PerAnimationPlaybackRate (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
void Combat_CharacterTimespace__set_PerAnimationPlaybackRate (Combat_CharacterTimespace_o* __this, float value, const MethodInfo* method);
float Combat_CharacterTimespace__get_SignalWorldTimeScale (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
void Combat_CharacterTimespace__set_SignalWorldTimeScale (Combat_CharacterTimespace_o* __this, float value, const MethodInfo* method);
float Combat_CharacterTimespace__get_MotionSpeed (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
void Combat_CharacterTimespace__ResetPerPlay (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
void Combat_CharacterTimespace__SetImpactAdjust (Combat_CharacterTimespace_o* __this, bool __________, const MethodInfo* method);
void Combat_CharacterTimespace__SetImpactAdjust (Combat_CharacterTimespace_o* __this, float time, const MethodInfo* method);
void Combat_CharacterTimespace__RegisterSignalObservers (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
void Combat_CharacterTimespace__MyStart (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
void Combat_CharacterTimespace__Update (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
float Combat_CharacterTimespace__CalcTimespanInRealtime (UnityEngine_AnimationEvent_array* events, float heavinessRate, float agilityRate, float startTime, float endTime, const MethodInfo* method);
float Combat_CharacterTimespace__CalcTimespanInRealtime (Combat_CharacterTimespace_o* __this, float startTime, float endTime, const MethodInfo* method);
float Combat_CharacterTimespace__CalcTimespanInRealtime (Combat_CharacterTimespace_o* __this, Combat_PrefetchedSignal_o* store, float startTime, float endTime, const MethodInfo* method);
void Combat_CharacterTimespace___ctor (Combat_CharacterTimespace_o* __this, const MethodInfo* method);
void Combat_CharacterTimespace___RegisterSignalObservers_b__30_0 (Combat_CharacterTimespace_o* __this, Combat_Character_o* chr, const MethodInfo* method);
bool Combat_CharacterTimespace___RegisterSignalObservers_g__WithSEGroup_30_1 (int32_t hash, const MethodInfo* method);
