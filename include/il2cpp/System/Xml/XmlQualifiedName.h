#pragma once

#include "il2cpp.h"

void System_Xml_XmlQualifiedName___ctor (System_Xml_XmlQualifiedName_o* __this, const MethodInfo* method);
void System_Xml_XmlQualifiedName___ctor (System_Xml_XmlQualifiedName_o* __this, System_String_o* name, const MethodInfo* method);
void System_Xml_XmlQualifiedName___ctor (System_Xml_XmlQualifiedName_o* __this, System_String_o* name, System_String_o* ns, const MethodInfo* method);
System_String_o* System_Xml_XmlQualifiedName__get_Namespace (System_Xml_XmlQualifiedName_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlQualifiedName__get_Name (System_Xml_XmlQualifiedName_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlQualifiedName__GetHashCode (System_Xml_XmlQualifiedName_o* __this, const MethodInfo* method);
bool System_Xml_XmlQualifiedName__get_IsEmpty (System_Xml_XmlQualifiedName_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlQualifiedName__ToString (System_Xml_XmlQualifiedName_o* __this, const MethodInfo* method);
bool System_Xml_XmlQualifiedName__Equals (System_Xml_XmlQualifiedName_o* __this, Il2CppObject* other, const MethodInfo* method);
bool System_Xml_XmlQualifiedName__op_Equality (System_Xml_XmlQualifiedName_o* a, System_Xml_XmlQualifiedName_o* b, const MethodInfo* method);
bool System_Xml_XmlQualifiedName__op_Inequality (System_Xml_XmlQualifiedName_o* a, System_Xml_XmlQualifiedName_o* b, const MethodInfo* method);
System_String_o* System_Xml_XmlQualifiedName__ToString (System_String_o* name, System_String_o* ns, const MethodInfo* method);
System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_o* System_Xml_XmlQualifiedName__GetHashCodeDelegate (const MethodInfo* method);
bool System_Xml_XmlQualifiedName__IsRandomizedHashingDisabled (const MethodInfo* method);
int32_t System_Xml_XmlQualifiedName__GetHashCodeOfString (System_String_o* s, int32_t length, int64_t additionalEntropy, const MethodInfo* method);
void System_Xml_XmlQualifiedName__Init (System_Xml_XmlQualifiedName_o* __this, System_String_o* name, System_String_o* ns, const MethodInfo* method);
void System_Xml_XmlQualifiedName__SetNamespace (System_Xml_XmlQualifiedName_o* __this, System_String_o* ns, const MethodInfo* method);
void System_Xml_XmlQualifiedName__Verify (System_Xml_XmlQualifiedName_o* __this, const MethodInfo* method);
void System_Xml_XmlQualifiedName__Atomize (System_Xml_XmlQualifiedName_o* __this, System_Xml_XmlNameTable_o* nameTable, const MethodInfo* method);
System_Xml_XmlQualifiedName_o* System_Xml_XmlQualifiedName__Parse (System_String_o* s, System_Xml_IXmlNamespaceResolver_o* nsmgr, System_String_o** prefix, const MethodInfo* method);
System_Xml_XmlQualifiedName_o* System_Xml_XmlQualifiedName__Clone (System_Xml_XmlQualifiedName_o* __this, const MethodInfo* method);
void System_Xml_XmlQualifiedName___cctor (const MethodInfo* method);
