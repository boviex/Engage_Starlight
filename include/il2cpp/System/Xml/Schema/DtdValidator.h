#pragma once

#include "il2cpp.h"

void System_Xml_Schema_DtdValidator___ctor (System_Xml_Schema_DtdValidator_o* __this, System_Xml_XmlValidatingReaderImpl_o* reader, System_Xml_IValidationEventHandling_o* eventHandling, bool processIdentityConstraints, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__Init (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__Validate (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_DtdValidator__MeetsStandAloneConstraint (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__ValidatePIComment (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__ValidateElement (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__ValidateChildElement (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__ValidateStartElement (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__ValidateEndStartElement (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__ProcessElement (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__CompleteValidation (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__ValidateEndElement (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_DtdValidator__get_PreserveWhitespace (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__ProcessTokenizedType (System_Xml_Schema_DtdValidator_o* __this, int32_t ttype, System_String_o* name, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__CheckValue (System_Xml_Schema_DtdValidator_o* __this, System_String_o* value, System_Xml_Schema_SchemaAttDef_o* attdef, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__AddID (System_Xml_Schema_DtdValidator_o* __this, System_String_o* name, Il2CppObject* node, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_DtdValidator__FindId (System_Xml_Schema_DtdValidator_o* __this, System_String_o* name, const MethodInfo* method);
bool System_Xml_Schema_DtdValidator__GenEntity (System_Xml_Schema_DtdValidator_o* __this, System_Xml_XmlQualifiedName_o* qname, const MethodInfo* method);
System_Xml_Schema_SchemaEntity_o* System_Xml_Schema_DtdValidator__GetEntity (System_Xml_Schema_DtdValidator_o* __this, System_Xml_XmlQualifiedName_o* qname, bool fParameterEntity, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__CheckForwardRefs (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__Push (System_Xml_Schema_DtdValidator_o* __this, System_Xml_XmlQualifiedName_o* elementName, const MethodInfo* method);
bool System_Xml_Schema_DtdValidator__Pop (System_Xml_Schema_DtdValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__SetDefaultTypedValue (System_Xml_Schema_SchemaAttDef_o* attdef, System_Xml_IDtdParserAdapter_o* readerAdapter, const MethodInfo* method);
void System_Xml_Schema_DtdValidator__CheckDefaultValue (System_Xml_Schema_SchemaAttDef_o* attdef, System_Xml_Schema_SchemaInfo_o* sinfo, System_Xml_IValidationEventHandling_o* eventHandling, System_String_o* baseUriStr, const MethodInfo* method);
void System_Xml_Schema_DtdValidator___cctor (const MethodInfo* method);
