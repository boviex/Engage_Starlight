#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o UnityEngine_Plane__get_normal (UnityEngine_Plane_o __this, const MethodInfo* method);
float UnityEngine_Plane__get_distance (UnityEngine_Plane_o __this, const MethodInfo* method);
void UnityEngine_Plane___ctor (UnityEngine_Plane_o __this, UnityEngine_Vector3_o inNormal, UnityEngine_Vector3_o inPoint, const MethodInfo* method);
bool UnityEngine_Plane__Raycast (UnityEngine_Plane_o __this, UnityEngine_Ray_o ray, float* enter, const MethodInfo* method);
System_String_o* UnityEngine_Plane__ToString (UnityEngine_Plane_o __this, const MethodInfo* method);
System_String_o* UnityEngine_Plane__ToString (UnityEngine_Plane_o __this, System_String_o* format, System_IFormatProvider_o* formatProvider, const MethodInfo* method);
