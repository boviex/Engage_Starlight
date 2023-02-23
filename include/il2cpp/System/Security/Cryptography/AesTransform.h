#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_AesTransform___ctor (System_Security_Cryptography_AesTransform_o* __this, System_Security_Cryptography_Aes_o* algo, bool encryption, System_Byte_array* key, System_Byte_array* iv, const MethodInfo* method);
void System_Security_Cryptography_AesTransform__ECB (System_Security_Cryptography_AesTransform_o* __this, System_Byte_array* input, System_Byte_array* output, const MethodInfo* method);
uint32_t System_Security_Cryptography_AesTransform__SubByte (System_Security_Cryptography_AesTransform_o* __this, uint32_t a, const MethodInfo* method);
void System_Security_Cryptography_AesTransform__Encrypt128 (System_Security_Cryptography_AesTransform_o* __this, System_Byte_array* indata, System_Byte_array* outdata, System_UInt32_array* ekey, const MethodInfo* method);
void System_Security_Cryptography_AesTransform__Decrypt128 (System_Security_Cryptography_AesTransform_o* __this, System_Byte_array* indata, System_Byte_array* outdata, System_UInt32_array* ekey, const MethodInfo* method);
void System_Security_Cryptography_AesTransform___cctor (const MethodInfo* method);
