#pragma once

#include "il2cpp.h"

void System_Xml_Schema_SymbolsDictionary___ctor (System_Xml_Schema_SymbolsDictionary_o* __this, const MethodInfo* method);
int32_t System_Xml_Schema_SymbolsDictionary__get_Count (System_Xml_Schema_SymbolsDictionary_o* __this, const MethodInfo* method);
bool System_Xml_Schema_SymbolsDictionary__get_IsUpaEnforced (System_Xml_Schema_SymbolsDictionary_o* __this, const MethodInfo* method);
void System_Xml_Schema_SymbolsDictionary__set_IsUpaEnforced (System_Xml_Schema_SymbolsDictionary_o* __this, bool value, const MethodInfo* method);
int32_t System_Xml_Schema_SymbolsDictionary__AddName (System_Xml_Schema_SymbolsDictionary_o* __this, System_Xml_XmlQualifiedName_o* name, Il2CppObject* particle, const MethodInfo* method);
void System_Xml_Schema_SymbolsDictionary__AddNamespaceList (System_Xml_Schema_SymbolsDictionary_o* __this, System_Xml_Schema_NamespaceList_o* list, Il2CppObject* particle, bool allowLocal, const MethodInfo* method);
void System_Xml_Schema_SymbolsDictionary__AddWildcard (System_Xml_Schema_SymbolsDictionary_o* __this, System_String_o* wildcard, Il2CppObject* particle, const MethodInfo* method);
System_Collections_ICollection_o* System_Xml_Schema_SymbolsDictionary__GetNamespaceListSymbols (System_Xml_Schema_SymbolsDictionary_o* __this, System_Xml_Schema_NamespaceList_o* list, const MethodInfo* method);
int32_t System_Xml_Schema_SymbolsDictionary__get_Item (System_Xml_Schema_SymbolsDictionary_o* __this, System_Xml_XmlQualifiedName_o* name, const MethodInfo* method);
bool System_Xml_Schema_SymbolsDictionary__Exists (System_Xml_Schema_SymbolsDictionary_o* __this, System_Xml_XmlQualifiedName_o* name, const MethodInfo* method);
Il2CppObject* System_Xml_Schema_SymbolsDictionary__GetParticle (System_Xml_Schema_SymbolsDictionary_o* __this, int32_t symbol, const MethodInfo* method);
System_String_o* System_Xml_Schema_SymbolsDictionary__NameOf (System_Xml_Schema_SymbolsDictionary_o* __this, int32_t symbol, const MethodInfo* method);
