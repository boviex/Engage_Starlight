#pragma once

#include "il2cpp.h"

void System_Runtime_Serialization_SerializationInfo___ctor (System_Runtime_Serialization_SerializationInfo_o* __this, System_Type_o* type, System_Runtime_Serialization_IFormatterConverter_o* converter, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo___ctor (System_Runtime_Serialization_SerializationInfo_o* __this, System_Type_o* type, System_Runtime_Serialization_IFormatterConverter_o* converter, bool requireSameTokenInPartialTrust, const MethodInfo* method);
System_String_o* System_Runtime_Serialization_SerializationInfo__get_FullTypeName (System_Runtime_Serialization_SerializationInfo_o* __this, const MethodInfo* method);
System_String_o* System_Runtime_Serialization_SerializationInfo__get_AssemblyName (System_Runtime_Serialization_SerializationInfo_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__SetType (System_Runtime_Serialization_SerializationInfo_o* __this, System_Type_o* type, const MethodInfo* method);
bool System_Runtime_Serialization_SerializationInfo__Compare (System_Byte_array* a, System_Byte_array* b, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__DemandForUnsafeAssemblyNameAssignments (System_String_o* originalAssemblyName, System_String_o* newAssemblyName, const MethodInfo* method);
bool System_Runtime_Serialization_SerializationInfo__IsAssemblyNameAssignmentSafe (System_String_o* originalAssemblyName, System_String_o* newAssemblyName, const MethodInfo* method);
int32_t System_Runtime_Serialization_SerializationInfo__get_MemberCount (System_Runtime_Serialization_SerializationInfo_o* __this, const MethodInfo* method);
System_Type_o* System_Runtime_Serialization_SerializationInfo__get_ObjectType (System_Runtime_Serialization_SerializationInfo_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_SerializationInfo__get_IsFullTypeNameSetExplicit (System_Runtime_Serialization_SerializationInfo_o* __this, const MethodInfo* method);
bool System_Runtime_Serialization_SerializationInfo__get_IsAssemblyNameSetExplicit (System_Runtime_Serialization_SerializationInfo_o* __this, const MethodInfo* method);
System_Runtime_Serialization_SerializationInfoEnumerator_o* System_Runtime_Serialization_SerializationInfo__GetEnumerator (System_Runtime_Serialization_SerializationInfo_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__ExpandArrays (System_Runtime_Serialization_SerializationInfo_o* __this, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, Il2CppObject* value, System_Type_o* type, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, Il2CppObject* value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, bool value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, uint16_t value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, uint8_t value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, int16_t value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, int32_t value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, int64_t value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, uint64_t value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, float value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, System_DateTime_o value, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__AddValueInternal (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, Il2CppObject* value, System_Type_o* type, const MethodInfo* method);
void System_Runtime_Serialization_SerializationInfo__UpdateValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, Il2CppObject* value, System_Type_o* type, const MethodInfo* method);
int32_t System_Runtime_Serialization_SerializationInfo__FindElement (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, const MethodInfo* method);
Il2CppObject* System_Runtime_Serialization_SerializationInfo__GetElement (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, System_Type_o** foundType, const MethodInfo* method);
Il2CppObject* System_Runtime_Serialization_SerializationInfo__GetElementNoThrow (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, System_Type_o** foundType, const MethodInfo* method);
Il2CppObject* System_Runtime_Serialization_SerializationInfo__GetValue (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, System_Type_o* type, const MethodInfo* method);
Il2CppObject* System_Runtime_Serialization_SerializationInfo__GetValueNoThrow (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, System_Type_o* type, const MethodInfo* method);
bool System_Runtime_Serialization_SerializationInfo__GetBoolean (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, const MethodInfo* method);
int32_t System_Runtime_Serialization_SerializationInfo__GetInt32 (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, const MethodInfo* method);
int64_t System_Runtime_Serialization_SerializationInfo__GetInt64 (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, const MethodInfo* method);
float System_Runtime_Serialization_SerializationInfo__GetSingle (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, const MethodInfo* method);
System_String_o* System_Runtime_Serialization_SerializationInfo__GetString (System_Runtime_Serialization_SerializationInfo_o* __this, System_String_o* name, const MethodInfo* method);
