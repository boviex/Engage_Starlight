#pragma once

#include "il2cpp.h"

void System_Xml_Schema_BaseProcessor___ctor (System_Xml_Schema_BaseProcessor_o* __this, System_Xml_XmlNameTable_o* nameTable, System_Xml_Schema_SchemaNames_o* schemaNames, System_Xml_Schema_ValidationEventHandler_o* eventHandler, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor___ctor (System_Xml_Schema_BaseProcessor_o* __this, System_Xml_XmlNameTable_o* nameTable, System_Xml_Schema_SchemaNames_o* schemaNames, System_Xml_Schema_ValidationEventHandler_o* eventHandler, System_Xml_Schema_XmlSchemaCompilationSettings_o* compilationSettings, const MethodInfo* method);
System_Xml_XmlNameTable_o* System_Xml_Schema_BaseProcessor__get_NameTable (System_Xml_Schema_BaseProcessor_o* __this, const MethodInfo* method);
System_Xml_Schema_SchemaNames_o* System_Xml_Schema_BaseProcessor__get_SchemaNames (System_Xml_Schema_BaseProcessor_o* __this, const MethodInfo* method);
System_Xml_Schema_ValidationEventHandler_o* System_Xml_Schema_BaseProcessor__get_EventHandler (System_Xml_Schema_BaseProcessor_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlSchemaCompilationSettings_o* System_Xml_Schema_BaseProcessor__get_CompilationSettings (System_Xml_Schema_BaseProcessor_o* __this, const MethodInfo* method);
bool System_Xml_Schema_BaseProcessor__get_HasErrors (System_Xml_Schema_BaseProcessor_o* __this, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__AddToTable (System_Xml_Schema_BaseProcessor_o* __this, System_Xml_Schema_XmlSchemaObjectTable_o* table, System_Xml_XmlQualifiedName_o* qname, System_Xml_Schema_XmlSchemaObject_o* item, const MethodInfo* method);
bool System_Xml_Schema_BaseProcessor__IsValidAttributeGroupRedefine (System_Xml_Schema_BaseProcessor_o* __this, System_Xml_Schema_XmlSchemaObject_o* existingObject, System_Xml_Schema_XmlSchemaObject_o* item, System_Xml_Schema_XmlSchemaObjectTable_o* table, const MethodInfo* method);
bool System_Xml_Schema_BaseProcessor__IsValidGroupRedefine (System_Xml_Schema_BaseProcessor_o* __this, System_Xml_Schema_XmlSchemaObject_o* existingObject, System_Xml_Schema_XmlSchemaObject_o* item, System_Xml_Schema_XmlSchemaObjectTable_o* table, const MethodInfo* method);
bool System_Xml_Schema_BaseProcessor__IsValidTypeRedefine (System_Xml_Schema_BaseProcessor_o* __this, System_Xml_Schema_XmlSchemaObject_o* existingObject, System_Xml_Schema_XmlSchemaObject_o* item, System_Xml_Schema_XmlSchemaObjectTable_o* table, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEvent (System_Xml_Schema_BaseProcessor_o* __this, System_String_o* code, System_Xml_Schema_XmlSchemaObject_o* source, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEvent (System_Xml_Schema_BaseProcessor_o* __this, System_String_o* code, System_String_o* msg, System_Xml_Schema_XmlSchemaObject_o* source, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEvent (System_Xml_Schema_BaseProcessor_o* __this, System_String_o* code, System_String_o* msg1, System_String_o* msg2, System_Xml_Schema_XmlSchemaObject_o* source, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEvent (System_Xml_Schema_BaseProcessor_o* __this, System_String_o* code, System_String_array* args, System_Exception_o* innerException, System_Xml_Schema_XmlSchemaObject_o* source, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEvent (System_Xml_Schema_BaseProcessor_o* __this, System_String_o* code, System_String_o* msg1, System_String_o* msg2, System_String_o* sourceUri, int32_t lineNumber, int32_t linePosition, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEvent (System_Xml_Schema_BaseProcessor_o* __this, System_String_o* code, System_Xml_Schema_XmlSchemaObject_o* source, int32_t severity, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEvent (System_Xml_Schema_BaseProcessor_o* __this, System_Xml_Schema_XmlSchemaException_o* e, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEvent (System_Xml_Schema_BaseProcessor_o* __this, System_String_o* code, System_String_o* msg, System_Xml_Schema_XmlSchemaObject_o* source, int32_t severity, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEvent (System_Xml_Schema_BaseProcessor_o* __this, System_Xml_Schema_XmlSchemaException_o* e, int32_t severity, const MethodInfo* method);
void System_Xml_Schema_BaseProcessor__SendValidationEventNoThrow (System_Xml_Schema_BaseProcessor_o* __this, System_Xml_Schema_XmlSchemaException_o* e, int32_t severity, const MethodInfo* method);
