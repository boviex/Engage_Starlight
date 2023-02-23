#pragma once

#include "il2cpp.h"

void UnityEngine_Hash128___ctor (UnityEngine_Hash128_o __this, uint32_t u32_0, uint32_t u32_1, uint32_t u32_2, uint32_t u32_3, const MethodInfo* method);
void UnityEngine_Hash128___ctor (UnityEngine_Hash128_o __this, uint64_t u64_0, uint64_t u64_1, const MethodInfo* method);
uint64_t UnityEngine_Hash128__get_u64_0 (UnityEngine_Hash128_o __this, const MethodInfo* method);
uint64_t UnityEngine_Hash128__get_u64_1 (UnityEngine_Hash128_o __this, const MethodInfo* method);
int32_t UnityEngine_Hash128__CompareTo (UnityEngine_Hash128_o __this, UnityEngine_Hash128_o rhs, const MethodInfo* method);
System_String_o* UnityEngine_Hash128__ToString (UnityEngine_Hash128_o __this, const MethodInfo* method);
UnityEngine_Hash128_o UnityEngine_Hash128__Parse (System_String_o* hashString, const MethodInfo* method);
System_String_o* UnityEngine_Hash128__Hash128ToStringImpl (UnityEngine_Hash128_o hash, const MethodInfo* method);
void UnityEngine_Hash128__ComputeFromString (System_String_o* data, UnityEngine_Hash128_o* hash, const MethodInfo* method);
UnityEngine_Hash128_o UnityEngine_Hash128__Compute (System_String_o* data, const MethodInfo* method);
bool UnityEngine_Hash128__Equals (UnityEngine_Hash128_o __this, Il2CppObject* obj, const MethodInfo* method);
bool UnityEngine_Hash128__Equals (UnityEngine_Hash128_o __this, UnityEngine_Hash128_o obj, const MethodInfo* method);
int32_t UnityEngine_Hash128__GetHashCode (UnityEngine_Hash128_o __this, const MethodInfo* method);
int32_t UnityEngine_Hash128__CompareTo (UnityEngine_Hash128_o __this, Il2CppObject* obj, const MethodInfo* method);
bool UnityEngine_Hash128__op_Equality (UnityEngine_Hash128_o hash1, UnityEngine_Hash128_o hash2, const MethodInfo* method);
bool UnityEngine_Hash128__op_LessThan (UnityEngine_Hash128_o x, UnityEngine_Hash128_o y, const MethodInfo* method);
bool UnityEngine_Hash128__op_GreaterThan (UnityEngine_Hash128_o x, UnityEngine_Hash128_o y, const MethodInfo* method);
void UnityEngine_Hash128__Parse_Injected (System_String_o* hashString, UnityEngine_Hash128_o* ret, const MethodInfo* method);
System_String_o* UnityEngine_Hash128__Hash128ToStringImpl_Injected (UnityEngine_Hash128_o* hash, const MethodInfo* method);
