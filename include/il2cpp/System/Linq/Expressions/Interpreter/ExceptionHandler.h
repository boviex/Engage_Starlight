#pragma once

#include "il2cpp.h"

void System_Linq_Expressions_Interpreter_ExceptionHandler___ctor (System_Linq_Expressions_Interpreter_ExceptionHandler_o* __this, int32_t labelIndex, int32_t handlerStartIndex, int32_t handlerEndIndex, System_Type_o* exceptionType, System_Linq_Expressions_Interpreter_ExceptionFilter_o* filter, const MethodInfo* method);
bool System_Linq_Expressions_Interpreter_ExceptionHandler__Matches (System_Linq_Expressions_Interpreter_ExceptionHandler_o* __this, System_Type_o* exceptionType, const MethodInfo* method);
System_String_o* System_Linq_Expressions_Interpreter_ExceptionHandler__ToString (System_Linq_Expressions_Interpreter_ExceptionHandler_o* __this, const MethodInfo* method);
