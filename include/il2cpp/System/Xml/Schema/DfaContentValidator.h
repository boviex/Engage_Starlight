#pragma once

#include "il2cpp.h"

void System_Xml_Schema_DfaContentValidator___ctor (System_Xml_Schema_DfaContentValidator_o* __this, System_Int32_array_array* transitionTable, System_Xml_Schema_SymbolsDictionary_o* symbols, int32_t contentType, bool isOpen, bool isEmptiable, const MethodInfo* method);
void System_Xml_Schema_DfaContentValidator__InitValidation (System_Xml_Schema_DfaContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_DfaContentValidator__ValidateElement (System_Xml_Schema_DfaContentValidator_o* __this, System_Xml_XmlQualifiedName_o* name, System_Xml_Schema_ValidationState_o* context, int32_t* errorCode, const MethodInfo* method);
bool System_Xml_Schema_DfaContentValidator__CompleteValidation (System_Xml_Schema_DfaContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, const MethodInfo* method);
System_Collections_ArrayList_o* System_Xml_Schema_DfaContentValidator__ExpectedElements (System_Xml_Schema_DfaContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, bool isRequiredOnly, const MethodInfo* method);
System_Collections_ArrayList_o* System_Xml_Schema_DfaContentValidator__ExpectedParticles (System_Xml_Schema_DfaContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, bool isRequiredOnly, System_Xml_Schema_XmlSchemaSet_o* schemaSet, const MethodInfo* method);
