#pragma once

#include "il2cpp.h"

void System_Xml_Schema_NfaContentValidator___ctor (System_Xml_Schema_NfaContentValidator_o* __this, System_Xml_Schema_BitSet_o* firstpos, System_Xml_Schema_BitSet_array* followpos, System_Xml_Schema_SymbolsDictionary_o* symbols, System_Xml_Schema_Positions_o* positions, int32_t endMarkerPos, int32_t contentType, bool isOpen, bool isEmptiable, const MethodInfo* method);
void System_Xml_Schema_NfaContentValidator__InitValidation (System_Xml_Schema_NfaContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_NfaContentValidator__ValidateElement (System_Xml_Schema_NfaContentValidator_o* __this, System_Xml_XmlQualifiedName_o* name, System_Xml_Schema_ValidationState_o* context, int32_t* errorCode, const MethodInfo* method);
bool System_Xml_Schema_NfaContentValidator__CompleteValidation (System_Xml_Schema_NfaContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, const MethodInfo* method);
System_Collections_ArrayList_o* System_Xml_Schema_NfaContentValidator__ExpectedElements (System_Xml_Schema_NfaContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, bool isRequiredOnly, const MethodInfo* method);
System_Collections_ArrayList_o* System_Xml_Schema_NfaContentValidator__ExpectedParticles (System_Xml_Schema_NfaContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, bool isRequiredOnly, System_Xml_Schema_XmlSchemaSet_o* schemaSet, const MethodInfo* method);
