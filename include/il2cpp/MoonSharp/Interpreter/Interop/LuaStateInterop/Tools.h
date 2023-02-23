#pragma once

#include "il2cpp.h"

bool MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__IsNumericType (Il2CppObject* o, const MethodInfo* method);
bool MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__IsPositive (Il2CppObject* Value, bool ZeroIsPositive, const MethodInfo* method);
Il2CppObject* MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__ToUnsigned (Il2CppObject* Value, const MethodInfo* method);
Il2CppObject* MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__ToInteger (Il2CppObject* Value, bool Round, const MethodInfo* method);
int64_t MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__UnboxToLong (Il2CppObject* Value, bool Round, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__ReplaceMetaChars (System_String_o* input, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__ReplaceMetaCharsMatch (System_Text_RegularExpressions_Match_o* m, const MethodInfo* method);
void MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__fprintf (System_IO_TextWriter_o* Destination, System_String_o* Format, System_Object_array* Parameters, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__sprintf (System_String_o* Format, System_Object_array* Parameters, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__FormatOct (System_String_o* NativeFormat, bool Alternate, int32_t FieldLength, int32_t FieldPrecision, bool Left2Right, uint16_t Padding, Il2CppObject* Value, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__FormatHex (System_String_o* NativeFormat, bool Alternate, int32_t FieldLength, int32_t FieldPrecision, bool Left2Right, uint16_t Padding, Il2CppObject* Value, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Interop_LuaStateInterop_Tools__FormatNumber (System_String_o* NativeFormat, bool Alternate, int32_t FieldLength, int32_t FieldPrecision, bool Left2Right, bool PositiveSign, bool PositiveSpace, uint16_t Padding, Il2CppObject* Value, const MethodInfo* method);
void MoonSharp_Interpreter_Interop_LuaStateInterop_Tools___cctor (const MethodInfo* method);
