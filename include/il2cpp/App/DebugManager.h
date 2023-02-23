#pragma once

#include "il2cpp.h"

void App_DebugManager__Initialize (const MethodInfo* method);
void App_DebugManager__OnMessage (System_String_o* logText, System_String_o* stackTrace, int32_t type, const MethodInfo* method);
void App_DebugManager__Clear (const MethodInfo* method);
System_String_o* App_DebugManager__GetStackMethodName (int32_t depth, const MethodInfo* method);
void App_DebugManager__Stop (System_String_o* ex, const MethodInfo* method);
void App_DebugManager___ctor (App_DebugManager_o* __this, const MethodInfo* method);
void App_DebugManager___cctor (const MethodInfo* method);
