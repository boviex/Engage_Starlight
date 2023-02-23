#pragma once

#include "il2cpp.h"

void System_Xml_XmlTextReader___ctor (System_Xml_XmlTextReader_o* __this, System_String_o* url, System_IO_Stream_o* input, System_Xml_XmlNameTable_o* nt, const MethodInfo* method);
void System_Xml_XmlTextReader___ctor (System_Xml_XmlTextReader_o* __this, System_IO_TextReader_o* input, System_Xml_XmlNameTable_o* nt, const MethodInfo* method);
int32_t System_Xml_XmlTextReader__get_NodeType (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__get_Name (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__get_LocalName (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__get_NamespaceURI (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__get_Prefix (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__get_Value (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlTextReader__get_Depth (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__get_BaseURI (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
bool System_Xml_XmlTextReader__get_IsEmptyElement (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
bool System_Xml_XmlTextReader__get_IsDefault (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlTextReader__get_AttributeCount (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__GetAttribute (System_Xml_XmlTextReader_o* __this, System_String_o* name, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__GetAttribute (System_Xml_XmlTextReader_o* __this, int32_t i, const MethodInfo* method);
bool System_Xml_XmlTextReader__MoveToAttribute (System_Xml_XmlTextReader_o* __this, System_String_o* name, const MethodInfo* method);
void System_Xml_XmlTextReader__MoveToAttribute (System_Xml_XmlTextReader_o* __this, int32_t i, const MethodInfo* method);
bool System_Xml_XmlTextReader__MoveToFirstAttribute (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
bool System_Xml_XmlTextReader__MoveToNextAttribute (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
bool System_Xml_XmlTextReader__MoveToElement (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
bool System_Xml_XmlTextReader__ReadAttributeValue (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
bool System_Xml_XmlTextReader__Read (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
bool System_Xml_XmlTextReader__get_EOF (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
void System_Xml_XmlTextReader__Close (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlTextReader__get_ReadState (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_Xml_XmlNameTable_o* System_Xml_XmlTextReader__get_NameTable (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__LookupNamespace (System_Xml_XmlTextReader_o* __this, System_String_o* prefix, const MethodInfo* method);
bool System_Xml_XmlTextReader__get_CanResolveEntity (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
void System_Xml_XmlTextReader__ResolveEntity (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlTextReader__get_LineNumber (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlTextReader__get_LinePosition (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_Collections_Generic_IDictionary_string__string__o* System_Xml_XmlTextReader__System_Xml_IXmlNamespaceResolver_GetNamespacesInScope (System_Xml_XmlTextReader_o* __this, int32_t scope, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__System_Xml_IXmlNamespaceResolver_LookupNamespace (System_Xml_XmlTextReader_o* __this, System_String_o* prefix, const MethodInfo* method);
System_String_o* System_Xml_XmlTextReader__System_Xml_IXmlNamespaceResolver_LookupPrefix (System_Xml_XmlTextReader_o* __this, System_String_o* namespaceName, const MethodInfo* method);
void System_Xml_XmlTextReader__set_EntityHandling (System_Xml_XmlTextReader_o* __this, int32_t value, const MethodInfo* method);
void System_Xml_XmlTextReader__set_XmlResolver (System_Xml_XmlTextReader_o* __this, System_Xml_XmlResolver_o* value, const MethodInfo* method);
System_Xml_XmlTextReaderImpl_o* System_Xml_XmlTextReader__get_Impl (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
System_Xml_XmlNamespaceManager_o* System_Xml_XmlTextReader__get_NamespaceManager (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
void System_Xml_XmlTextReader__set_XmlValidatingReaderCompatibilityMode (System_Xml_XmlTextReader_o* __this, bool value, const MethodInfo* method);
System_Xml_IDtdInfo_o* System_Xml_XmlTextReader__get_DtdInfo (System_Xml_XmlTextReader_o* __this, const MethodInfo* method);
