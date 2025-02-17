#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_Script___cctor (const MethodInfo* method);
void MoonSharp_Interpreter_Script___ctor (MoonSharp_Interpreter_Script_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Script___ctor (MoonSharp_Interpreter_Script_o* __this, int32_t coreModules, const MethodInfo* method);
MoonSharp_Interpreter_ScriptOptions_o* MoonSharp_Interpreter_Script__get_DefaultOptions (const MethodInfo* method);
void MoonSharp_Interpreter_Script__set_DefaultOptions (MoonSharp_Interpreter_ScriptOptions_o* value, const MethodInfo* method);
MoonSharp_Interpreter_ScriptOptions_o* MoonSharp_Interpreter_Script__get_Options (MoonSharp_Interpreter_Script_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Script__set_Options (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_ScriptOptions_o* value, const MethodInfo* method);
MoonSharp_Interpreter_ScriptGlobalOptions_o* MoonSharp_Interpreter_Script__get_GlobalOptions (const MethodInfo* method);
void MoonSharp_Interpreter_Script__set_GlobalOptions (MoonSharp_Interpreter_ScriptGlobalOptions_o* value, const MethodInfo* method);
MoonSharp_Interpreter_Diagnostics_PerformanceStatistics_o* MoonSharp_Interpreter_Script__get_PerformanceStats (MoonSharp_Interpreter_Script_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Script__set_PerformanceStats (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_Diagnostics_PerformanceStatistics_o* value, const MethodInfo* method);
MoonSharp_Interpreter_Table_o* MoonSharp_Interpreter_Script__get_Globals (MoonSharp_Interpreter_Script_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__LoadFunction (MoonSharp_Interpreter_Script_o* __this, System_String_o* code, MoonSharp_Interpreter_Table_o* globalTable, System_String_o* funcFriendlyName, const MethodInfo* method);
void MoonSharp_Interpreter_Script__SignalByteCodeChange (MoonSharp_Interpreter_Script_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Script__SignalSourceCodeChange (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_Debugging_SourceCode_o* source, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__LoadString (MoonSharp_Interpreter_Script_o* __this, System_String_o* code, MoonSharp_Interpreter_Table_o* globalTable, System_String_o* codeFriendlyName, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__LoadStream (MoonSharp_Interpreter_Script_o* __this, System_IO_Stream_o* stream, MoonSharp_Interpreter_Table_o* globalTable, System_String_o* codeFriendlyName, const MethodInfo* method);
void MoonSharp_Interpreter_Script__Dump (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_DynValue_o* function, System_IO_Stream_o* stream, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__LoadFile (MoonSharp_Interpreter_Script_o* __this, System_String_o* filename, MoonSharp_Interpreter_Table_o* globalContext, System_String_o* friendlyFilename, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__DoString (MoonSharp_Interpreter_Script_o* __this, System_String_o* code, MoonSharp_Interpreter_Table_o* globalContext, System_String_o* codeFriendlyName, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__DoStream (MoonSharp_Interpreter_Script_o* __this, System_IO_Stream_o* stream, MoonSharp_Interpreter_Table_o* globalContext, System_String_o* codeFriendlyName, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__DoFile (MoonSharp_Interpreter_Script_o* __this, System_String_o* filename, MoonSharp_Interpreter_Table_o* globalContext, System_String_o* codeFriendlyName, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__RunFile (System_String_o* filename, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__RunString (System_String_o* code, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__MakeClosure (MoonSharp_Interpreter_Script_o* __this, int32_t address, MoonSharp_Interpreter_Table_o* envTable, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__Call (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_DynValue_o* function, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__Call (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_DynValue_o* function, MoonSharp_Interpreter_DynValue_array* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__Call (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_DynValue_o* function, System_Object_array* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__Call (MoonSharp_Interpreter_Script_o* __this, Il2CppObject* function, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__Call (MoonSharp_Interpreter_Script_o* __this, Il2CppObject* function, System_Object_array* args, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__CreateCoroutine (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_DynValue_o* function, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__CreateCoroutine (MoonSharp_Interpreter_Script_o* __this, Il2CppObject* function, const MethodInfo* method);
bool MoonSharp_Interpreter_Script__get_DebuggerEnabled (MoonSharp_Interpreter_Script_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Script__set_DebuggerEnabled (MoonSharp_Interpreter_Script_o* __this, bool value, const MethodInfo* method);
void MoonSharp_Interpreter_Script__AttachDebugger (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_Debugging_IDebugger_o* debugger, const MethodInfo* method);
MoonSharp_Interpreter_Debugging_SourceCode_o* MoonSharp_Interpreter_Script__GetSourceCode (MoonSharp_Interpreter_Script_o* __this, int32_t sourceCodeID, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Script__get_SourceCodeCount (MoonSharp_Interpreter_Script_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Script__RequireModule (MoonSharp_Interpreter_Script_o* __this, System_String_o* modname, MoonSharp_Interpreter_Table_o* globalContext, const MethodInfo* method);
MoonSharp_Interpreter_Table_o* MoonSharp_Interpreter_Script__GetTypeMetatable (MoonSharp_Interpreter_Script_o* __this, int32_t type, const MethodInfo* method);
void MoonSharp_Interpreter_Script__SetTypeMetatable (MoonSharp_Interpreter_Script_o* __this, int32_t type, MoonSharp_Interpreter_Table_o* metatable, const MethodInfo* method);
void MoonSharp_Interpreter_Script__WarmUp (const MethodInfo* method);
MoonSharp_Interpreter_DynamicExpression_o* MoonSharp_Interpreter_Script__CreateDynamicExpression (MoonSharp_Interpreter_Script_o* __this, System_String_o* code, const MethodInfo* method);
MoonSharp_Interpreter_DynamicExpression_o* MoonSharp_Interpreter_Script__CreateConstantDynamicExpression (MoonSharp_Interpreter_Script_o* __this, System_String_o* code, MoonSharp_Interpreter_DynValue_o* constant, const MethodInfo* method);
MoonSharp_Interpreter_ScriptExecutionContext_o* MoonSharp_Interpreter_Script__CreateDynamicExecutionContext (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_CallbackFunction_o* func, const MethodInfo* method);
MoonSharp_Interpreter_Table_o* MoonSharp_Interpreter_Script__get_Registry (MoonSharp_Interpreter_Script_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Script__set_Registry (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_Table_o* value, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Script__GetBanner (System_String_o* subproduct, const MethodInfo* method);
MoonSharp_Interpreter_Script_o* MoonSharp_Interpreter_Script__MoonSharp_Interpreter_IScriptPrivateResource_get_OwnerScript (MoonSharp_Interpreter_Script_o* __this, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Script__GetLine (MoonSharp_Interpreter_Script_o* __this, int32_t iAddress, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Script__GetLine (MoonSharp_Interpreter_Script_o* __this, MoonSharp_Interpreter_Debugging_WatchItem_o* item, const MethodInfo* method);
MoonSharp_Interpreter_Debugging_SourceRef_o* MoonSharp_Interpreter_Script__GetSourceRef (MoonSharp_Interpreter_Script_o* __this, int32_t iAddress, const MethodInfo* method);
