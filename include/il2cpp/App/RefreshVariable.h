#pragma once

#include "il2cpp.h"

System_String_o* App_RefreshVariable__GetFlagName (System_String_o* aid, const MethodInfo* method);
System_String_o* App_RefreshVariable__GetFlagName (System_String_o* aid, int32_t unitIndex, const MethodInfo* method);
void App_RefreshVariable__RegistGlobalFlags (const MethodInfo* method);
void App_RefreshVariable__Clear (const MethodInfo* method);
void App_RefreshVariable__OnCompletedChapter (const MethodInfo* method);
bool App_RefreshVariable__HadVisited (System_String_o* aid, const MethodInfo* method);
void App_RefreshVariable__SetVisited (System_String_o* aid, bool visited, const MethodInfo* method);
App_Unit_o* App_RefreshVariable__GetUnit (System_String_o* aid, int32_t index, const MethodInfo* method);
void App_RefreshVariable__SetUnit (System_String_o* aid, int32_t index, App_Unit_o* unit, const MethodInfo* method);
void App_RefreshVariable__CleanUpUnits (const MethodInfo* method);
void App_RefreshVariable___ctor (App_RefreshVariable_o* __this, const MethodInfo* method);
void App_RefreshVariable___cctor (const MethodInfo* method);
