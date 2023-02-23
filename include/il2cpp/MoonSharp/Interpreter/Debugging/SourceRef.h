#pragma once

#include "il2cpp.h"

bool MoonSharp_Interpreter_Debugging_SourceRef__get_IsClrLocation (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef__set_IsClrLocation (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, bool value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Debugging_SourceRef__get_SourceIdx (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef__set_SourceIdx (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, int32_t value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Debugging_SourceRef__get_FromChar (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef__set_FromChar (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, int32_t value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Debugging_SourceRef__get_ToChar (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef__set_ToChar (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, int32_t value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Debugging_SourceRef__get_FromLine (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef__set_FromLine (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, int32_t value, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Debugging_SourceRef__get_ToLine (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef__set_ToLine (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, int32_t value, const MethodInfo* method);
bool MoonSharp_Interpreter_Debugging_SourceRef__get_IsStepStop (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef__set_IsStepStop (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, bool value, const MethodInfo* method);
bool MoonSharp_Interpreter_Debugging_SourceRef__get_CannotBreakpoint (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef__set_CannotBreakpoint (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, bool value, const MethodInfo* method);
MoonSharp_Interpreter_Debugging_SourceRef_o* MoonSharp_Interpreter_Debugging_SourceRef__GetClrLocation (const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef___ctor (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, MoonSharp_Interpreter_Debugging_SourceRef_o* src, bool isStepStop, const MethodInfo* method);
void MoonSharp_Interpreter_Debugging_SourceRef___ctor (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, int32_t sourceIdx, int32_t from, int32_t to, int32_t fromline, int32_t toline, bool isStepStop, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Debugging_SourceRef__ToString (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
int32_t MoonSharp_Interpreter_Debugging_SourceRef__GetLocationDistance (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, int32_t sourceIdx, int32_t line, int32_t col, const MethodInfo* method);
bool MoonSharp_Interpreter_Debugging_SourceRef__IncludesLocation (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, int32_t sourceIdx, int32_t line, int32_t col, const MethodInfo* method);
MoonSharp_Interpreter_Debugging_SourceRef_o* MoonSharp_Interpreter_Debugging_SourceRef__SetNoBreakPoint (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Debugging_SourceRef__FormatLocation (MoonSharp_Interpreter_Debugging_SourceRef_o* __this, MoonSharp_Interpreter_Script_o* script, bool forceClassicFormat, const MethodInfo* method);
