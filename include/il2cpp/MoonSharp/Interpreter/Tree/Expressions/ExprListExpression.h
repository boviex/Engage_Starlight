#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_Tree_Expressions_ExprListExpression___ctor (MoonSharp_Interpreter_Tree_Expressions_ExprListExpression_o* __this, System_Collections_Generic_List_Expression__o* exps, MoonSharp_Interpreter_Execution_ScriptLoadingContext_o* lcontext, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Expression_array* MoonSharp_Interpreter_Tree_Expressions_ExprListExpression__GetExpressions (MoonSharp_Interpreter_Tree_Expressions_ExprListExpression_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Expressions_ExprListExpression__Compile (MoonSharp_Interpreter_Tree_Expressions_ExprListExpression_o* __this, MoonSharp_Interpreter_Execution_VM_ByteCode_o* bc, const MethodInfo* method);
MoonSharp_Interpreter_DynValue_o* MoonSharp_Interpreter_Tree_Expressions_ExprListExpression__Eval (MoonSharp_Interpreter_Tree_Expressions_ExprListExpression_o* __this, MoonSharp_Interpreter_ScriptExecutionContext_o* context, const MethodInfo* method);
