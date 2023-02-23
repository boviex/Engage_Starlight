#pragma once

#include "il2cpp.h"

bool App_Database__StaticFunc (System_Type_o* type, System_String_o* name, const MethodInfo* method);
void App_Database__StaticFunc (System_Type_array* types, System_String_o* name, const MethodInfo* method);
void App_Database__Load (const MethodInfo* method);
void App_Database__Completed (const MethodInfo* method);
bool App_Database__IsCompleted (const MethodInfo* method);
void App_Database__Unload (const MethodInfo* method);
System_Type_array* App_Database__GetTypes (const MethodInfo* method);
void App_Database__Reload (App_ProcInst_o* super, const MethodInfo* method);
void App_Database__Release (const MethodInfo* method);
void App_Database___ctor (App_Database_o* __this, const MethodInfo* method);
void App_Database___cctor (const MethodInfo* method);
