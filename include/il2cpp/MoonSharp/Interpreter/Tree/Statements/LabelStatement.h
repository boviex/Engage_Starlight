#pragma once

#include "il2cpp.h"

System_String_o* MoonSharp_Interpreter_Tree_Statements_LabelStatement__get_Label (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__set_Label (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, System_String_o* value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Tree_Statements_LabelStatement__get_Address (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__set_Address (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, int32_t value, const MethodInfo* method);
MoonSharp_Interpreter_Debugging_SourceRef_o* MoonSharp_Interpreter_Tree_Statements_LabelStatement__get_SourceRef (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__set_SourceRef (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, MoonSharp_Interpreter_Debugging_SourceRef_o* value, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Statements_LabelStatement__get_NameToken (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__set_NameToken (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, MoonSharp_Interpreter_Tree_Token_o* value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Tree_Statements_LabelStatement__get_DefinedVarsCount (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__set_DefinedVarsCount (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, int32_t value, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Tree_Statements_LabelStatement__get_LastDefinedVarName (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__set_LastDefinedVarName (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, System_String_o* value, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement___ctor (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__SetDefinedVars (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, int32_t definedVarsCount, System_String_o* lastDefinedVarsName, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__RegisterGoto (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, MoonSharp_Interpreter_Tree_Statements_GotoStatement_o* gotostat, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__Compile (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, MoonSharp_Interpreter_Execution_VM_ByteCode_o* bc, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Statements_LabelStatement__SetScope (MoonSharp_Interpreter_Tree_Statements_LabelStatement_o* __this, MoonSharp_Interpreter_Execution_RuntimeScopeBlock_o* runtimeScopeBlock, const MethodInfo* method);