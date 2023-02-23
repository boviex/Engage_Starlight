#pragma once

#include "il2cpp.h"

float App_GameTime__get_Time (const MethodInfo* method);
float App_GameTime__get_UnscaledTime (const MethodInfo* method);
double App_GameTime__get_RealTime (const MethodInfo* method);
float App_GameTime__get_DeltaTime (const MethodInfo* method);
float App_GameTime__get_UnscaledDeltaTime (const MethodInfo* method);
int32_t App_GameTime__get_FrameCount (const MethodInfo* method);
float App_GameTime__get_TimeScale (const MethodInfo* method);
void App_GameTime__Initialize (const MethodInfo* method);
float App_GameTime__SetTimeScale (int32_t ch, float scale, const MethodInfo* method);
float App_GameTime__GetTimeScale (int32_t ch, const MethodInfo* method);
void App_GameTime__UpdateTimeScale (const MethodInfo* method);
void App_GameTime__PushVsyncCount (int32_t mode, const MethodInfo* method);
void App_GameTime__PopVsyncCount (const MethodInfo* method);
void App_GameTime__SetVsyncCount (int32_t mode, const MethodInfo* method);
void App_GameTime__SetVsyncCount (int32_t count, const MethodInfo* method);
int32_t App_GameTime__get_VsyncDeltaCount (const MethodInfo* method);
float App_GameTime__get_VsyncDeltaTime (const MethodInfo* method);
int32_t App_GameTime__get_VsyncFixedCount (const MethodInfo* method);
float App_GameTime__get_VsyncFixedTime (const MethodInfo* method);
float App_GameTime__GetTimeRatio (float time, const MethodInfo* method);
float App_GameTime__get_PlayTime (const MethodInfo* method);
void App_GameTime__set_PlayTime (float value, const MethodInfo* method);
float App_GameTime__get_WatchTime (const MethodInfo* method);
void App_GameTime__set_WatchTime (float value, const MethodInfo* method);
bool App_GameTime__get_IsWatching (const MethodInfo* method);
void App_GameTime__set_IsWatching (bool value, const MethodInfo* method);
void App_GameTime__WatchStart (const MethodInfo* method);
void App_GameTime__WatchStop (const MethodInfo* method);
void App_GameTime__WatchReset (const MethodInfo* method);
int32_t App_GameTime__ToHour (float time, const MethodInfo* method);
int32_t App_GameTime__ToMinute (float time, const MethodInfo* method);
int32_t App_GameTime__ToSecond (float time, const MethodInfo* method);
System_String_o* App_GameTime__ToDebug (float time, const MethodInfo* method);
void App_GameTime__Reset (const MethodInfo* method);
void App_GameTime__Update (const MethodInfo* method);
void App_GameTime__Serialize (App_Stream_o* stream, const MethodInfo* method);
void App_GameTime__Deserialize (App_Stream_o* stream, const MethodInfo* method);
void App_GameTime___ctor (App_GameTime_o* __this, const MethodInfo* method);
void App_GameTime___cctor (const MethodInfo* method);
