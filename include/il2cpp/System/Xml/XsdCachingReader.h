#pragma once

#include "il2cpp.h"

void System_Xml_XsdCachingReader___ctor (System_Xml_XsdCachingReader_o* __this, System_Xml_XmlReader_o* reader, System_Xml_IXmlLineInfo_o* lineInfo, System_Xml_CachingEventHandler_o* handlerMethod, const MethodInfo* method);
void System_Xml_XsdCachingReader__Init (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
void System_Xml_XsdCachingReader__Reset (System_Xml_XsdCachingReader_o* __this, System_Xml_XmlReader_o* reader, const MethodInfo* method);
System_Xml_XmlReaderSettings_o* System_Xml_XsdCachingReader__get_Settings (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XsdCachingReader__get_NodeType (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XsdCachingReader__get_Name (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XsdCachingReader__get_LocalName (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XsdCachingReader__get_NamespaceURI (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XsdCachingReader__get_Prefix (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XsdCachingReader__get_Value (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XsdCachingReader__get_Depth (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XsdCachingReader__get_BaseURI (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
bool System_Xml_XsdCachingReader__get_IsEmptyElement (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
bool System_Xml_XsdCachingReader__get_IsDefault (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XsdCachingReader__get_AttributeCount (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XsdCachingReader__GetAttribute (System_Xml_XsdCachingReader_o* __this, System_String_o* name, const MethodInfo* method);
System_String_o* System_Xml_XsdCachingReader__GetAttribute (System_Xml_XsdCachingReader_o* __this, int32_t i, const MethodInfo* method);
bool System_Xml_XsdCachingReader__MoveToAttribute (System_Xml_XsdCachingReader_o* __this, System_String_o* name, const MethodInfo* method);
void System_Xml_XsdCachingReader__MoveToAttribute (System_Xml_XsdCachingReader_o* __this, int32_t i, const MethodInfo* method);
bool System_Xml_XsdCachingReader__MoveToFirstAttribute (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
bool System_Xml_XsdCachingReader__MoveToNextAttribute (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
bool System_Xml_XsdCachingReader__MoveToElement (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
bool System_Xml_XsdCachingReader__Read (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_Xml_ValidatingReaderNodeData_o* System_Xml_XsdCachingReader__RecordTextNode (System_Xml_XsdCachingReader_o* __this, System_String_o* textValue, System_String_o* originalStringValue, int32_t depth, int32_t lineNo, int32_t linePos, const MethodInfo* method);
void System_Xml_XsdCachingReader__SwitchTextNodeAndEndElement (System_Xml_XsdCachingReader_o* __this, System_String_o* textValue, System_String_o* originalStringValue, const MethodInfo* method);
void System_Xml_XsdCachingReader__RecordEndElementNode (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
bool System_Xml_XsdCachingReader__get_EOF (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
void System_Xml_XsdCachingReader__Close (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XsdCachingReader__get_ReadState (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_Xml_XmlNameTable_o* System_Xml_XsdCachingReader__get_NameTable (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XsdCachingReader__LookupNamespace (System_Xml_XsdCachingReader_o* __this, System_String_o* prefix, const MethodInfo* method);
void System_Xml_XsdCachingReader__ResolveEntity (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
bool System_Xml_XsdCachingReader__ReadAttributeValue (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XsdCachingReader__System_Xml_IXmlLineInfo_get_LineNumber (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XsdCachingReader__System_Xml_IXmlLineInfo_get_LinePosition (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
void System_Xml_XsdCachingReader__SetToReplayMode (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_Xml_XmlReader_o* System_Xml_XsdCachingReader__GetCoreReader (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_Xml_IXmlLineInfo_o* System_Xml_XsdCachingReader__GetLineInfo (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
void System_Xml_XsdCachingReader__ClearAttributesInfo (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
System_Xml_ValidatingReaderNodeData_o* System_Xml_XsdCachingReader__AddAttribute (System_Xml_XsdCachingReader_o* __this, int32_t attIndex, const MethodInfo* method);
System_Xml_ValidatingReaderNodeData_o* System_Xml_XsdCachingReader__AddContent (System_Xml_XsdCachingReader_o* __this, int32_t nodeType, const MethodInfo* method);
void System_Xml_XsdCachingReader__RecordAttributes (System_Xml_XsdCachingReader_o* __this, const MethodInfo* method);
int32_t System_Xml_XsdCachingReader__GetAttributeIndexWithoutPrefix (System_Xml_XsdCachingReader_o* __this, System_String_o* name, const MethodInfo* method);
int32_t System_Xml_XsdCachingReader__GetAttributeIndexWithPrefix (System_Xml_XsdCachingReader_o* __this, System_String_o* name, const MethodInfo* method);
System_Xml_ValidatingReaderNodeData_o* System_Xml_XsdCachingReader__CreateDummyTextNode (System_Xml_XsdCachingReader_o* __this, System_String_o* attributeValue, int32_t depth, const MethodInfo* method);
