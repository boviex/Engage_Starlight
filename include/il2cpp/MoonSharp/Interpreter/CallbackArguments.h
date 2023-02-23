#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_CallbackArguments___ctor (MoonSharp_Interpreter_CallbackArguments_o* __this, System_Collections_Generic_IList_DynValue__o* args, bool isMethodCall, const MethodInfo* method);
int32_t MoonSharp_Interpreter_CallbackArguments__get_Count (MoonSharp_Interpreter_CallbackArguments_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_CallbackArguments__get_IsMethodCall (MoonSharp_Interpreter_CallbackArguments_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_CallbackArguments__set_IsMethodCall (MoonSharp_Interpreter_CallbackArguments_o* __this, bool value, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CallbackArguments__get_Item (MoonSharp_Interpreter_CallbackArguments_o* __this, int32_t index, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CallbackArguments__RawGet (MoonSharp_Interpreter_CallbackArguments_o* __this, int32_t index, bool translateVoids, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_array* MoonSharp_Interpreter_CallbackArguments__GetArray (MoonSharp_Interpreter_CallbackArguments_o* __this, int32_t skip, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CallbackArguments__AsType (MoonSharp_Interpreter_CallbackArguments_o* __this, int32_t argNum, System_String_o* funcName, int32_t type, bool allowNil, const MethodInfo* method);
MoonSharp_Interpreter_CoreLib_IO_FileUserDataBase_o* MoonSharp_Interpreter_CallbackArguments__AsUserData_FileUserDataBase_ (MoonSharp_Interpreter_CallbackArguments_o* __this, int32_t argNum, System_String_o* funcName, bool allowNil, const MethodInfo_22C0E20* method);
Il2CppObject* MoonSharp_Interpreter_CallbackArguments__AsUserData_object_ (MoonSharp_Interpreter_CallbackArguments_o* __this, int32_t argNum, System_String_o* funcName, bool allowNil, const MethodInfo_22C0E20* method);
int32_t MoonSharp_Interpreter_CallbackArguments__AsInt (MoonSharp_Interpreter_CallbackArguments_o* __this, int32_t argNum, System_String_o* funcName, const MethodInfo* method);
int64_t MoonSharp_Interpreter_CallbackArguments__AsLong (MoonSharp_Interpreter_CallbackArguments_o* __this, int32_t argNum, System_String_o* funcName, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_CallbackArguments__AsStringUsingMeta (MoonSharp_Interpreter_CallbackArguments_o* __this, MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, int32_t argNum, System_String_o* funcName, const MethodInfo* method);
MoonSharp_Interpreter_CallbackArguments_o* MoonSharp_Interpreter_CallbackArguments__SkipMethodCall (MoonSharp_Interpreter_CallbackArguments_o* __this, const MethodInfo* method);
