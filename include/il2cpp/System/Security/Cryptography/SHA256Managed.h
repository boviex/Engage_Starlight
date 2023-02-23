#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_SHA256Managed___ctor (System_Security_Cryptography_SHA256Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA256Managed__Initialize (System_Security_Cryptography_SHA256Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA256Managed__HashCore (System_Security_Cryptography_SHA256Managed_o* __this, System_Byte_array* rgb, int32_t ibStart, int32_t cbSize, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_SHA256Managed__HashFinal (System_Security_Cryptography_SHA256Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA256Managed__InitializeState (System_Security_Cryptography_SHA256Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA256Managed___HashData (System_Security_Cryptography_SHA256Managed_o* __this, System_Byte_array* partIn, int32_t ibStart, int32_t cbSize, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_SHA256Managed___EndHash (System_Security_Cryptography_SHA256Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA256Managed__SHATransform (uint32_t* expandedBuffer, uint32_t* state, uint8_t* block, const MethodInfo* method);
uint32_t System_Security_Cryptography_SHA256Managed__RotateRight (uint32_t x, int32_t n, const MethodInfo* method);
uint32_t System_Security_Cryptography_SHA256Managed__Ch (uint32_t x, uint32_t y, uint32_t z, const MethodInfo* method);
uint32_t System_Security_Cryptography_SHA256Managed__Maj (uint32_t x, uint32_t y, uint32_t z, const MethodInfo* method);
uint32_t System_Security_Cryptography_SHA256Managed__sigma_0 (uint32_t x, const MethodInfo* method);
uint32_t System_Security_Cryptography_SHA256Managed__sigma_1 (uint32_t x, const MethodInfo* method);
uint32_t System_Security_Cryptography_SHA256Managed__Sigma_0 (uint32_t x, const MethodInfo* method);
uint32_t System_Security_Cryptography_SHA256Managed__Sigma_1 (uint32_t x, const MethodInfo* method);
void System_Security_Cryptography_SHA256Managed__SHA256Expand (uint32_t* x, const MethodInfo* method);
void System_Security_Cryptography_SHA256Managed___cctor (const MethodInfo* method);
