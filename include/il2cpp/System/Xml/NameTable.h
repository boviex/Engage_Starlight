#pragma once

#include "il2cpp.h"

void System_Xml_NameTable___ctor (System_Xml_NameTable_o* __this, const MethodInfo* method);
System_String_o* System_Xml_NameTable__Add (System_Xml_NameTable_o* __this, System_String_o* key, const MethodInfo* method);
System_String_o* System_Xml_NameTable__Add (System_Xml_NameTable_o* __this, System_Char_array* key, int32_t start, int32_t len, const MethodInfo* method);
System_String_o* System_Xml_NameTable__Get (System_Xml_NameTable_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* System_Xml_NameTable__AddEntry (System_Xml_NameTable_o* __this, System_String_o* str, int32_t hashCode, const MethodInfo* method);
void System_Xml_NameTable__Grow (System_Xml_NameTable_o* __this, const MethodInfo* method);
bool System_Xml_NameTable__TextEquals (System_String_o* str1, System_Char_array* str2, int32_t str2Start, int32_t str2Length, const MethodInfo* method);
