#pragma once

#include "il2cpp.h"

void App_InterpolatorTime___ctor (App_InterpolatorTime_o* __this, int32_t type, int32_t num, const MethodInfo* method);
float App_InterpolatorTime__get_Time (App_InterpolatorTime_o* __this, const MethodInfo* method);
bool App_InterpolatorTime__get_IsFirst (App_InterpolatorTime_o* __this, const MethodInfo* method);
bool App_InterpolatorTime__get_IsStability (App_InterpolatorTime_o* __this, const MethodInfo* method);
bool App_InterpolatorTime__get_IsNextStability (App_InterpolatorTime_o* __this, const MethodInfo* method);
bool App_InterpolatorTime__get_IsRunning (App_InterpolatorTime_o* __this, const MethodInfo* method);
void App_InterpolatorTime__Reset (App_InterpolatorTime_o* __this, const MethodInfo* method);
void App_InterpolatorTime__Instant (App_InterpolatorTime_o* __this, const MethodInfo* method);
void App_InterpolatorTime__SetCurve (App_InterpolatorTime_o* __this, int32_t type, int32_t num, const MethodInfo* method);
void App_InterpolatorTime__SetCurve (App_InterpolatorTime_o* __this, int32_t type, const MethodInfo* method);
float App_InterpolatorTime__GetRate (App_InterpolatorTime_o* __this, const MethodInfo* method);
float App_InterpolatorTime__GetValue (App_InterpolatorTime_o* __this, float prev, float next, const MethodInfo* method);
void App_InterpolatorTime__SetTime (App_InterpolatorTime_o* __this, float time, const MethodInfo* method);
float App_InterpolatorTime__get_NextTick (App_InterpolatorTime_o* __this, const MethodInfo* method);
bool App_InterpolatorTime__Tick (App_InterpolatorTime_o* __this, bool isFadeSkip, const MethodInfo* method);
