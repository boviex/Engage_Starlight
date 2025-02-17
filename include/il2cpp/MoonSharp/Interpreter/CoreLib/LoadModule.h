#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_CoreLib_LoadModule__MoonSharpInit (MoonSharp_Interpreter_Table_o* globalTable, MoonSharp_Interpreter_Table_o* ioTable, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CoreLib_LoadModule__load (MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, MoonSharp_Interpreter_CallbackArguments_o* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CoreLib_LoadModule__loadsafe (MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, MoonSharp_Interpreter_CallbackArguments_o* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CoreLib_LoadModule__load_impl (MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, MoonSharp_Interpreter_CallbackArguments_o* args, MoonSharp_Interpreter_Table_o* defaultEnv, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CoreLib_LoadModule__loadfile (MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, MoonSharp_Interpreter_CallbackArguments_o* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CoreLib_LoadModule__loadfilesafe (MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, MoonSharp_Interpreter_CallbackArguments_o* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CoreLib_LoadModule__loadfile_impl (MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, MoonSharp_Interpreter_CallbackArguments_o* args, MoonSharp_Interpreter_Table_o* defaultEnv, const MethodInfo* method);
MoonSharp_Interpreter_Table_o* MoonSharp_Interpreter_CoreLib_LoadModule__GetSafeDefaultEnv (MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CoreLib_LoadModule__dofile (MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, MoonSharp_Interpreter_CallbackArguments_o* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_CoreLib_LoadModule____require_clr_impl (MoonSharp_Interpreter_ScriptExecutionContext_o* executionContext, MoonSharp_Interpreter_CallbackArguments_o* args, const MethodInfo* method);
void MoonSharp_Interpreter_CoreLib_LoadModule___ctor (MoonSharp_Interpreter_CoreLib_LoadModule_o* __this, const MethodInfo* method);
