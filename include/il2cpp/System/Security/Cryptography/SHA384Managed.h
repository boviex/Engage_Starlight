#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_SHA384Managed___ctor (System_Security_Cryptography_SHA384Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA384Managed__Initialize (System_Security_Cryptography_SHA384Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA384Managed__HashCore (System_Security_Cryptography_SHA384Managed_o* __this, System_Byte_array* rgb, int32_t ibStart, int32_t cbSize, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_SHA384Managed__HashFinal (System_Security_Cryptography_SHA384Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA384Managed__InitializeState (System_Security_Cryptography_SHA384Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA384Managed___HashData (System_Security_Cryptography_SHA384Managed_o* __this, System_Byte_array* partIn, int32_t ibStart, int32_t cbSize, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_SHA384Managed___EndHash (System_Security_Cryptography_SHA384Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_SHA384Managed__SHATransform (uint64_t* expandedBuffer, uint64_t* state, uint8_t* block, const MethodInfo* method);
uint64_t System_Security_Cryptography_SHA384Managed__RotateRight (uint64_t x, int32_t n, const MethodInfo* method);
uint64_t System_Security_Cryptography_SHA384Managed__Ch (uint64_t x, uint64_t y, uint64_t z, const MethodInfo* method);
uint64_t System_Security_Cryptography_SHA384Managed__Maj (uint64_t x, uint64_t y, uint64_t z, const MethodInfo* method);
uint64_t System_Security_Cryptography_SHA384Managed__Sigma_0 (uint64_t x, const MethodInfo* method);
uint64_t System_Security_Cryptography_SHA384Managed__Sigma_1 (uint64_t x, const MethodInfo* method);
uint64_t System_Security_Cryptography_SHA384Managed__sigma_0 (uint64_t x, const MethodInfo* method);
uint64_t System_Security_Cryptography_SHA384Managed__sigma_1 (uint64_t x, const MethodInfo* method);
void System_Security_Cryptography_SHA384Managed__SHA384Expand (uint64_t* x, const MethodInfo* method);
void System_Security_Cryptography_SHA384Managed___cctor (const MethodInfo* method);
