#pragma once

#include "il2cpp.h"

System_Xml_Schema_XmlSchemaSimpleType_o* System_Xml_Schema_XmlSchemaType__GetBuiltInSimpleType (int32_t typeCode, const MethodInfo* method);
System_Xml_Schema_XmlSchemaComplexType_o* System_Xml_Schema_XmlSchemaType__GetBuiltInComplexType (System_Xml_XmlQualifiedName_o* qualifiedName, const MethodInfo* method);
System_String_o* System_Xml_Schema_XmlSchemaType__get_Name (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__set_Name (System_Xml_Schema_XmlSchemaType_o* __this, System_String_o* value, const MethodInfo* method);
int32_t System_Xml_Schema_XmlSchemaType__get_Final (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__set_Final (System_Xml_Schema_XmlSchemaType_o* __this, int32_t value, const MethodInfo* method);
System_Xml_XmlQualifiedName_o* System_Xml_Schema_XmlSchemaType__get_QualifiedName (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
int32_t System_Xml_Schema_XmlSchemaType__get_FinalResolved (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlSchemaType_o* System_Xml_Schema_XmlSchemaType__get_BaseXmlSchemaType (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
int32_t System_Xml_Schema_XmlSchemaType__get_DerivedBy (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlSchemaDatatype_o* System_Xml_Schema_XmlSchemaType__get_Datatype (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
bool System_Xml_Schema_XmlSchemaType__get_IsMixed (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__set_IsMixed (System_Xml_Schema_XmlSchemaType_o* __this, bool value, const MethodInfo* method);
int32_t System_Xml_Schema_XmlSchemaType__get_TypeCode (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlValueConverter_o* System_Xml_Schema_XmlSchemaType__get_ValueConverter (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
int32_t System_Xml_Schema_XmlSchemaType__get_SchemaContentType (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__SetQualifiedName (System_Xml_Schema_XmlSchemaType_o* __this, System_Xml_XmlQualifiedName_o* value, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__SetFinalResolved (System_Xml_Schema_XmlSchemaType_o* __this, int32_t value, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__SetBaseSchemaType (System_Xml_Schema_XmlSchemaType_o* __this, System_Xml_Schema_XmlSchemaType_o* value, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__SetDerivedBy (System_Xml_Schema_XmlSchemaType_o* __this, int32_t value, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__SetDatatype (System_Xml_Schema_XmlSchemaType_o* __this, System_Xml_Schema_XmlSchemaDatatype_o* value, const MethodInfo* method);
System_Xml_Schema_SchemaElementDecl_o* System_Xml_Schema_XmlSchemaType__get_ElementDecl (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__set_ElementDecl (System_Xml_Schema_XmlSchemaType_o* __this, System_Xml_Schema_SchemaElementDecl_o* value, const MethodInfo* method);
System_Xml_Schema_XmlSchemaType_o* System_Xml_Schema_XmlSchemaType__get_Redefined (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__set_Redefined (System_Xml_Schema_XmlSchemaType_o* __this, System_Xml_Schema_XmlSchemaType_o* value, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__SetContentType (System_Xml_Schema_XmlSchemaType_o* __this, int32_t value, const MethodInfo* method);
bool System_Xml_Schema_XmlSchemaType__IsDerivedFrom (System_Xml_Schema_XmlSchemaType_o* derivedType, System_Xml_Schema_XmlSchemaType_o* baseType, int32_t except, const MethodInfo* method);
bool System_Xml_Schema_XmlSchemaType__IsDerivedFromDatatype (System_Xml_Schema_XmlSchemaDatatype_o* derivedDataType, System_Xml_Schema_XmlSchemaDatatype_o* baseDataType, int32_t except, const MethodInfo* method);
System_String_o* System_Xml_Schema_XmlSchemaType__get_NameAttribute (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType__set_NameAttribute (System_Xml_Schema_XmlSchemaType_o* __this, System_String_o* value, const MethodInfo* method);
void System_Xml_Schema_XmlSchemaType___ctor (System_Xml_Schema_XmlSchemaType_o* __this, const MethodInfo* method);
