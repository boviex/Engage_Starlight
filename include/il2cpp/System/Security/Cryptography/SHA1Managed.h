#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_SHA1Managed___ctor (System_Security_Cryptography_SHA1Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA1Managed__Initialize (System_Security_Cryptography_SHA1Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA1Managed__HashCore (System_Security_Cryptography_SHA1Managed_o* __this, System_Byte_array* rgb, int32_t ibStart, int32_t cbSize, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_SHA1Managed__HashFinal (System_Security_Cryptography_SHA1Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA1Managed__InitializeState (System_Security_Cryptography_SHA1Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA1Managed___HashData (System_Security_Cryptography_SHA1Managed_o* __this, System_Byte_array* partIn, int32_t ibStart, int32_t cbSize, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_SHA1Managed___EndHash (System_Security_Cryptography_SHA1Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA1Managed__SHATransform (uint32_t* expandedBuffer, uint32_t* state, uint8_t* block, const MethodInfo* method);
void System_Security_Cryptography_SHA1Managed__SHAExpand (uint32_t* x, const MethodInfo* method);
