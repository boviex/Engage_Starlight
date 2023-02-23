#pragma once

#include "il2cpp.h"

int32_t MoonSharp_Interpreter_Closure__get_EntryPointByteCodeLocation (MoonSharp_Interpreter_Closure_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Closure__set_EntryPointByteCodeLocation (MoonSharp_Interpreter_Closure_o* __this, int32_t value, const MethodInfo* method);
MoonSharp_Interpreter_Script_o* MoonSharp_Interpreter_Closure__get_OwnerScript (MoonSharp_Interpreter_Closure_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Closure__set_OwnerScript (MoonSharp_Interpreter_Closure_o* __this, MoonSharp_Interpreter_Script_o* value, const MethodInfo* method);
MoonSharp_Interpreter_Execution_ClosureContext_o* MoonSharp_Interpreter_Closure__get_ClosureContext (MoonSharp_Interpreter_Closure_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Closure__set_ClosureContext (MoonSharp_Interpreter_Closure_o* __this, MoonSharp_Interpreter_Execution_ClosureContext_o* value, const MethodInfo* method);
void MoonSharp_Interpreter_Closure___ctor (MoonSharp_Interpreter_Closure_o* __this, MoonSharp_Interpreter_Script_o* script, int32_t idx, MoonSharp_Interpreter_SymbolRef_array* symbols, System_Collections_Generic_IEnumerable_DynValue__o* resolvedLocals, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Closure__Call (MoonSharp_Interpreter_Closure_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Closure__Call (MoonSharp_Interpreter_Closure_o* __this, System_Object_array* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Closure__Call (MoonSharp_Interpreter_Closure_o* __this, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
MoonSharp_Interpreter_ScriptFunctionDelegate_o* MoonSharp_Interpreter_Closure__GetDelegate (MoonSharp_Interpreter_Closure_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_ScriptFunctionDelegate_T__o* MoonSharp_Interpreter_Closure__GetDelegate_object_ (MoonSharp_Interpreter_Closure_o* __this, const MethodInfo_22C1760* method);
int32_t MoonSharp_Interpreter_Closure__GetUpvaluesCount (MoonSharp_Interpreter_Closure_o* __this, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Closure__GetUpvalueName (MoonSharp_Interpreter_Closure_o* __this, int32_t idx, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Closure__GetUpvalue (MoonSharp_Interpreter_Closure_o* __this, int32_t idx, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Closure__GetUpvaluesType (MoonSharp_Interpreter_Closure_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Closure___cctor (const MethodInfo* method);
Il2CppObject* MoonSharp_Interpreter_Closure___GetDelegate_b__18_0 (MoonSharp_Interpreter_Closure_o* __this, System_Object_array* args, const MethodInfo* method);
Il2CppObject* MoonSharp_Interpreter_Closure___GetDelegate_b__19_0_object_ (MoonSharp_Interpreter_Closure_o* __this, System_Object_array* args, const MethodInfo_22C1730* method);
