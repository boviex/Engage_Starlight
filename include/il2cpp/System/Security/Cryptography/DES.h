#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_DES___ctor (System_Security_Cryptography_DES_o* __this, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_DES__get_Key (System_Security_Cryptography_DES_o* __this, const MethodInfo* method);
void System_Security_Cryptography_DES__set_Key (System_Security_Cryptography_DES_o* __this, System_Byte_array* value, const MethodInfo* method);
System_Security_Cryptography_DES_o* System_Security_Cryptography_DES__Create (const MethodInfo* method);
bool System_Security_Cryptography_DES__IsWeakKey (System_Byte_array* rgbKey, const MethodInfo* method);
bool System_Security_Cryptography_DES__IsSemiWeakKey (System_Byte_array* rgbKey, const MethodInfo* method);
bool System_Security_Cryptography_DES__IsLegalKeySize (System_Byte_array* rgbKey, const MethodInfo* method);
uint64_t System_Security_Cryptography_DES__QuadWordFromBigEndian (System_Byte_array* block, const MethodInfo* method);
void System_Security_Cryptography_DES___cctor (const MethodInfo* method);
