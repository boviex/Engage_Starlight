#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_Tree_Lexer___ctor (MoonSharp_Interpreter_Tree_Lexer_o* __this, int32_t sourceID, System_String_o* scriptContent, bool autoSkipComments, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__get_Current (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__FetchNewToken (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Lexer__Next (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__PeekNext (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Lexer__CursorNext (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
uint16_t MoonSharp_Interpreter_Tree_Lexer__CursorChar (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
uint16_t MoonSharp_Interpreter_Tree_Lexer__CursorCharNext (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_Tree_Lexer__CursorMatches (MoonSharp_Interpreter_Tree_Lexer_o* __this, System_String_o* pattern, const MethodInfo* method);
bool MoonSharp_Interpreter_Tree_Lexer__CursorNotEof (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_Tree_Lexer__IsWhiteSpace (MoonSharp_Interpreter_Tree_Lexer_o* __this, uint16_t c, const MethodInfo* method);
void MoonSharp_Interpreter_Tree_Lexer__SkipWhiteSpace (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__ReadToken (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Tree_Lexer__ReadLongString (MoonSharp_Interpreter_Tree_Lexer_o* __this, int32_t fromLine, int32_t fromCol, System_String_o* startpattern, System_String_o* subtypeforerrors, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__ReadNumberToken (MoonSharp_Interpreter_Tree_Lexer_o* __this, int32_t fromLine, int32_t fromCol, bool leadingDot, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__CreateSingleCharToken (MoonSharp_Interpreter_Tree_Lexer_o* __this, int32_t tokenType, int32_t fromLine, int32_t fromCol, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__ReadHashBang (MoonSharp_Interpreter_Tree_Lexer_o* __this, int32_t fromLine, int32_t fromCol, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__ReadComment (MoonSharp_Interpreter_Tree_Lexer_o* __this, int32_t fromLine, int32_t fromCol, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__ReadSimpleStringToken (MoonSharp_Interpreter_Tree_Lexer_o* __this, int32_t fromLine, int32_t fromCol, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__PotentiallyDoubleCharOperator (MoonSharp_Interpreter_Tree_Lexer_o* __this, uint16_t expectedSecondChar, int32_t singleCharToken, int32_t doubleCharToken, int32_t fromLine, int32_t fromCol, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__CreateNameToken (MoonSharp_Interpreter_Tree_Lexer_o* __this, System_String_o* name, int32_t fromLine, int32_t fromCol, const MethodInfo* method);
MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_Tree_Lexer__CreateToken (MoonSharp_Interpreter_Tree_Lexer_o* __this, int32_t tokenType, int32_t fromLine, int32_t fromCol, System_String_o* text, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Tree_Lexer__ReadNameToken (MoonSharp_Interpreter_Tree_Lexer_o* __this, const MethodInfo* method);
