#pragma once

#include "il2cpp.h"

App_GameUserRestartData_RestartStream_o* App_GameUserRestartData__GetStream (App_GameUserRestartData_o* __this, int32_t target, const MethodInfo* method);
void App_GameUserRestartData__OnCreate (App_GameUserRestartData_o* __this, const MethodInfo* method);
void App_GameUserRestartData__OnDispose (App_GameUserRestartData_o* __this, const MethodInfo* method);
int32_t App_GameUserRestartData__get_Version (App_GameUserRestartData_o* __this, const MethodInfo* method);
void App_GameUserRestartData__OnSerialize (App_GameUserRestartData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_GameUserRestartData__OnDeserialize (App_GameUserRestartData_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_GameUserRestartData__Save (int32_t target, const MethodInfo* method);
bool App_GameUserRestartData__Load (int32_t target, bool keepLevel, bool keepAchieve, bool completed, const MethodInfo* method);
void App_GameUserRestartData__Clear (const MethodInfo* method);
bool App_GameUserRestartData__IsEnable (int32_t target, const MethodInfo* method);
int32_t App_GameUserRestartData__GetSize (int32_t target, const MethodInfo* method);
App_ChapterData_o* App_GameUserRestartData__GetChapter (int32_t target, const MethodInfo* method);
int32_t App_GameUserRestartData__GetTarget (const MethodInfo* method);
bool App_GameUserRestartData__IsKeepLevel (const MethodInfo* method);
void App_GameUserRestartData__SetTarget (int32_t target, bool keepLevel, const MethodInfo* method);
void App_GameUserRestartData___ctor (App_GameUserRestartData_o* __this, const MethodInfo* method);
