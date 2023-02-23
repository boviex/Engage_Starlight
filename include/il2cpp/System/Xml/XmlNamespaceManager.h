#pragma once

#include "il2cpp.h"

void System_Xml_XmlNamespaceManager___ctor (System_Xml_XmlNamespaceManager_o* __this, const MethodInfo* method);
void System_Xml_XmlNamespaceManager___ctor (System_Xml_XmlNamespaceManager_o* __this, System_Xml_XmlNameTable_o* nameTable, const MethodInfo* method);
System_Xml_XmlNameTable_o* System_Xml_XmlNamespaceManager__get_NameTable (System_Xml_XmlNamespaceManager_o* __this, const MethodInfo* method);
System_String_o* System_Xml_XmlNamespaceManager__get_DefaultNamespace (System_Xml_XmlNamespaceManager_o* __this, const MethodInfo* method);
void System_Xml_XmlNamespaceManager__PushScope (System_Xml_XmlNamespaceManager_o* __this, const MethodInfo* method);
bool System_Xml_XmlNamespaceManager__PopScope (System_Xml_XmlNamespaceManager_o* __this, const MethodInfo* method);
void System_Xml_XmlNamespaceManager__AddNamespace (System_Xml_XmlNamespaceManager_o* __this, System_String_o* prefix, System_String_o* uri, const MethodInfo* method);
System_Collections_IEnumerator_o* System_Xml_XmlNamespaceManager__GetEnumerator (System_Xml_XmlNamespaceManager_o* __this, const MethodInfo* method);
System_Collections_Generic_IDictionary_string__string__o* System_Xml_XmlNamespaceManager__GetNamespacesInScope (System_Xml_XmlNamespaceManager_o* __this, int32_t scope, const MethodInfo* method);
System_String_o* System_Xml_XmlNamespaceManager__LookupNamespace (System_Xml_XmlNamespaceManager_o* __this, System_String_o* prefix, const MethodInfo* method);
int32_t System_Xml_XmlNamespaceManager__LookupNamespaceDecl (System_Xml_XmlNamespaceManager_o* __this, System_String_o* prefix, const MethodInfo* method);
System_String_o* System_Xml_XmlNamespaceManager__LookupPrefix (System_Xml_XmlNamespaceManager_o* __this, System_String_o* uri, const MethodInfo* method);
