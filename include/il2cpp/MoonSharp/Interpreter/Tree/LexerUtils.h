#pragma once

#include "il2cpp.h"

double MoonSharp_Interpreter_Tree_LexerUtils__ParseNumber (MoonSharp_Interpreter_Tree_Token_o* T, const MethodInfo* method);
double MoonSharp_Interpreter_Tree_LexerUtils__ParseHexInteger (MoonSharp_Interpreter_Tree_Token_o* T, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Tree_LexerUtils__ReadHexProgressive (System_String_o* s, double* d, int32_t* digits, const MethodInfo* method);
double MoonSharp_Interpreter_Tree_LexerUtils__ParseHexFloat (MoonSharp_Interpreter_Tree_Token_o* T, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Tree_LexerUtils__HexDigit2Value (uint16_t c, const MethodInfo* method);
bool MoonSharp_Interpreter_Tree_LexerUtils__CharIsDigit (uint16_t c, const MethodInfo* method);
bool MoonSharp_Interpreter_Tree_LexerUtils__CharIsHexDigit (uint16_t c, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Tree_LexerUtils__AdjustLuaLongString (System_String_o* str, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Tree_LexerUtils__UnescapeLuaString (MoonSharp_Interpreter_Tree_Token_o* token, System_String_o* str, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Tree_LexerUtils__ConvertUtf32ToChar (int32_t i, const MethodInfo* method);
