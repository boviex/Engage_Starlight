#pragma once

#include "il2cpp.h"

void System_Xml_Schema_BaseValidator___ctor (System_Xml_Schema_BaseValidator_o* __this, System_Xml_Schema_BaseValidator_o* other, const MethodInfo* method);
void System_Xml_Schema_BaseValidator___ctor (System_Xml_Schema_BaseValidator_o* __this, System_Xml_XmlValidatingReaderImpl_o* reader, System_Xml_Schema_XmlSchemaCollection_o* schemaCollection, System_Xml_IValidationEventHandling_o* eventHandling, const MethodInfo* method);
System_Xml_XmlValidatingReaderImpl_o* System_Xml_Schema_BaseValidator__get_Reader (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlSchemaCollection_o* System_Xml_Schema_BaseValidator__get_SchemaCollection (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
System_Xml_XmlNameTable_o* System_Xml_Schema_BaseValidator__get_NameTable (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
System_Xml_Schema_SchemaNames_o* System_Xml_Schema_BaseValidator__get_SchemaNames (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
System_Xml_PositionInfo_o* System_Xml_Schema_BaseValidator__get_PositionInfo (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
System_Xml_XmlResolver_o* System_Xml_Schema_BaseValidator__get_XmlResolver (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__set_XmlResolver (System_Xml_Schema_BaseValidator_o* __this, System_Xml_XmlResolver_o* value, const MethodInfo* method);
System_Uri_o* System_Xml_Schema_BaseValidator__get_BaseUri (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__set_BaseUri (System_Xml_Schema_BaseValidator_o* __this, System_Uri_o* value, const MethodInfo* method);
System_Xml_Schema_ValidationEventHandler_o* System_Xml_Schema_BaseValidator__get_EventHandler (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
System_Xml_Schema_SchemaInfo_o* System_Xml_Schema_BaseValidator__get_SchemaInfo (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__set_DtdInfo (System_Xml_Schema_BaseValidator_o* __this, System_Xml_IDtdInfo_o* value, const MethodInfo* method);
bool System_Xml_Schema_BaseValidator__get_PreserveWhitespace (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__Validate (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__CompleteValidation (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_BaseValidator__FindId (System_Xml_Schema_BaseValidator_o* __this, System_String_o* name, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__ValidateText (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__ValidateWhitespace (System_Xml_Schema_BaseValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__SaveTextValue (System_Xml_Schema_BaseValidator_o* __this, System_String_o* value, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__SendValidationEvent (System_Xml_Schema_BaseValidator_o* __this, System_String_o* code, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__SendValidationEvent (System_Xml_Schema_BaseValidator_o* __this, System_String_o* code, System_String_array* args, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__SendValidationEvent (System_Xml_Schema_BaseValidator_o* __this, System_String_o* code, System_String_o* arg, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__SendValidationEvent (System_Xml_Schema_BaseValidator_o* __this, System_Xml_Schema_XmlSchemaException_o* e, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__SendValidationEvent (System_Xml_Schema_BaseValidator_o* __this, System_String_o* code, System_String_o* msg, int32_t severity, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__SendValidationEvent (System_Xml_Schema_BaseValidator_o* __this, System_String_o* code, System_String_array* args, int32_t severity, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__SendValidationEvent (System_Xml_Schema_BaseValidator_o* __this, System_Xml_Schema_XmlSchemaException_o* e, int32_t severity, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__ProcessEntity (System_Xml_Schema_SchemaInfo_o* sinfo, System_String_o* name, Il2CppObject* sender, System_Xml_Schema_ValidationEventHandler_o* eventhandler, System_String_o* baseUri, int32_t lineNumber, int32_t linePosition, const MethodInfo* method);
void System_Xml_Schema_BaseValidator__ProcessEntity (System_Xml_Schema_SchemaInfo_o* sinfo, System_String_o* name, System_Xml_IValidationEventHandling_o* eventHandling, System_String_o* baseUriStr, int32_t lineNumber, int32_t linePosition, const MethodInfo* method);
System_Xml_Schema_BaseValidator_o* System_Xml_Schema_BaseValidator__CreateInstance (int32_t valType, System_Xml_XmlValidatingReaderImpl_o* reader, System_Xml_Schema_XmlSchemaCollection_o* schemaCollection, System_Xml_IValidationEventHandling_o* eventHandling, bool processIdentityConstraints, const MethodInfo* method);
