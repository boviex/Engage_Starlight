#pragma once

#include "il2cpp.h"

void System_Xml_Schema_Preprocessor___ctor (System_Xml_Schema_Preprocessor_o* __this, System_Xml_XmlNameTable_o* nameTable, System_Xml_Schema_SchemaNames_o* schemaNames, System_Xml_Schema_ValidationEventHandler_o* eventHandler, System_Xml_Schema_XmlSchemaCompilationSettings_o* compilationSettings, const MethodInfo* method);
bool System_Xml_Schema_Preprocessor__Execute (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* schema, System_String_o* targetNamespace, bool loadExternals, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__Cleanup (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* schema, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__CleanupRedefine (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaExternal_o* include, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__set_XmlResolver (System_Xml_Schema_Preprocessor_o* __this, System_Xml_XmlResolver_o* value, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__set_ReaderSettings (System_Xml_Schema_Preprocessor_o* __this, System_Xml_XmlReaderSettings_o* value, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__set_SchemaLocations (System_Xml_Schema_Preprocessor_o* __this, System_Collections_Hashtable_o* value, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__set_ChameleonSchemas (System_Xml_Schema_Preprocessor_o* __this, System_Collections_Hashtable_o* value, const MethodInfo* method);
System_Xml_Schema_XmlSchema_o* System_Xml_Schema_Preprocessor__get_RootSchema (System_Xml_Schema_Preprocessor_o* __this, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__BuildSchemaList (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* schema, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__LoadExternals (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* schema, const MethodInfo* method);
System_Xml_Schema_XmlSchema_o* System_Xml_Schema_Preprocessor__GetBuildInSchema (const MethodInfo* method);
void System_Xml_Schema_Preprocessor__BuildRefNamespaces (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* schema, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__ParseUri (System_Xml_Schema_Preprocessor_o* __this, System_String_o* uri, System_String_o* code, System_Xml_Schema_XmlSchemaObject_o* sourceSchemaObject, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__Preprocess (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* schema, System_String_o* targetNamespace, System_Collections_ArrayList_o* imports, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__CopyIncludedComponents (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* includedSchema, System_Xml_Schema_XmlSchema_o* schema, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessRedefine (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_RedefineEntry_o* redefineEntry, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__GetIncludedSet (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* schema, System_Collections_ArrayList_o* includesList, const MethodInfo* method);
System_Xml_Schema_XmlSchema_o* System_Xml_Schema_Preprocessor__GetParentSchema (System_Xml_Schema_XmlSchemaObject_o* currentSchemaObject, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__SetSchemaDefaults (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* schema, const MethodInfo* method);
int32_t System_Xml_Schema_Preprocessor__CountGroupSelfReference (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaObjectCollection_o* items, System_Xml_XmlQualifiedName_o* name, System_Xml_Schema_XmlSchemaGroup_o* redefined, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__CheckRefinedGroup (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaGroup_o* group, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__CheckRefinedAttributeGroup (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaAttributeGroup_o* attributeGroup, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__CheckRefinedSimpleType (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaSimpleType_o* stype, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__CheckRefinedComplexType (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaComplexType_o* ctype, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessAttribute (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaAttribute_o* attribute, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessLocalAttribute (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaAttribute_o* attribute, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessAttributeContent (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaAttribute_o* attribute, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessAttributeGroup (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaAttributeGroup_o* attributeGroup, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessElement (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaElement_o* element, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessLocalElement (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaElement_o* element, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessElementContent (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaElement_o* element, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessIdentityConstraint (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaIdentityConstraint_o* constraint, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessSimpleType (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaSimpleType_o* simpleType, bool local, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessComplexType (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaComplexType_o* complexType, bool local, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessGroup (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaGroup_o* group, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessNotation (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaNotation_o* notation, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessParticle (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaParticle_o* particle, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessAttributes (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaObjectCollection_o* attributes, System_Xml_Schema_XmlSchemaAnyAttribute_o* anyAttribute, System_Xml_Schema_XmlSchemaObject_o* parent, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__ValidateIdAttribute (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaObject_o* xso, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__ValidateNameAttribute (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaObject_o* xso, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__ValidateQNameAttribute (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaObject_o* xso, System_String_o* attributeName, System_Xml_XmlQualifiedName_o* value, const MethodInfo* method);
System_Uri_o* System_Xml_Schema_Preprocessor__ResolveSchemaLocationUri (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchema_o* enclosingSchema, System_String_o* location, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_Preprocessor__GetSchemaEntity (System_Xml_Schema_Preprocessor_o* __this, System_Uri_o* ruri, const MethodInfo* method);
System_Xml_Schema_XmlSchema_o* System_Xml_Schema_Preprocessor__GetChameleonSchema (System_Xml_Schema_Preprocessor_o* __this, System_String_o* targetNamespace, System_Xml_Schema_XmlSchema_o* schema, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__SetParent (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaObject_o* child, System_Xml_Schema_XmlSchemaObject_o* parent, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessAnnotation (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaObject_o* schemaObject, const MethodInfo* method);
void System_Xml_Schema_Preprocessor__PreprocessAnnotation (System_Xml_Schema_Preprocessor_o* __this, System_Xml_Schema_XmlSchemaAnnotation_o* annotation, const MethodInfo* method);