#pragma once

#include "il2cpp.h"

void System_Security_SecurityDocument___ctor (System_Security_SecurityDocument_o* __this, int32_t numData, const MethodInfo* method);
void System_Security_SecurityDocument__GuaranteeSize (System_Security_SecurityDocument_o* __this, int32_t size, const MethodInfo* method);
void System_Security_SecurityDocument__AddString (System_Security_SecurityDocument_o* __this, System_String_o* str, int32_t* position, const MethodInfo* method);
void System_Security_SecurityDocument__AppendString (System_Security_SecurityDocument_o* __this, System_String_o* str, int32_t* position, const MethodInfo* method);
int32_t System_Security_SecurityDocument__EncodedStringSize (System_String_o* str, const MethodInfo* method);
System_String_o* System_Security_SecurityDocument__GetString (System_Security_SecurityDocument_o* __this, int32_t* position, bool bCreate, const MethodInfo* method);
void System_Security_SecurityDocument__AddToken (System_Security_SecurityDocument_o* __this, uint8_t b, int32_t* position, const MethodInfo* method);
System_Security_SecurityElement_o* System_Security_SecurityDocument__GetRootElement (System_Security_SecurityDocument_o* __this, const MethodInfo* method);
System_Security_SecurityElement_o* System_Security_SecurityDocument__GetElement (System_Security_SecurityDocument_o* __this, int32_t position, bool bCreate, const MethodInfo* method);
System_Security_SecurityElement_o* System_Security_SecurityDocument__InternalGetElement (System_Security_SecurityDocument_o* __this, int32_t* position, bool bCreate, const MethodInfo* method);
