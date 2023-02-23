#pragma once

#include "il2cpp.h"

System_Xml_XmlName_o* System_Xml_XmlName__Create (System_String_o* prefix, System_String_o* localName, System_String_o* ns, int32_t hashCode, System_Xml_XmlDocument_o* ownerDoc, System_Xml_XmlName_o* next, System_Xml_Schema_IXmlSchemaInfo_o* schemaInfo, const MethodInfo* method);
void System_Xml_XmlName___ctor (System_Xml_XmlName_o* __this, System_String_o* prefix, System_String_o* localName, System_String_o* ns, int32_t hashCode, System_Xml_XmlDocument_o* ownerDoc, System_Xml_XmlName_o* next, const MethodInfo* method);
System_String_o* System_Xml_XmlName__get_LocalName (System_Xml_XmlName_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlName__get_NamespaceURI (System_Xml_XmlName_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlName__get_Prefix (System_Xml_XmlName_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlName__get_HashCode (System_Xml_XmlName_o* __this, const MethodInfo* method);
System_Xml_XmlDocument_o* System_Xml_XmlName__get_OwnerDocument (System_Xml_XmlName_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlName__get_Name (System_Xml_XmlName_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlName__get_Validity (System_Xml_XmlName_o* __this, const MethodInfo* method);
bool System_Xml_XmlName__get_IsDefault (System_Xml_XmlName_o* __this, const MethodInfo* method);
bool System_Xml_XmlName__get_IsNil (System_Xml_XmlName_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlSchemaSimpleType_o* System_Xml_XmlName__get_MemberType (System_Xml_XmlName_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlSchemaType_o* System_Xml_XmlName__get_SchemaType (System_Xml_XmlName_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlSchemaElement_o* System_Xml_XmlName__get_SchemaElement (System_Xml_XmlName_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlSchemaAttribute_o* System_Xml_XmlName__get_SchemaAttribute (System_Xml_XmlName_o* __this, const MethodInfo* method);
bool System_Xml_XmlName__Equals (System_Xml_XmlName_o* __this, System_Xml_Schema_IXmlSchemaInfo_o* schemaInfo, const MethodInfo* method);
int32_t System_Xml_XmlName__GetHashCode (System_String_o* name, const MethodInfo* method);
