#pragma once

#include "il2cpp.h"

void System_Xml_Schema_Parser___ctor (System_Xml_Schema_Parser_o* __this, int32_t schemaType, System_Xml_XmlNameTable_o* nameTable, System_Xml_Schema_SchemaNames_o* schemaNames, System_Xml_Schema_ValidationEventHandler_o* eventHandler, const MethodInfo* method);
int32_t System_Xml_Schema_Parser__Parse (System_Xml_Schema_Parser_o* __this, System_Xml_XmlReader_o* reader, System_String_o* targetNamespace, const MethodInfo* method);
void System_Xml_Schema_Parser__StartParsing (System_Xml_Schema_Parser_o* __this, System_Xml_XmlReader_o* reader, System_String_o* targetNamespace, const MethodInfo* method);
bool System_Xml_Schema_Parser__CheckSchemaRoot (System_Xml_Schema_Parser_o* __this, int32_t rootType, System_String_o** code, const MethodInfo* method);
int32_t System_Xml_Schema_Parser__FinishParsing (System_Xml_Schema_Parser_o* __this, const MethodInfo* method);
System_Xml_Schema_XmlSchema_o* System_Xml_Schema_Parser__get_XmlSchema (System_Xml_Schema_Parser_o* __this, const MethodInfo* method);
void System_Xml_Schema_Parser__set_XmlResolver (System_Xml_Schema_Parser_o* __this, System_Xml_XmlResolver_o* value, const MethodInfo* method);
System_Xml_Schema_SchemaInfo_o* System_Xml_Schema_Parser__get_XdrSchema (System_Xml_Schema_Parser_o* __this, const MethodInfo* method);
bool System_Xml_Schema_Parser__ParseReaderNode (System_Xml_Schema_Parser_o* __this, const MethodInfo* method);
void System_Xml_Schema_Parser__ProcessAppInfoDocMarkup (System_Xml_Schema_Parser_o* __this, bool root, const MethodInfo* method);
System_Xml_XmlElement_o* System_Xml_Schema_Parser__LoadElementNode (System_Xml_Schema_Parser_o* __this, bool root, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_Schema_Parser__CreateXmlNsAttribute (System_Xml_Schema_Parser_o* __this, System_String_o* prefix, System_String_o* value, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_Schema_Parser__LoadAttributeNode (System_Xml_Schema_Parser_o* __this, const MethodInfo* method);
System_Xml_XmlEntityReference_o* System_Xml_Schema_Parser__LoadEntityReferenceInAttribute (System_Xml_Schema_Parser_o* __this, const MethodInfo* method);
