#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_Tree_Expressions_DynamicExprExpression___ctor (MoonSharp_Interpreter_Tree_Expressions_DynamicExprExpression_o* __this, MoonSharp_Interpreter_Tree_Expression_o* exp, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Tree_Expressions_DynamicExprExpression__Eval (MoonSharp_Interpreter_Tree_Expressions_DynamicExprExpression_o* __this, MoonSharp_Interpreter_ScriptExecutionContext_o* context, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Expressions_DynamicExprExpression__Compile (MoonSharp_Interpreter_Tree_Expressions_DynamicExprExpression_o* __this, MoonSharp_Interpreter_Execution_VM_ByteCode_o* bc, const MethodInfo* method);
MoonSharp_Interpreter_SymbolRef_o* MoonSharp_Interpreter_Tree_Expressions_DynamicExprExpression__FindDynamic (MoonSharp_Interpreter_Tree_Expressions_DynamicExprExpression_o* __this, MoonSharp_Interpreter_ScriptExecutionContext_o* context, const MethodInfo* method);