#pragma once

#include "il2cpp.h"

float Combat_AnimClipKeyReductionExM__GetValueFromTime (UnityEngine_Keyframe_o key1, UnityEngine_Keyframe_o key2, float time, const MethodInfo* method);
bool Combat_AnimClipKeyReductionExM__IsInterpolationValue (UnityEngine_Keyframe_o key1, UnityEngine_Keyframe_o key2, UnityEngine_Keyframe_o comp, float eps, const MethodInfo* method);
System_Collections_Generic_IEnumerable_int__o* Combat_AnimClipKeyReductionExM__GetDeleteKeyIndex (UnityEngine_Keyframe_array* keys, float eps, const MethodInfo* method);
void Combat_AnimClipKeyReductionExM__KeyReduction (UnityEngine_AnimationCurve_o* in_curve, float eps, const MethodInfo* method);
