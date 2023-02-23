#pragma once

#include "il2cpp.h"

void System_Xml_XmlNode___ctor (System_Xml_XmlNode_o* __this, const MethodInfo* method);
void System_Xml_XmlNode___ctor (System_Xml_XmlNode_o* __this, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
System_String_o* System_Xml_XmlNode__get_Value (System_Xml_XmlNode_o* __this, const MethodInfo* method);
void System_Xml_XmlNode__set_Value (System_Xml_XmlNode_o* __this, System_String_o* value, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlNode__get_ParentNode (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_Xml_XmlNodeList_o* System_Xml_XmlNode__get_ChildNodes (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlNode__get_PreviousSibling (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlNode__get_NextSibling (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_Xml_XmlAttributeCollection_o* System_Xml_XmlNode__get_Attributes (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_Xml_XmlDocument_o* System_Xml_XmlNode__get_OwnerDocument (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlNode__get_FirstChild (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlNode__get_LastChild (System_Xml_XmlNode_o* __this, const MethodInfo* method);
bool System_Xml_XmlNode__get_IsContainer (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_Xml_XmlLinkedNode_o* System_Xml_XmlNode__get_LastNode (System_Xml_XmlNode_o* __this, const MethodInfo* method);
void System_Xml_XmlNode__set_LastNode (System_Xml_XmlNode_o* __this, System_Xml_XmlLinkedNode_o* value, const MethodInfo* method);
bool System_Xml_XmlNode__AncestorNode (System_Xml_XmlNode_o* __this, System_Xml_XmlNode_o* node, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlNode__RemoveChild (System_Xml_XmlNode_o* __this, System_Xml_XmlNode_o* oldChild, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlNode__AppendChild (System_Xml_XmlNode_o* __this, System_Xml_XmlNode_o* newChild, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlNode__AppendChildForLoad (System_Xml_XmlNode_o* __this, System_Xml_XmlNode_o* newChild, System_Xml_XmlDocument_o* doc, const MethodInfo* method);
bool System_Xml_XmlNode__IsValidChildType (System_Xml_XmlNode_o* __this, int32_t type, const MethodInfo* method);
bool System_Xml_XmlNode__CanInsertAfter (System_Xml_XmlNode_o* __this, System_Xml_XmlNode_o* newChild, System_Xml_XmlNode_o* refChild, const MethodInfo* method);
bool System_Xml_XmlNode__get_HasChildNodes (System_Xml_XmlNode_o* __this, const MethodInfo* method);
void System_Xml_XmlNode__CopyChildren (System_Xml_XmlNode_o* __this, System_Xml_XmlDocument_o* doc, System_Xml_XmlNode_o* container, bool deep, const MethodInfo* method);
System_String_o* System_Xml_XmlNode__get_NamespaceURI (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlNode__get_Prefix (System_Xml_XmlNode_o* __this, const MethodInfo* method);
bool System_Xml_XmlNode__get_IsReadOnly (System_Xml_XmlNode_o* __this, const MethodInfo* method);
bool System_Xml_XmlNode__HasReadOnlyParent (System_Xml_XmlNode_o* n, const MethodInfo* method);
Il2CppObject* System_Xml_XmlNode__System_ICloneable_Clone (System_Xml_XmlNode_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* System_Xml_XmlNode__System_Collections_IEnumerable_GetEnumerator (System_Xml_XmlNode_o* __this, const MethodInfo* method);
void System_Xml_XmlNode__AppendChildText (System_Xml_XmlNode_o* __this, System_Text_StringBuilder_o* builder, const MethodInfo* method);
System_String_o* System_Xml_XmlNode__get_InnerText (System_Xml_XmlNode_o* __this, const MethodInfo* method);
void System_Xml_XmlNode__set_InnerText (System_Xml_XmlNode_o* __this, System_String_o* value, const MethodInfo* method);
void System_Xml_XmlNode__set_InnerXml (System_Xml_XmlNode_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Xml_XmlNode__get_BaseURI (System_Xml_XmlNode_o* __this, const MethodInfo* method);
void System_Xml_XmlNode__RemoveAll (System_Xml_XmlNode_o* __this, const MethodInfo* method);
void System_Xml_XmlNode__SetParent (System_Xml_XmlNode_o* __this, System_Xml_XmlNode_o* node, const MethodInfo* method);
void System_Xml_XmlNode__SetParentForLoad (System_Xml_XmlNode_o* __this, System_Xml_XmlNode_o* node, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlNode__FindChild (System_Xml_XmlNode_o* __this, int32_t type, const MethodInfo* method);
System_Xml_XmlNodeChangedEventArgs_o* System_Xml_XmlNode__GetEventArgs (System_Xml_XmlNode_o* __this, System_Xml_XmlNode_o* node, System_Xml_XmlNode_o* oldParent, System_Xml_XmlNode_o* newParent, System_String_o* oldValue, System_String_o* newValue, int32_t action, const MethodInfo* method);
void System_Xml_XmlNode__BeforeEvent (System_Xml_XmlNode_o* __this, System_Xml_XmlNodeChangedEventArgs_o* args, const MethodInfo* method);
void System_Xml_XmlNode__AfterEvent (System_Xml_XmlNode_o* __this, System_Xml_XmlNodeChangedEventArgs_o* args, const MethodInfo* method);
bool System_Xml_XmlNode__get_IsText (System_Xml_XmlNode_o* __this, const MethodInfo* method);
void System_Xml_XmlNode__NestTextNodes (System_Xml_XmlNode_o* prevNode, System_Xml_XmlNode_o* nextNode, const MethodInfo* method);
void System_Xml_XmlNode__UnnestTextNodes (System_Xml_XmlNode_o* prevNode, System_Xml_XmlNode_o* nextNode, const MethodInfo* method);
