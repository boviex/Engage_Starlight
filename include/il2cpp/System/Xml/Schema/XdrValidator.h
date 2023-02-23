#pragma once

#include "il2cpp.h"

void System_Xml_Schema_XdrValidator___ctor (System_Xml_Schema_XdrValidator_o* __this, System_Xml_Schema_BaseValidator_o* validator, const MethodInfo* method);
void System_Xml_Schema_XdrValidator___ctor (System_Xml_Schema_XdrValidator_o* __this, System_Xml_XmlValidatingReaderImpl_o* reader, System_Xml_Schema_XmlSchemaCollection_o* schemaCollection, System_Xml_IValidationEventHandling_o* eventHandling, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__Init (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__Validate (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__ValidateElement (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__ValidateChildElement (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_XdrValidator__get_IsInlineSchemaStarted (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__ProcessInlineSchema (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__ProcessElement (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__ValidateEndElement (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
System_Xml_Schema_SchemaElementDecl_o* System_Xml_Schema_XdrValidator__ThoroughGetElementDecl (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__ValidateStartElement (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__ValidateEndStartElement (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__LoadSchemaFromLocation (System_Xml_Schema_XdrValidator_o* __this, System_String_o* uri, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__LoadSchema (System_Xml_Schema_XdrValidator_o* __this, System_String_o* uri, const MethodInfo* method);
bool System_Xml_Schema_XdrValidator__get_HasSchema (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_XdrValidator__get_PreserveWhitespace (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__ProcessTokenizedType (System_Xml_Schema_XdrValidator_o* __this, int32_t ttype, System_String_o* name, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__CompleteValidation (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__CheckValue (System_Xml_Schema_XdrValidator_o* __this, System_String_o* value, System_Xml_Schema_SchemaAttDef_o* attdef, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__CheckDefaultValue (System_String_o* value, System_Xml_Schema_SchemaAttDef_o* attdef, System_Xml_Schema_SchemaInfo_o* sinfo, System_Xml_XmlNamespaceManager_o* nsManager, System_Xml_XmlNameTable_o* NameTable, Il2CppObject* sender, System_Xml_Schema_ValidationEventHandler_o* eventhandler, System_String_o* baseUri, int32_t lineNo, int32_t linePos, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__AddID (System_Xml_Schema_XdrValidator_o* __this, System_String_o* name, Il2CppObject* node, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_XdrValidator__FindId (System_Xml_Schema_XdrValidator_o* __this, System_String_o* name, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__Push (System_Xml_Schema_XdrValidator_o* __this, System_Xml_XmlQualifiedName_o* elementName, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__Pop (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_XdrValidator__CheckForwardRefs (System_Xml_Schema_XdrValidator_o* __this, const MethodInfo* method);
System_Xml_XmlQualifiedName_o* System_Xml_Schema_XdrValidator__QualifiedName (System_Xml_Schema_XdrValidator_o* __this, System_String_o* name, System_String_o* ns, const MethodInfo* method);
