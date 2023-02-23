#pragma once

#include "il2cpp.h"

void System_Xml_Schema_ContentValidator___ctor (System_Xml_Schema_ContentValidator_o* __this, int32_t contentType, const MethodInfo* method);
void System_Xml_Schema_ContentValidator___ctor (System_Xml_Schema_ContentValidator_o* __this, int32_t contentType, bool isOpen, bool isEmptiable, const MethodInfo* method);
int32_t System_Xml_Schema_ContentValidator__get_ContentType (System_Xml_Schema_ContentValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_ContentValidator__get_PreserveWhitespace (System_Xml_Schema_ContentValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_ContentValidator__get_IsEmptiable (System_Xml_Schema_ContentValidator_o* __this, const MethodInfo* method);
bool System_Xml_Schema_ContentValidator__get_IsOpen (System_Xml_Schema_ContentValidator_o* __this, const MethodInfo* method);
void System_Xml_Schema_ContentValidator__set_IsOpen (System_Xml_Schema_ContentValidator_o* __this, bool value, const MethodInfo* method);
void System_Xml_Schema_ContentValidator__InitValidation (System_Xml_Schema_ContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_ContentValidator__ValidateElement (System_Xml_Schema_ContentValidator_o* __this, System_Xml_XmlQualifiedName_o* name, System_Xml_Schema_ValidationState_o* context, int32_t* errorCode, const MethodInfo* method);
bool System_Xml_Schema_ContentValidator__CompleteValidation (System_Xml_Schema_ContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, const MethodInfo* method);
System_Collections_ArrayList_o* System_Xml_Schema_ContentValidator__ExpectedElements (System_Xml_Schema_ContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, bool isRequiredOnly, const MethodInfo* method);
System_Collections_ArrayList_o* System_Xml_Schema_ContentValidator__ExpectedParticles (System_Xml_Schema_ContentValidator_o* __this, System_Xml_Schema_ValidationState_o* context, bool isRequiredOnly, System_Xml_Schema_XmlSchemaSet_o* schemaSet, const MethodInfo* method);
void System_Xml_Schema_ContentValidator__AddParticleToExpected (System_Xml_Schema_XmlSchemaParticle_o* p, System_Xml_Schema_XmlSchemaSet_o* schemaSet, System_Collections_ArrayList_o* particles, const MethodInfo* method);
void System_Xml_Schema_ContentValidator__AddParticleToExpected (System_Xml_Schema_XmlSchemaParticle_o* p, System_Xml_Schema_XmlSchemaSet_o* schemaSet, System_Collections_ArrayList_o* particles, bool global, const MethodInfo* method);
void System_Xml_Schema_ContentValidator___cctor (const MethodInfo* method);
