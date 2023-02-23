#pragma once

#include "il2cpp.h"

System_String_o* MoonSharp_Interpreter_Tree_Token__get_Text (MoonSharp_Interpreter_Tree_Token_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Token__set_Text (MoonSharp_Interpreter_Tree_Token_o* __this, System_String_o* value, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Token___ctor (MoonSharp_Interpreter_Tree_Token_o* __this, int32_t type, int32_t sourceId, int32_t fromLine, int32_t fromCol, int32_t toLine, int32_t toCol, int32_t prevLine, int32_t prevCol, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Tree_Token__ToString (MoonSharp_Interpreter_Tree_Token_o* __this, const MethodInfo* method);
System_Nullable_TokenType__o MoonSharp_Interpreter_Tree_Token__GetReservedTokenType (System_String_o* reservedWord, const MethodInfo* method);
double MoonSharp_Interpreter_Tree_Token__GetNumberValue (MoonSharp_Interpreter_Tree_Token_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_Tree_Token__IsEndOfBlock (MoonSharp_Interpreter_Tree_Token_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_Tree_Token__IsUnaryOperator (MoonSharp_Interpreter_Tree_Token_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_Tree_Token__IsBinaryOperator (MoonSharp_Interpreter_Tree_Token_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_Debugging_SourceRef_o* MoonSharp_Interpreter_Tree_Token__GetSourceRef (MoonSharp_Interpreter_Tree_Token_o* __this, bool isStepStop, const MethodInfo* method);
MoonSharp_Interpreter_Debugging_SourceRef_o* MoonSharp_Interpreter_Tree_Token__GetSourceRef (MoonSharp_Interpreter_Tree_Token_o* __this, MoonSharp_Interpreter_Tree_Token_o* to, bool isStepStop, const MethodInfo* method);
MoonSharp_Interpreter_Debugging_SourceRef_o* MoonSharp_Interpreter_Tree_Token__GetSourceRefUpTo (MoonSharp_Interpreter_Tree_Token_o* __this, MoonSharp_Interpreter_Tree_Token_o* to, bool isStepStop, const MethodInfo* method);
