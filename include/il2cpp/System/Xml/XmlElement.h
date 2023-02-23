#pragma once

#include "il2cpp.h"

void System_Xml_XmlElement___ctor (System_Xml_XmlElement_o* __this, System_Xml_XmlName_o* name, bool empty, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
void System_Xml_XmlElement___ctor (System_Xml_XmlElement_o* __this, System_String_o* prefix, System_String_o* localName, System_String_o* namespaceURI, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
System_Xml_XmlName_o* System_Xml_XmlElement__get_XmlName (System_Xml_XmlElement_o* __this, const MethodInfo* method);
void System_Xml_XmlElement__set_XmlName (System_Xml_XmlElement_o* __this, System_Xml_XmlName_o* value, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlElement__CloneNode (System_Xml_XmlElement_o* __this, bool deep, const MethodInfo* method);
System_String_o* System_Xml_XmlElement__get_Name (System_Xml_XmlElement_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlElement__get_LocalName (System_Xml_XmlElement_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlElement__get_NamespaceURI (System_Xml_XmlElement_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlElement__get_Prefix (System_Xml_XmlElement_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlElement__get_NodeType (System_Xml_XmlElement_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlElement__get_ParentNode (System_Xml_XmlElement_o* __this, const MethodInfo* method);
System_Xml_XmlDocument_o* System_Xml_XmlElement__get_OwnerDocument (System_Xml_XmlElement_o* __this, const MethodInfo* method);
bool System_Xml_XmlElement__get_IsContainer (System_Xml_XmlElement_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlElement__AppendChildForLoad (System_Xml_XmlElement_o* __this, System_Xml_XmlNode_o* newChild, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
bool System_Xml_XmlElement__get_IsEmpty (System_Xml_XmlElement_o* __this, const MethodInfo* method);
void System_Xml_XmlElement__set_IsEmpty (System_Xml_XmlElement_o* __this, bool value, const MethodInfo* method);
System_Xml_XmlLinkedNode_o* System_Xml_XmlElement__get_LastNode (System_Xml_XmlElement_o* __this, const MethodInfo* method);
void System_Xml_XmlElement__set_LastNode (System_Xml_XmlElement_o* __this, System_Xml_XmlLinkedNode_o* value, const MethodInfo* method);
bool System_Xml_XmlElement__IsValidChildType (System_Xml_XmlElement_o* __this, int32_t type, const MethodInfo* method);
System_Xml_XmlAttributeCollection_o* System_Xml_XmlElement__get_Attributes (System_Xml_XmlElement_o* __this, const MethodInfo* method);
bool System_Xml_XmlElement__get_HasAttributes (System_Xml_XmlElement_o* __this, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_XmlElement__SetAttributeNode (System_Xml_XmlElement_o* __this, System_Xml_XmlAttribute_o* newAttr, const MethodInfo* method);
void System_Xml_XmlElement__RemoveAllAttributes (System_Xml_XmlElement_o* __this, const MethodInfo* method);
void System_Xml_XmlElement__RemoveAll (System_Xml_XmlElement_o* __this, const MethodInfo* method);
void System_Xml_XmlElement__RemoveAllChildren (System_Xml_XmlElement_o* __this, const MethodInfo* method);
void System_Xml_XmlElement__set_InnerXml (System_Xml_XmlElement_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Xml_XmlElement__get_InnerText (System_Xml_XmlElement_o* __this, const MethodInfo* method);
void System_Xml_XmlElement__set_InnerText (System_Xml_XmlElement_o* __this, System_String_o* value, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlElement__get_NextSibling (System_Xml_XmlElement_o* __this, const MethodInfo* method);
void System_Xml_XmlElement__SetParent (System_Xml_XmlElement_o* __this, System_Xml_XmlNode_o* node, const MethodInfo* method);
