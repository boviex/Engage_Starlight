#pragma once

#include "il2cpp.h"

void System_Reflection_MethodInfo___ctor (System_Reflection_MethodInfo_o* __this, const MethodInfo* method);
bool System_Reflection_MethodInfo__op_Equality (System_Reflection_MethodInfo_o* left, System_Reflection_MethodInfo_o* right, const MethodInfo* method);
bool System_Reflection_MethodInfo__op_Inequality (System_Reflection_MethodInfo_o* left, System_Reflection_MethodInfo_o* right, const MethodInfo* method);
bool System_Reflection_MethodInfo__Equals (System_Reflection_MethodInfo_o* __this, Il2CppObject* obj, const MethodInfo* method);
int32_t System_Reflection_MethodInfo__GetHashCode (System_Reflection_MethodInfo_o* __this, const MethodInfo* method);
int32_t System_Reflection_MethodInfo__get_MemberType (System_Reflection_MethodInfo_o* __this, const MethodInfo* method);
System_Type_o* System_Reflection_MethodInfo__get_ReturnType (System_Reflection_MethodInfo_o* __this, const MethodInfo* method);
System_Type_array* System_Reflection_MethodInfo__GetGenericArguments (System_Reflection_MethodInfo_o* __this, const MethodInfo* method);
System_Reflection_MethodInfo_o* System_Reflection_MethodInfo__GetGenericMethodDefinition (System_Reflection_MethodInfo_o* __this, const MethodInfo* method);
System_Reflection_MethodInfo_o* System_Reflection_MethodInfo__MakeGenericMethod (System_Reflection_MethodInfo_o* __this, System_Type_array* typeArguments, const MethodInfo* method);
System_Delegate_o* System_Reflection_MethodInfo__CreateDelegate (System_Reflection_MethodInfo_o* __this, System_Type_o* delegateType, const MethodInfo* method);
System_Delegate_o* System_Reflection_MethodInfo__CreateDelegate (System_Reflection_MethodInfo_o* __this, System_Type_o* delegateType, Il2CppObject* target, const MethodInfo* method);
System_Reflection_MethodInfo_o* System_Reflection_MethodInfo__GetBaseMethod (System_Reflection_MethodInfo_o* __this, const MethodInfo* method);
