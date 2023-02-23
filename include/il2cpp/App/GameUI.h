#pragma once

#include "il2cpp.h"

UnityEngine_GameObject_o* App_GameUI__GetRoot (const MethodInfo* method);
UnityEngine_GameObject_o* App_GameUI__GetCanvas (int32_t priority, const MethodInfo* method);
UnityEngine_GameObject_o* App_GameUI__GetCanvas (System_String_o* name, int32_t priority, const MethodInfo* method);
UnityEngine_GameObject_o* App_GameUI__TryCreateCanvas (UnityEngine_GameObject_o* parent, System_String_o* name, int32_t priority, const MethodInfo* method);
void App_GameUI__TrySetSortOrder (UnityEngine_GameObject_o* go, int32_t priority, const MethodInfo* method);
void App_GameUI___ctor (App_GameUI_o* __this, const MethodInfo* method);
