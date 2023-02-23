#pragma once

#include "il2cpp.h"

System_String_o* App_EventScript__get_Name (App_EventScript_o* __this, const MethodInfo* method);
void App_EventScript__set_Name (App_EventScript_o* __this, System_String_o* value, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* App_EventScript__GetFunc (App_EventScript_o* __this, System_String_o* name, const MethodInfo* method);
void App_EventScript__Call (App_EventScript_o* __this, System_String_o* name, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* App_EventScript__TryCreateCoroutine (App_EventScript_o* __this, System_String_o* name, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* App_EventScript__TryCreateCoroutine (App_EventScript_o* __this, MoonSharp_Interpreter_DynValue_o* function, const MethodInfo* method);
bool App_EventScript__IsDead (App_EventScript_o* __this, MoonSharp_Interpreter_DynValue_o* coroutine, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* App_EventScript__DoCoroutine (App_EventScript_o* __this, MoonSharp_Interpreter_DynValue_o* coroutine, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
void App_EventScript__Dump (App_EventScript_o* __this, const MethodInfo* method);
void App_EventScript__RegistFunction (App_EventScript_o* __this, App_EventScript_FunctionArgs_o* func, System_String_o* name, const MethodInfo* method);
void App_EventScript__RegistAction (App_EventScript_o* __this, App_EventScript_ActionArgs_o* func, System_String_o* name, const MethodInfo* method);
void App_EventScript__Regist (App_EventScript_o* __this, const MethodInfo* method);
void App_EventScript__Initialize (const MethodInfo* method);
void App_EventScript__LoadImpl (App_EventScript_o* __this, System_String_o* path, const MethodInfo* method);
void App_EventScript__UnloadImpl (App_EventScript_o* __this, const MethodInfo* method);
void App_EventScript__Load (System_String_o* path, const MethodInfo* method);
void App_EventScript__Unload (const MethodInfo* method);
App_EventScript_o* App_EventScript__get_Instance (const MethodInfo* method);
void App_EventScript___ctor (App_EventScript_o* __this, const MethodInfo* method);
void App_EventScript___cctor (const MethodInfo* method);
