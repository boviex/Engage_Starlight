#pragma once

#include "il2cpp.h"

void Mono_Security_Cryptography_ARC4Managed___ctor (Mono_Security_Cryptography_ARC4Managed_o* __this, const MethodInfo* method);
void Mono_Security_Cryptography_ARC4Managed__Finalize (Mono_Security_Cryptography_ARC4Managed_o* __this, const MethodInfo* method);
void Mono_Security_Cryptography_ARC4Managed__Dispose (Mono_Security_Cryptography_ARC4Managed_o* __this, bool disposing, const MethodInfo* method);
System_Byte_array* Mono_Security_Cryptography_ARC4Managed__get_Key (Mono_Security_Cryptography_ARC4Managed_o* __this, const MethodInfo* method);
void Mono_Security_Cryptography_ARC4Managed__set_Key (Mono_Security_Cryptography_ARC4Managed_o* __this, System_Byte_array* value, const MethodInfo* method);
System_Security_Cryptography_ICryptoTransform_o* Mono_Security_Cryptography_ARC4Managed__CreateEncryptor (Mono_Security_Cryptography_ARC4Managed_o* __this, System_Byte_array* rgbKey, System_Byte_array* rgvIV, const MethodInfo* method);
System_Security_Cryptography_ICryptoTransform_o* Mono_Security_Cryptography_ARC4Managed__CreateDecryptor (Mono_Security_Cryptography_ARC4Managed_o* __this, System_Byte_array* rgbKey, System_Byte_array* rgvIV, const MethodInfo* method);
void Mono_Security_Cryptography_ARC4Managed__GenerateIV (Mono_Security_Cryptography_ARC4Managed_o* __this, const MethodInfo* method);
void Mono_Security_Cryptography_ARC4Managed__GenerateKey (Mono_Security_Cryptography_ARC4Managed_o* __this, const MethodInfo* method);
bool Mono_Security_Cryptography_ARC4Managed__get_CanTransformMultipleBlocks (Mono_Security_Cryptography_ARC4Managed_o* __this, const MethodInfo* method);
int32_t Mono_Security_Cryptography_ARC4Managed__get_InputBlockSize (Mono_Security_Cryptography_ARC4Managed_o* __this, const MethodInfo* method);
int32_t Mono_Security_Cryptography_ARC4Managed__get_OutputBlockSize (Mono_Security_Cryptography_ARC4Managed_o* __this, const MethodInfo* method);
void Mono_Security_Cryptography_ARC4Managed__KeySetup (Mono_Security_Cryptography_ARC4Managed_o* __this, System_Byte_array* key, const MethodInfo* method);
void Mono_Security_Cryptography_ARC4Managed__CheckInput (Mono_Security_Cryptography_ARC4Managed_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, const MethodInfo* method);
int32_t Mono_Security_Cryptography_ARC4Managed__TransformBlock (Mono_Security_Cryptography_ARC4Managed_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, System_Byte_array* outputBuffer, int32_t outputOffset, const MethodInfo* method);
int32_t Mono_Security_Cryptography_ARC4Managed__InternalTransformBlock (Mono_Security_Cryptography_ARC4Managed_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, System_Byte_array* outputBuffer, int32_t outputOffset, const MethodInfo* method);
System_Byte_array* Mono_Security_Cryptography_ARC4Managed__TransformFinalBlock (Mono_Security_Cryptography_ARC4Managed_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, const MethodInfo* method);
