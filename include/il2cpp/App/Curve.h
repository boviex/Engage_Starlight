#pragma once

#include "il2cpp.h"

float App_Curve__Calc (int32_t type, float prev, float next, float now, float term, int32_t num, const MethodInfo* method);
float App_Curve__Lerp (float prev, float next, float now, float term, int32_t unused, const MethodInfo* method);
UnityEngine_Vector3_o App_Curve__Lerp (UnityEngine_Vector3_o prev, UnityEngine_Vector3_o next, float now, float term, int32_t unused, const MethodInfo* method);
UnityEngine_Color_o App_Curve__Lerp (UnityEngine_Color_o prev, UnityEngine_Color_o next, float now, float term, int32_t unused, const MethodInfo* method);
float App_Curve__Accel (float prev, float next, float now, float term, int32_t num, const MethodInfo* method);
float App_Curve__Decel (float prev, float next, float now, float term, int32_t num, const MethodInfo* method);
float App_Curve__AcDecel (float prev, float next, float now, float term, int32_t num, const MethodInfo* method);
float App_Curve__DecAccel (float prev, float next, float now, float term, int32_t num, const MethodInfo* method);
float App_Curve__LerpDecel (float prev, float next, float now, float term, int32_t num, const MethodInfo* method);
float App_Curve__LerpAccel (float prev, float next, float now, float term, int32_t num, const MethodInfo* method);
float App_Curve__DecelLerp (float prev, float next, float now, float term, int32_t num, const MethodInfo* method);
float App_Curve__AccelLerp (float prev, float next, float now, float term, int32_t num, const MethodInfo* method);
float App_Curve__LerpSyncTime (float prev, float next, float now, float term, int32_t unused, const MethodInfo* method);
UnityEngine_Vector3_o App_Curve__LerpSyncTime (UnityEngine_Vector3_o prev, UnityEngine_Vector3_o next, float now, float term, int32_t unused, const MethodInfo* method);
UnityEngine_Color_o App_Curve__LerpSyncTime (UnityEngine_Color_o prev, UnityEngine_Color_o next, float now, float term, int32_t unused, const MethodInfo* method);
UnityEngine_Vector3_o App_Curve__Hermite (UnityEngine_Vector3_o v0, UnityEngine_Vector3_o v1, UnityEngine_Vector3_o v2, UnityEngine_Vector3_o v3, float t, const MethodInfo* method);
UnityEngine_Vector2_o App_Curve__Hermite (UnityEngine_Vector2_o v0, UnityEngine_Vector2_o v1, UnityEngine_Vector2_o v2, UnityEngine_Vector2_o v3, float t, const MethodInfo* method);
UnityEngine_Vector3_o App_Curve__CatmullRom (UnityEngine_Vector3_o v0, UnityEngine_Vector3_o v1, UnityEngine_Vector3_o v2, UnityEngine_Vector3_o v3, float t, const MethodInfo* method);
UnityEngine_Vector2_o App_Curve__CatmullRom (UnityEngine_Vector2_o v0, UnityEngine_Vector2_o v1, UnityEngine_Vector2_o v2, UnityEngine_Vector2_o v3, float t, const MethodInfo* method);
void App_Curve___ctor (App_Curve_o* __this, const MethodInfo* method);
