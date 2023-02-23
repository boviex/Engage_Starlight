#pragma once

#include "il2cpp.h"

void UnityEngine_AnimationClip___ctor (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
void UnityEngine_AnimationClip__Internal_CreateAnimationClip (UnityEngine_AnimationClip_o* self, const MethodInfo* method);
void UnityEngine_AnimationClip__SampleAnimation (UnityEngine_AnimationClip_o* __this, UnityEngine_GameObject_o* go, float time, const MethodInfo* method);
void UnityEngine_AnimationClip__SampleAnimation (UnityEngine_GameObject_o* go, UnityEngine_AnimationClip_o* clip, float inTime, int32_t wrapMode, const MethodInfo* method);
float UnityEngine_AnimationClip__get_length (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
float UnityEngine_AnimationClip__get_startTime (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
float UnityEngine_AnimationClip__get_stopTime (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
float UnityEngine_AnimationClip__get_frameRate (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
void UnityEngine_AnimationClip__set_frameRate (UnityEngine_AnimationClip_o* __this, float value, const MethodInfo* method);
void UnityEngine_AnimationClip__SetCurve (UnityEngine_AnimationClip_o* __this, System_String_o* relativePath, System_Type_o* type, System_String_o* propertyName, UnityEngine_AnimationCurve_o* curve, const MethodInfo* method);
void UnityEngine_AnimationClip__EnsureQuaternionContinuity (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
void UnityEngine_AnimationClip__ClearCurves (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
int32_t UnityEngine_AnimationClip__get_wrapMode (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
void UnityEngine_AnimationClip__set_wrapMode (UnityEngine_AnimationClip_o* __this, int32_t value, const MethodInfo* method);
UnityEngine_Bounds_o UnityEngine_AnimationClip__get_localBounds (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
void UnityEngine_AnimationClip__set_localBounds (UnityEngine_AnimationClip_o* __this, UnityEngine_Bounds_o value, const MethodInfo* method);
bool UnityEngine_AnimationClip__get_legacy (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
void UnityEngine_AnimationClip__set_legacy (UnityEngine_AnimationClip_o* __this, bool value, const MethodInfo* method);
bool UnityEngine_AnimationClip__get_humanMotion (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
bool UnityEngine_AnimationClip__get_empty (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
bool UnityEngine_AnimationClip__get_hasGenericRootTransform (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
bool UnityEngine_AnimationClip__get_hasMotionFloatCurves (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
bool UnityEngine_AnimationClip__get_hasMotionCurves (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
bool UnityEngine_AnimationClip__get_hasRootCurves (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
bool UnityEngine_AnimationClip__get_hasRootMotion (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
void UnityEngine_AnimationClip__AddEvent (UnityEngine_AnimationClip_o* __this, UnityEngine_AnimationEvent_o* evt, const MethodInfo* method);
void UnityEngine_AnimationClip__AddEventInternal (UnityEngine_AnimationClip_o* __this, Il2CppObject* evt, const MethodInfo* method);
UnityEngine_AnimationEvent_array* UnityEngine_AnimationClip__get_events (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
void UnityEngine_AnimationClip__set_events (UnityEngine_AnimationClip_o* __this, UnityEngine_AnimationEvent_array* value, const MethodInfo* method);
void UnityEngine_AnimationClip__SetEventsInternal (UnityEngine_AnimationClip_o* __this, System_Array_o* value, const MethodInfo* method);
System_Array_o* UnityEngine_AnimationClip__GetEventsInternal (UnityEngine_AnimationClip_o* __this, const MethodInfo* method);
void UnityEngine_AnimationClip__get_localBounds_Injected (UnityEngine_AnimationClip_o* __this, UnityEngine_Bounds_o* ret, const MethodInfo* method);
void UnityEngine_AnimationClip__set_localBounds_Injected (UnityEngine_AnimationClip_o* __this, UnityEngine_Bounds_o* value, const MethodInfo* method);
