#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression___ctor (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, bool usesGlobalEnv, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression___ctor (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, bool pushSelfParam, bool isLambda, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression___ctor (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, bool pushSelfParam, bool usesGlobalEnv, bool isLambda, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Statement_o* MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression__CreateLambdaBody (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Statement_o* MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression__CreateBody (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, const MethodInfo* method);
System_Collections_Generic_List_string__o* MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression__BuildParamList (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, bool pushSelfParam, MoonSharp_Interpreter_Tree_Token_o* openBracketToken, bool isLambda, const MethodInfo* method);
MoonSharp_Interpreter_SymbolRef_array* MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression__DefineArguments (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, System_Collections_Generic_List_string__o* paramnames, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, const MethodInfo* method);
MoonSharp_Interpreter_SymbolRef_o* MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression__CreateUpvalue (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_BuildTimeScope_o* scope, MoonSharp_Interpreter_SymbolRef_o* symbol, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression__Eval (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_ScriptExecutionContext_o* context, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression__CompileBody (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_VM_ByteCode_o* bc, System_String_o* friendlyName, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression__Compile (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_VM_ByteCode_o* bc, System_Func_int__o* afterDecl, System_String_o* friendlyName, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression__Compile (MoonSharp_Interpreter_Tree_Expressions_FunctionDefinitionExpression_o* __this, MoonSharp_Interpreter_Execution_VM_ByteCode_o* bc, const MethodInfo* method);