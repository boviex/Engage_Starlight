#pragma once

#include "il2cpp.h"

System_Text_RegularExpressions_RegexCode_o* System_Text_RegularExpressions_RegexWriter__Write (System_Text_RegularExpressions_RegexTree_o* t, const MethodInfo* method);
void System_Text_RegularExpressions_RegexWriter___ctor (System_Text_RegularExpressions_RegexWriter_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_RegexWriter__PushInt (System_Text_RegularExpressions_RegexWriter_o* __this, int32_t I, const MethodInfo* method);
bool System_Text_RegularExpressions_RegexWriter__EmptyStack (System_Text_RegularExpressions_RegexWriter_o* __this, const MethodInfo* method);
int32_t System_Text_RegularExpressions_RegexWriter__PopInt (System_Text_RegularExpressions_RegexWriter_o* __this, const MethodInfo* method);
int32_t System_Text_RegularExpressions_RegexWriter__CurPos (System_Text_RegularExpressions_RegexWriter_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_RegexWriter__PatchJump (System_Text_RegularExpressions_RegexWriter_o* __this, int32_t Offset, int32_t jumpDest, const MethodInfo* method);
void System_Text_RegularExpressions_RegexWriter__Emit (System_Text_RegularExpressions_RegexWriter_o* __this, int32_t op, const MethodInfo* method);
void System_Text_RegularExpressions_RegexWriter__Emit (System_Text_RegularExpressions_RegexWriter_o* __this, int32_t op, int32_t opd1, const MethodInfo* method);
void System_Text_RegularExpressions_RegexWriter__Emit (System_Text_RegularExpressions_RegexWriter_o* __this, int32_t op, int32_t opd1, int32_t opd2, const MethodInfo* method);
int32_t System_Text_RegularExpressions_RegexWriter__StringCode (System_Text_RegularExpressions_RegexWriter_o* __this, System_String_o* str, const MethodInfo* method);
System_ArgumentException_o* System_Text_RegularExpressions_RegexWriter__MakeException (System_Text_RegularExpressions_RegexWriter_o* __this, System_String_o* message, const MethodInfo* method);
int32_t System_Text_RegularExpressions_RegexWriter__MapCapnum (System_Text_RegularExpressions_RegexWriter_o* __this, int32_t capnum, const MethodInfo* method);
System_Text_RegularExpressions_RegexCode_o* System_Text_RegularExpressions_RegexWriter__RegexCodeFromRegexTree (System_Text_RegularExpressions_RegexWriter_o* __this, System_Text_RegularExpressions_RegexTree_o* tree, const MethodInfo* method);
void System_Text_RegularExpressions_RegexWriter__EmitFragment (System_Text_RegularExpressions_RegexWriter_o* __this, int32_t nodetype, System_Text_RegularExpressions_RegexNode_o* node, int32_t CurIndex, const MethodInfo* method);
