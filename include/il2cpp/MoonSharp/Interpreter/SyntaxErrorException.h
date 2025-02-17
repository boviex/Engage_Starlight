#pragma once

#include "il2cpp.h"

MoonSharp_Interpreter_Tree_Token_o* MoonSharp_Interpreter_SyntaxErrorException__get_Token (MoonSharp_Interpreter_SyntaxErrorException_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_SyntaxErrorException__set_Token (MoonSharp_Interpreter_SyntaxErrorException_o* __this, MoonSharp_Interpreter_Tree_Token_o* value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_SyntaxErrorException__get_ToLine (MoonSharp_Interpreter_SyntaxErrorException_o* __this, const MethodInfo* method);
int32_t MoonSharp_Interpreter_SyntaxErrorException__get_FromLine (MoonSharp_Interpreter_SyntaxErrorException_o* __this, const MethodInfo* method);
bool MoonSharp_Interpreter_SyntaxErrorException__get_IsPrematureStreamTermination (MoonSharp_Interpreter_SyntaxErrorException_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_SyntaxErrorException__set_IsPrematureStreamTermination (MoonSharp_Interpreter_SyntaxErrorException_o* __this, bool value, const MethodInfo* method);
void MoonSharp_Interpreter_SyntaxErrorException___ctor (MoonSharp_Interpreter_SyntaxErrorException_o* __this, MoonSharp_Interpreter_Tree_Token_o* t, System_String_o* format, System_Object_array* args, const MethodInfo* method);
void MoonSharp_Interpreter_SyntaxErrorException___ctor (MoonSharp_Interpreter_SyntaxErrorException_o* __this, MoonSharp_Interpreter_Tree_Token_o* t, System_String_o* message, const MethodInfo* method);
void MoonSharp_Interpreter_SyntaxErrorException___ctor (MoonSharp_Interpreter_SyntaxErrorException_o* __this, MoonSharp_Interpreter_Script_o* script, MoonSharp_Interpreter_Debugging_SourceRef_o* sref, System_String_o* format, System_Object_array* args, const MethodInfo* method);
void MoonSharp_Interpreter_SyntaxErrorException___ctor (MoonSharp_Interpreter_SyntaxErrorException_o* __this, MoonSharp_Interpreter_Script_o* script, MoonSharp_Interpreter_Debugging_SourceRef_o* sref, System_String_o* message, const MethodInfo* method);
void MoonSharp_Interpreter_SyntaxErrorException___ctor (MoonSharp_Interpreter_SyntaxErrorException_o* __this, MoonSharp_Interpreter_SyntaxErrorException_o* syntaxErrorException, const MethodInfo* method);
void MoonSharp_Interpreter_SyntaxErrorException__DecorateMessage (MoonSharp_Interpreter_SyntaxErrorException_o* __this, MoonSharp_Interpreter_Script_o* script, const MethodInfo* method);
void MoonSharp_Interpreter_SyntaxErrorException__Rethrow (MoonSharp_Interpreter_SyntaxErrorException_o* __this, const MethodInfo* method);
