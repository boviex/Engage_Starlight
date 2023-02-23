#pragma once

#include "il2cpp.h"

int32_t MoonSharp_Interpreter_SymbolRef__get_Type (MoonSharp_Interpreter_SymbolRef_o* __this, const MethodInfo* method);
int32_t MoonSharp_Interpreter_SymbolRef__get_Index (MoonSharp_Interpreter_SymbolRef_o* __this, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_SymbolRef__get_Name (MoonSharp_Interpreter_SymbolRef_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_SymbolRef_o* MoonSharp_Interpreter_SymbolRef__get_Environment (MoonSharp_Interpreter_SymbolRef_o* __this, const MethodInfo* method);
MoonSharp_Interpreter_SymbolRef_o* MoonSharp_Interpreter_SymbolRef__get_DefaultEnv (const MethodInfo* method);
MoonSharp_Interpreter_SymbolRef_o* MoonSharp_Interpreter_SymbolRef__Global (System_String_o* name, MoonSharp_Interpreter_SymbolRef_o* envSymbol, const MethodInfo* method);
MoonSharp_Interpreter_SymbolRef_o* MoonSharp_Interpreter_SymbolRef__Local (System_String_o* name, int32_t index, const MethodInfo* method);
MoonSharp_Interpreter_SymbolRef_o* MoonSharp_Interpreter_SymbolRef__Upvalue (System_String_o* name, int32_t index, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_SymbolRef__ToString (MoonSharp_Interpreter_SymbolRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_SymbolRef__WriteBinary (MoonSharp_Interpreter_SymbolRef_o* __this, System_IO_BinaryWriter_o* bw, const MethodInfo* method);
MoonSharp_Interpreter_SymbolRef_o* MoonSharp_Interpreter_SymbolRef__ReadBinary (System_IO_BinaryReader_o* br, const MethodInfo* method);
void MoonSharp_Interpreter_SymbolRef__WriteBinaryEnv (MoonSharp_Interpreter_SymbolRef_o* __this, System_IO_BinaryWriter_o* bw, System_Collections_Generic_Dictionary_SymbolRef__int__o* symbolMap, const MethodInfo* method);
void MoonSharp_Interpreter_SymbolRef__ReadBinaryEnv (MoonSharp_Interpreter_SymbolRef_o* __this, System_IO_BinaryReader_o* br, MoonSharp_Interpreter_SymbolRef_array* symbolRefs, const MethodInfo* method);
void MoonSharp_Interpreter_SymbolRef___ctor (MoonSharp_Interpreter_SymbolRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_SymbolRef___cctor (const MethodInfo* method);
