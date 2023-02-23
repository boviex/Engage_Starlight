#pragma once

#include "il2cpp.h"

void System_Xml_XmlAttributeCollection___ctor (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlNode_o* parent, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_XmlAttributeCollection__get_ItemOf (System_Xml_XmlAttributeCollection_o* __this, int32_t i, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlAttributeCollection__SetNamedItem (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlNode_o* node, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_XmlAttributeCollection__Append (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlAttribute_o* node, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_XmlAttributeCollection__Remove (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlAttribute_o* node, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_XmlAttributeCollection__RemoveAt (System_Xml_XmlAttributeCollection_o* __this, int32_t i, const MethodInfo* method);
void System_Xml_XmlAttributeCollection__RemoveAll (System_Xml_XmlAttributeCollection_o* __this, const MethodInfo* method);
void System_Xml_XmlAttributeCollection__System_Collections_ICollection_CopyTo (System_Xml_XmlAttributeCollection_o* __this, System_Array_o* array, int32_t index, const MethodInfo* method);
bool System_Xml_XmlAttributeCollection__System_Collections_ICollection_get_IsSynchronized (System_Xml_XmlAttributeCollection_o* __this, const MethodInfo* method);
Il2CppObject* System_Xml_XmlAttributeCollection__System_Collections_ICollection_get_SyncRoot (System_Xml_XmlAttributeCollection_o* __this, const MethodInfo* method);
int32_t System_Xml_XmlAttributeCollection__System_Collections_ICollection_get_Count (System_Xml_XmlAttributeCollection_o* __this, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlAttributeCollection__AddNode (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlNode_o* node, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlAttributeCollection__InsertNodeAt (System_Xml_XmlAttributeCollection_o* __this, int32_t i, System_Xml_XmlNode_o* node, const MethodInfo* method);
System_Xml_XmlNode_o* System_Xml_XmlAttributeCollection__RemoveNodeAt (System_Xml_XmlAttributeCollection_o* __this, int32_t i, const MethodInfo* method);
void System_Xml_XmlAttributeCollection__Detach (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlAttribute_o* attr, const MethodInfo* method);
void System_Xml_XmlAttributeCollection__InsertParentIntoElementIdAttrMap (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlAttribute_o* attr, const MethodInfo* method);
void System_Xml_XmlAttributeCollection__RemoveParentFromElementIdAttrMap (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlAttribute_o* attr, const MethodInfo* method);
int32_t System_Xml_XmlAttributeCollection__RemoveDuplicateAttribute (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlAttribute_o* attr, const MethodInfo* method);
bool System_Xml_XmlAttributeCollection__PrepareParentInElementIdAttrMap (System_Xml_XmlAttributeCollection_o* __this, System_String_o* attrPrefix, System_String_o* attrLocalName, const MethodInfo* method);
void System_Xml_XmlAttributeCollection__ResetParentInElementIdAttrMap (System_Xml_XmlAttributeCollection_o* __this, System_String_o* oldVal, System_String_o* newVal, const MethodInfo* method);
System_Xml_XmlAttribute_o* System_Xml_XmlAttributeCollection__InternalAppendAttribute (System_Xml_XmlAttributeCollection_o* __this, System_Xml_XmlAttribute_o* node, const MethodInfo* method);
