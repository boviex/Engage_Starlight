#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_ScriptRuntimeException___ctor (MoonSharp_Interpreter_ScriptRuntimeException_o* __this, System_Exception_o* ex, const MethodInfo* method);
void MoonSharp_Interpreter_ScriptRuntimeException___ctor (MoonSharp_Interpreter_ScriptRuntimeException_o* __this, MoonSharp_Interpreter_ScriptRuntimeException_o* ex, const MethodInfo* method);
void MoonSharp_Interpreter_ScriptRuntimeException___ctor (MoonSharp_Interpreter_ScriptRuntimeException_o* __this, System_String_o* message, const MethodInfo* method);
void MoonSharp_Interpreter_ScriptRuntimeException___ctor (MoonSharp_Interpreter_ScriptRuntimeException_o* __this, System_String_o* format, System_Object_array* args, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__ArithmeticOnNonNumber (MoonSharp_Interpreter_DynValue_o* l, MoonSharp_Interpreter_DynValue_o* r, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__ConcatOnNonString (MoonSharp_Interpreter_DynValue_o* l, MoonSharp_Interpreter_DynValue_o* r, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__LenOnInvalidType (MoonSharp_Interpreter_DynValue_o* r, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__CompareInvalidType (MoonSharp_Interpreter_DynValue_o* l, MoonSharp_Interpreter_DynValue_o* r, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__BadArgument (int32_t argNum, System_String_o* funcName, System_String_o* message, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__BadArgumentUserData (int32_t argNum, System_String_o* funcName, System_Type_o* expected, Il2CppObject* got, bool allowNil, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__BadArgument (int32_t argNum, System_String_o* funcName, int32_t expected, int32_t got, bool allowNil, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__BadArgument (int32_t argNum, System_String_o* funcName, System_String_o* expected, System_String_o* got, bool allowNil, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__BadArgumentNoValue (int32_t argNum, System_String_o* funcName, int32_t expected, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__BadArgumentIndexOutOfRange (System_String_o* funcName, int32_t argNum, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__BadArgumentNoNegativeNumbers (int32_t argNum, System_String_o* funcName, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__BadArgumentValueExpected (int32_t argNum, System_String_o* funcName, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__IndexType (MoonSharp_Interpreter_DynValue_o* obj, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__LoopInIndex (const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__LoopInNewIndex (const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__LoopInCall (const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__TableIndexIsNil (const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__TableIndexIsNaN (const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__ConvertToNumberFailed (int32_t stage, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__ConvertObjectFailed (Il2CppObject* obj, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__ConvertObjectFailed (int32_t t, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__ConvertObjectFailed (int32_t t, System_Type_o* t2, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__UserDataArgumentTypeMismatch (int32_t t, System_Type_o* clrType, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__UserDataMissingField (System_String_o* typename, System_String_o* fieldname, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__CannotResumeNotSuspended (int32_t state, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__CannotYield (const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__CannotYieldMain (const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__AttemptToCallNonFunc (int32_t type, System_String_o* debugText, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__AccessInstanceMemberOnStatics (MoonSharp_Interpreter_Interop_BasicDescriptors_IMemberDescriptor_o* desc, const MethodInfo* method);
MoonSharp_Interpreter_ScriptRuntimeException_o* MoonSharp_Interpreter_ScriptRuntimeException__AccessInstanceMemberOnStatics (MoonSharp_Interpreter_Interop_IUserDataDescriptor_o* typeDescr, MoonSharp_Interpreter_Interop_BasicDescriptors_IMemberDescriptor_o* desc, const MethodInfo* method);
void MoonSharp_Interpreter_ScriptRuntimeException__Rethrow (MoonSharp_Interpreter_ScriptRuntimeException_o* __this, const MethodInfo* method);