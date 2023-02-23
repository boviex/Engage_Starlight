#pragma once

#include "il2cpp.h"

System_String_o* MoonSharp_Interpreter_Serialization_SerializationExtensions__Serialize (MoonSharp_Interpreter_Table_o* table, bool prefixReturn, int32_t tabs, const MethodInfo* method);
bool MoonSharp_Interpreter_Serialization_SerializationExtensions__IsStringIdentifierValid (MoonSharp_Interpreter_DynValue_o* dynValue, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Serialization_SerializationExtensions__SerializeValue (MoonSharp_Interpreter_DynValue_o* dynValue, int32_t tabs, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Serialization_SerializationExtensions__EscapeString (System_String_o* s, const MethodInfo* method);
void MoonSharp_Interpreter_Serialization_SerializationExtensions___cctor (const MethodInfo* method);
