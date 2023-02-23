#pragma once

#include "il2cpp.h"

void App_GameParam__Load (const MethodInfo* method);
System_String_o* App_GameParam__get_Name (App_GameParam_o* __this, const MethodInfo* method);
void App_GameParam__set_Name (App_GameParam_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_GameParam__get_English (App_GameParam_o* __this, const MethodInfo* method);
void App_GameParam__set_English (App_GameParam_o* __this, System_String_o* value, const MethodInfo* method);
float App_GameParam__get_Value (App_GameParam_o* __this, const MethodInfo* method);
void App_GameParam__set_Value (App_GameParam_o* __this, float value, const MethodInfo* method);
float App_GameParam__get_Min (App_GameParam_o* __this, const MethodInfo* method);
void App_GameParam__set_Min (App_GameParam_o* __this, float value, const MethodInfo* method);
float App_GameParam__get_Max (App_GameParam_o* __this, const MethodInfo* method);
void App_GameParam__set_Max (App_GameParam_o* __this, float value, const MethodInfo* method);
float App_GameParam__get_Step (App_GameParam_o* __this, const MethodInfo* method);
void App_GameParam__set_Step (App_GameParam_o* __this, float value, const MethodInfo* method);
System_String_o* App_GameParam__get_Enum (App_GameParam_o* __this, const MethodInfo* method);
void App_GameParam__set_Enum (App_GameParam_o* __this, System_String_o* value, const MethodInfo* method);
float App_GameParam__get_Initial (App_GameParam_o* __this, const MethodInfo* method);
void App_GameParam__set_Initial (App_GameParam_o* __this, float value, const MethodInfo* method);
void App_GameParam__OnBuild (App_GameParam_o* __this, const MethodInfo* method);
System_String_o* App_GameParam__GetDebugName (App_GameParam_o* __this, const MethodInfo* method);
System_String_o* App_GameParam__GetGroupName (App_GameParam_o* __this, const MethodInfo* method);
int32_t App_GameParam__GetKind (App_GameParam_o* __this, const MethodInfo* method);
void App_GameParam__SetValue (App_GameParam_o* __this, float value, const MethodInfo* method);
void App_GameParam__Reset (App_GameParam_o* __this, const MethodInfo* method);
System_String_array* App_GameParam__GetEnum (App_GameParam_o* __this, const MethodInfo* method);
System_String_o* App_GameParam__GetString (App_GameParam_o* __this, const MethodInfo* method);
bool App_GameParam__GetBool (System_String_o* name, const MethodInfo* method);
int32_t App_GameParam__GetInt (System_String_o* name, const MethodInfo* method);
float App_GameParam__GetFloat (System_String_o* name, const MethodInfo* method);
UnityEngine_Color_o App_GameParam__GetColor (System_String_o* nameR, System_String_o* nameG, System_String_o* nameB, const MethodInfo* method);
UnityEngine_Color_o App_GameParam__GetColor (System_String_o* nameR, System_String_o* nameG, System_String_o* nameB, System_String_o* nameA, const MethodInfo* method);
int32_t App_GameParam__TryGetGroupIndex (System_String_o* group, const MethodInfo* method);
int32_t App_GameParam__EachFunction (App_GameParam_ParamFunction_o* func, int32_t index, System_Object_array* args, const MethodInfo* method);
void App_GameParam__EachFunction (App_GameParam_ParamFunction_o* func, System_String_o* group, System_Object_array* args, const MethodInfo* method);
void App_GameParam___ctor (App_GameParam_o* __this, const MethodInfo* method);
