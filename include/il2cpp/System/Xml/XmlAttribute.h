#pragma once

#include "il2cpp.h"

void System_Xml_XmlAttribute___ctor (System_Xml_XmlAttribute_o* __this, System_Xml_XmlName_o* name, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
void System_Xml_XmlAttribute___ctor (System_Xml_XmlAttribute_o* __this, System_String_o* prefix, System_String_o* localName, System_String_o* namespaceURI, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
System_Xml_XmlName_o* System_Xml_XmlAttribute__get_XmlName (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
void System_Xml_XmlAttribute__set_XmlName (System_Xml_XmlAttribute_o* __this, System_Xml_XmlName_o* value, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlAttribute__CloneNode (System_Xml_XmlAttribute_o* __this, bool deep, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlAttribute__get_ParentNode (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlAttribute__get_Name (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlAttribute__get_LocalName (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlAttribute__get_NamespaceURI (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlAttribute__get_Prefix (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlAttribute__get_NodeType (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
System_Xml_XmlDocument_o* System_Xml_XmlAttribute__get_OwnerDocument (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlAttribute__get_Value (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
void System_Xml_XmlAttribute__set_Value (System_Xml_XmlAttribute_o* __this, System_String_o* value, const MethodInfo* method);
void System_Xml_XmlAttribute__set_InnerText (System_Xml_XmlAttribute_o* __this, System_String_o* value, const MethodInfo* method);
bool System_Xml_XmlAttribute__PrepareOwnerElementInElementIdAttrMap (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
void System_Xml_XmlAttribute__ResetOwnerElementInElementIdAttrMap (System_Xml_XmlAttribute_o* __this, System_String_o* oldInnerText, const MethodInfo* method);
bool System_Xml_XmlAttribute__get_IsContainer (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlAttribute__AppendChildForLoad (System_Xml_XmlAttribute_o* __this, System_Xml_XmlNode_o* newChild, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
System_Xml_XmlLinkedNode_o* System_Xml_XmlAttribute__get_LastNode (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
void System_Xml_XmlAttribute__set_LastNode (System_Xml_XmlAttribute_o* __this, System_Xml_XmlLinkedNode_o* value, const MethodInfo* method);
bool System_Xml_XmlAttribute__IsValidChildType (System_Xml_XmlAttribute_o* __this, int32_t type, const MethodInfo* method);
bool System_Xml_XmlAttribute__get_Specified (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlAttribute__RemoveChild (System_Xml_XmlAttribute_o* __this, System_Xml_XmlNode_o* oldChild, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlAttribute__AppendChild (System_Xml_XmlAttribute_o* __this, System_Xml_XmlNode_o* newChild, const MethodInfo* method);
System_Xml_XmlElement_o* System_Xml_XmlAttribute__get_OwnerElement (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
void System_Xml_XmlAttribute__set_InnerXml (System_Xml_XmlAttribute_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Xml_XmlAttribute__get_BaseURI (System_Xml_XmlAttribute_o* __this, const MethodInfo* method);
void System_Xml_XmlAttribute__SetParent (System_Xml_XmlAttribute_o* __this, System_Xml_XmlNode_o* node, const MethodInfo* method);
