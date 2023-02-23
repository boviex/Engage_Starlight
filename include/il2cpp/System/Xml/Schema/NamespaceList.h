#pragma once

#include "il2cpp.h"

void System_Xml_Schema_NamespaceList___ctor (System_Xml_Schema_NamespaceList_o* __this, const MethodInfo* method);
void System_Xml_Schema_NamespaceList___ctor (System_Xml_Schema_NamespaceList_o* __this, System_String_o* namespaces, System_String_o* targetNamespace, const MethodInfo* method);
System_Xml_Schema_NamespaceList_o* System_Xml_Schema_NamespaceList__Clone (System_Xml_Schema_NamespaceList_o* __this, const MethodInfo* method);
int32_t System_Xml_Schema_NamespaceList__get_Type (System_Xml_Schema_NamespaceList_o* __this, const MethodInfo* method);
System_String_o* System_Xml_Schema_NamespaceList__get_Excluded (System_Xml_Schema_NamespaceList_o* __this, const MethodInfo* method);
System_Collections_ICollection_o* System_Xml_Schema_NamespaceList__get_Enumerate (System_Xml_Schema_NamespaceList_o* __this, const MethodInfo* method);
bool System_Xml_Schema_NamespaceList__Allows (System_Xml_Schema_NamespaceList_o* __this, System_String_o* ns, const MethodInfo* method);
bool System_Xml_Schema_NamespaceList__Allows (System_Xml_Schema_NamespaceList_o* __this, System_Xml_XmlQualifiedName_o* qname, const MethodInfo* method);
System_String_o* System_Xml_Schema_NamespaceList__ToString (System_Xml_Schema_NamespaceList_o* __this, const MethodInfo* method);
bool System_Xml_Schema_NamespaceList__IsSubset (System_Xml_Schema_NamespaceList_o* sub, System_Xml_Schema_NamespaceList_o* super, const MethodInfo* method);
System_Xml_Schema_NamespaceList_o* System_Xml_Schema_NamespaceList__Union (System_Xml_Schema_NamespaceList_o* o1, System_Xml_Schema_NamespaceList_o* o2, bool v1Compat, const MethodInfo* method);
System_Xml_Schema_NamespaceList_o* System_Xml_Schema_NamespaceList__CompareSetToOther (System_Xml_Schema_NamespaceList_o* __this, System_Xml_Schema_NamespaceList_o* other, const MethodInfo* method);
System_Xml_Schema_NamespaceList_o* System_Xml_Schema_NamespaceList__Intersection (System_Xml_Schema_NamespaceList_o* o1, System_Xml_Schema_NamespaceList_o* o2, bool v1Compat, const MethodInfo* method);
void System_Xml_Schema_NamespaceList__RemoveNamespace (System_Xml_Schema_NamespaceList_o* __this, System_String_o* tns, const MethodInfo* method);
