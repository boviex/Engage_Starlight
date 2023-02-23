#pragma once

#include "il2cpp.h"

int32_t System_Xml_ValidateNames__ParseNmtoken (System_String_o* s, int32_t offset, const MethodInfo* method);
int32_t System_Xml_ValidateNames__ParseNmtokenNoNamespaces (System_String_o* s, int32_t offset, const MethodInfo* method);
int32_t System_Xml_ValidateNames__ParseNameNoNamespaces (System_String_o* s, int32_t offset, const MethodInfo* method);
int32_t System_Xml_ValidateNames__ParseNCName (System_String_o* s, int32_t offset, const MethodInfo* method);
int32_t System_Xml_ValidateNames__ParseNCName (System_String_o* s, const MethodInfo* method);
int32_t System_Xml_ValidateNames__ParseQName (System_String_o* s, int32_t offset, int32_t* colonOffset, const MethodInfo* method);
void System_Xml_ValidateNames__ParseQNameThrow (System_String_o* s, System_String_o** prefix, System_String_o** localName, const MethodInfo* method);
void System_Xml_ValidateNames__ThrowInvalidName (System_String_o* s, int32_t offsetStartChar, int32_t offsetBadChar, const MethodInfo* method);
System_Exception_o* System_Xml_ValidateNames__GetInvalidNameException (System_String_o* s, int32_t offsetStartChar, int32_t offsetBadChar, const MethodInfo* method);
void System_Xml_ValidateNames__SplitQName (System_String_o* name, System_String_o** prefix, System_String_o** lname, const MethodInfo* method);
void System_Xml_ValidateNames___cctor (const MethodInfo* method);
