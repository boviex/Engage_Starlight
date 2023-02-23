#pragma once

#include "il2cpp.h"

void App_Talk__StartBind (App_ProcInst_o* parent, System_String_o* mid, bool isContinuousNumber, const MethodInfo* method);
void App_Talk__BeginContinue (const MethodInfo* method);
void App_Talk__EndContinue (const MethodInfo* method);
bool App_Talk__IsFastForward (const MethodInfo* method);
bool App_Talk__IsPageTrigger (const MethodInfo* method);
bool App_Talk__IsAutoPlayMode (const MethodInfo* method);
void App_Talk__SetPlayMode (int32_t talkPlayMode, const MethodInfo* method);
System_String_o* App_Talk__GetPlayingMid (const MethodInfo* method);
void App_Talk___ctor (App_Talk_o* __this, const MethodInfo* method);
