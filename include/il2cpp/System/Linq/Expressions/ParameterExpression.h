#pragma once

#include "il2cpp.h"

void System_Linq_Expressions_ParameterExpression___ctor (System_Linq_Expressions_ParameterExpression_o* __this, System_String_o* name, const MethodInfo* method);
System_Linq_Expressions_ParameterExpression_o* System_Linq_Expressions_ParameterExpression__Make (System_Type_o* type, System_String_o* name, bool isByRef, const MethodInfo* method);
System_Type_o* System_Linq_Expressions_ParameterExpression__get_Type (System_Linq_Expressions_ParameterExpression_o* __this, const MethodInfo* method);
int32_t System_Linq_Expressions_ParameterExpression__get_NodeType (System_Linq_Expressions_ParameterExpression_o* __this, const MethodInfo* method);
System_String_o* System_Linq_Expressions_ParameterExpression__get_Name (System_Linq_Expressions_ParameterExpression_o* __this, const MethodInfo* method);
bool System_Linq_Expressions_ParameterExpression__get_IsByRef (System_Linq_Expressions_ParameterExpression_o* __this, const MethodInfo* method);
bool System_Linq_Expressions_ParameterExpression__GetIsByRef (System_Linq_Expressions_ParameterExpression_o* __this, const MethodInfo* method);
System_Linq_Expressions_Expression_o* System_Linq_Expressions_ParameterExpression__Accept (System_Linq_Expressions_ParameterExpression_o* __this, System_Linq_Expressions_ExpressionVisitor_o* visitor, const MethodInfo* method);