#pragma once

#include "il2cpp.h"

void App_CommonWaitMessage__Open (System_String_o* msg, bool isPlaySound, bool isHideWaitAnime, const MethodInfo* method);
void App_CommonWaitMessage__Close (bool isSuccess, const MethodInfo* method);
bool App_CommonWaitMessage__IsAlive (const MethodInfo* method);
void App_CommonWaitMessage___ctor (App_CommonWaitMessage_o* __this, bool isPlaySound, const MethodInfo* method);
void App_CommonWaitMessage__OnDispose (App_CommonWaitMessage_o* __this, const MethodInfo* method);
void App_CommonWaitMessage__PlayLoopSE (App_CommonWaitMessage_o* __this, const MethodInfo* method);
void App_CommonWaitMessage__StopLoopSE (App_CommonWaitMessage_o* __this, const MethodInfo* method);
void App_CommonWaitMessage__PlayResultSE (App_CommonWaitMessage_o* __this, bool isSuccess, const MethodInfo* method);
