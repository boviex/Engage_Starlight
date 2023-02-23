#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_RIPEMD160Managed___ctor (System_Security_Cryptography_RIPEMD160Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_RIPEMD160Managed__Initialize (System_Security_Cryptography_RIPEMD160Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_RIPEMD160Managed__HashCore (System_Security_Cryptography_RIPEMD160Managed_o* __this, System_Byte_array* rgb, int32_t ibStart, int32_t cbSize, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_RIPEMD160Managed__HashFinal (System_Security_Cryptography_RIPEMD160Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_RIPEMD160Managed__InitializeState (System_Security_Cryptography_RIPEMD160Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_RIPEMD160Managed___HashData (System_Security_Cryptography_RIPEMD160Managed_o* __this, System_Byte_array* partIn, int32_t ibStart, int32_t cbSize, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_RIPEMD160Managed___EndHash (System_Security_Cryptography_RIPEMD160Managed_o* __this, const MethodInfo* method);
void System_Security_Cryptography_RIPEMD160Managed__MDTransform (uint32_t* blockDWords, uint32_t* state, uint8_t* block, const MethodInfo* method);
uint32_t System_Security_Cryptography_RIPEMD160Managed__F (uint32_t x, uint32_t y, uint32_t z, const MethodInfo* method);
uint32_t System_Security_Cryptography_RIPEMD160Managed__G (uint32_t x, uint32_t y, uint32_t z, const MethodInfo* method);
uint32_t System_Security_Cryptography_RIPEMD160Managed__H (uint32_t x, uint32_t y, uint32_t z, const MethodInfo* method);
uint32_t System_Security_Cryptography_RIPEMD160Managed__I (uint32_t x, uint32_t y, uint32_t z, const MethodInfo* method);
uint32_t System_Security_Cryptography_RIPEMD160Managed__J (uint32_t x, uint32_t y, uint32_t z, const MethodInfo* method);
