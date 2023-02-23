#pragma once

#include "il2cpp.h"

void System_Xml_Schema_XsdValidator___ctor (System_Xml_Schema_XsdValidator_o* __this, System_Xml_Schema_BaseValidator_o* validator, const MethodInfo* method);
void System_Xml_Schema_XsdValidator___ctor (System_Xml_Schema_XsdValidator_o* __this, System_Xml_XmlValidatingReaderImpl_o* reader, System_Xml_Schema_XmlSchemaCollection_o* schemaCollection, System_Xml_IValidationEventHandling_o* eventHandling, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__Init (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__Validate (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__CompleteValidation (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_XsdValidator__get_IsInlineSchemaStarted (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ProcessInlineSchema (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ValidateElement (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_XsdValidator__ValidateChildElement (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ProcessElement (System_Xml_Schema_XsdValidator_o* __this, Il2CppObject* particle, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ProcessXsiAttributes (System_Xml_Schema_XsdValidator_o* __this, System_Xml_XmlQualifiedName_o** xsiType, System_String_o** xsiNil, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ValidateEndElement (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
System_Xml_Schema_SchemaElementDecl_o* System_Xml_Schema_XsdValidator__FastGetElementDecl (System_Xml_Schema_XsdValidator_o* __this, Il2CppObject* particle, const MethodInfo* method);
System_Xml_Schema_SchemaElementDecl_o* System_Xml_Schema_XsdValidator__ThoroughGetElementDecl (System_Xml_Schema_XsdValidator_o* __this, System_Xml_Schema_SchemaElementDecl_o* elementDecl, System_Xml_XmlQualifiedName_o* xsiType, System_String_o* xsiNil, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ValidateStartElement (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ValidateEndStartElement (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__LoadSchemaFromLocation (System_Xml_Schema_XsdValidator_o* __this, System_String_o* uri, System_String_o* url, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__LoadSchema (System_Xml_Schema_XsdValidator_o* __this, System_String_o* uri, System_String_o* url, const MethodInfo* method);
bool System_Xml_Schema_XsdValidator__get_HasSchema (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_XsdValidator__get_PreserveWhitespace (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ProcessTokenizedType (System_Xml_Schema_XsdValidator_o* __this, int32_t ttype, System_String_o* name, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__CheckValue (System_Xml_Schema_XsdValidator_o* __this, System_String_o* value, System_Xml_Schema_SchemaAttDef_o* attdef, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__AddID (System_Xml_Schema_XsdValidator_o* __this, System_String_o* name, Il2CppObject* node, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_XsdValidator__FindId (System_Xml_Schema_XsdValidator_o* __this, System_String_o* name, const MethodInfo* method);
bool System_Xml_Schema_XsdValidator__IsXSDRoot (System_Xml_Schema_XsdValidator_o* __this, System_String_o* localName, System_String_o* ns, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__Push (System_Xml_Schema_XsdValidator_o* __this, System_Xml_XmlQualifiedName_o* elementName, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__Pop (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__CheckForwardRefs (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ValidateStartElementIdentityConstraints (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_XsdValidator__get_HasIdentityConstraints (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__AddIdentityConstraints (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__ElementIdentityConstraints (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__AttributeIdentityConstraints (System_Xml_Schema_XsdValidator_o* __this, System_String_o* name, System_String_o* ns, Il2CppObject* obj, System_String_o* sobj, System_Xml_Schema_SchemaAttDef_o* attdef, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_XsdValidator__UnWrapUnion (System_Xml_Schema_XsdValidator_o* __this, Il2CppObject* typedValue, const MethodInfo* method);
void System_Xml_Schema_XsdValidator__EndElementIdentityConstraints (System_Xml_Schema_XsdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XsdValidator___cctor (const MethodInfo* method);
