#pragma once

#include "il2cpp.h"

int32_t App_ScriptUtil__GetInt (MoonSharp_Interpreter_DynValue_o* value, const MethodInfo* method);
float App_ScriptUtil__GetFloat (MoonSharp_Interpreter_DynValue_o* value, const MethodInfo* method);
System_String_o* App_ScriptUtil__GetString (MoonSharp_Interpreter_DynValue_o* value, const MethodInfo* method);
bool App_ScriptUtil__GetBool (MoonSharp_Interpreter_DynValue_o* value, const MethodInfo* method);
bool App_ScriptUtil__IsString (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo* method);
int32_t App_ScriptUtil__TryGetType (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo* method);
int32_t App_ScriptUtil__TryGetInt (MoonSharp_Interpreter_DynValue_array* args, int32_t index, int32_t nothing, const MethodInfo* method);
float App_ScriptUtil__TryGetFloat (MoonSharp_Interpreter_DynValue_array* args, int32_t index, float nothing, const MethodInfo* method);
int32_t App_ScriptUtil__TryGetHash (MoonSharp_Interpreter_DynValue_array* args, int32_t index, int32_t nothing, const MethodInfo* method);
System_String_o* App_ScriptUtil__TryGetString (MoonSharp_Interpreter_DynValue_array* args, int32_t index, System_String_o* nothing, const MethodInfo* method);
bool App_ScriptUtil__TryGetBool (MoonSharp_Interpreter_DynValue_array* args, int32_t index, bool nothing, const MethodInfo* method);
int32_t App_ScriptUtil__TryGetForce (MoonSharp_Interpreter_DynValue_array* args, int32_t index, int32_t nothing, const MethodInfo* method);
App_ChapterData_o* App_ScriptUtil__TryGetData_ChapterData_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, App_ChapterData_o* nothing, const MethodInfo_205DCE0* method);
App_GodData_o* App_ScriptUtil__TryGetData_GodData_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, App_GodData_o* nothing, const MethodInfo_205DCE0* method);
App_ItemData_o* App_ScriptUtil__TryGetData_ItemData_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, App_ItemData_o* nothing, const MethodInfo_205DCE0* method);
Il2CppObject* App_ScriptUtil__TryGetData_object_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, Il2CppObject* nothing, const MethodInfo_205DCE0* method);
App_PersonData_o* App_ScriptUtil__TryGetData_PersonData_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, App_PersonData_o* nothing, const MethodInfo_205DCE0* method);
App_Unit_o* App_ScriptUtil__TryGetUnit (MoonSharp_Interpreter_DynValue_array* args, int32_t index, bool warning, const MethodInfo* method);
App_Unit_o* App_ScriptUtil__TryMapGetUnit (MoonSharp_Interpreter_DynValue_array* args, int32_t index, bool warning, const MethodInfo* method);
App_GodUnit_o* App_ScriptUtil__TryGetGodUnit (MoonSharp_Interpreter_DynValue_array* args, int32_t index, bool warning, const MethodInfo* method);
App_ItemData_o* App_ScriptUtil__TryGetItem (MoonSharp_Interpreter_DynValue_array* args, int32_t index, bool warning, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* App_ScriptUtil__TryGetFunc (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* App_ScriptUtil__TryGetValue (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_array* App_ScriptUtil__TryGetArgs (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo* method);
int32_t App_ScriptUtil__TryGetIndex_object_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo_205DE80* method);
int32_t App_ScriptUtil__TryGetIndex_PersonData_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo_205DE80* method);
Il2CppObject* App_ScriptUtil__TryGetUserData_object_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo_205DFE0* method);
App_ScriptMenu_EventMenu_o* App_ScriptUtil__TryGetUserData_ScriptMenu_EventMenu_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo_205DFE0* method);
App_ScriptMenu_EventMenuItem_o* App_ScriptUtil__TryGetUserData_ScriptMenu_EventMenuItem_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo_205DFE0* method);
UnityEngine_GameObject_o* App_ScriptUtil__TryGetGameObject (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo* method);
Il2CppObject* App_ScriptUtil__TryGetComponent_object_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo_205D860* method);
System_Object_array* App_ScriptUtil__TryGetComponents_object_ (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo_205DAB0* method);
UnityEngine_GameObject_o* App_ScriptUtil__TryGetLocator (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo* method);
System_String_o* App_ScriptUtil__GetFuncName (MoonSharp_Interpreter_DynValue_o* func, const MethodInfo* method);
System_String_o* App_ScriptUtil__GetScriptPath (System_String_o* name, const MethodInfo* method);
void App_ScriptUtil__Yield (const MethodInfo* method);
void App_ScriptUtil__Call (MoonSharp_Interpreter_DynValue_o* func, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
void App_ScriptUtil__AddCoroutine (MoonSharp_Interpreter_DynValue_o* func, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
void App_ScriptUtil__JumpCoroutine (MoonSharp_Interpreter_DynValue_o* func, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
App_ProcInst_o* App_ScriptUtil__GetSequence (const MethodInfo* method);
int32_t App_ScriptUtil__TryGetMenuCondition (MoonSharp_Interpreter_DynValue_array* args, int32_t index, const MethodInfo* method);
System_String_o* App_ScriptUtil__GetCursorStackName (int32_t index, const MethodInfo* method);
void App_ScriptUtil__CreateCursorStack (const MethodInfo* method);
void App_ScriptUtil__ClearCursorStack (const MethodInfo* method);
void App_ScriptUtil__ClearCursorStack (int32_t index, const MethodInfo* method);
int32_t App_ScriptUtil__GetCursorStack (int32_t index, const MethodInfo* method);
void App_ScriptUtil__SetCursorStack (int32_t index, int32_t value, const MethodInfo* method);
void App_ScriptUtil___ctor (App_ScriptUtil_o* __this, const MethodInfo* method);
void App_ScriptUtil___cctor (const MethodInfo* method);