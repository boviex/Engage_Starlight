#pragma once

#include "il2cpp.h"

System_Security_Cryptography_RNGCryptoServiceProvider_o* System_Security_Cryptography_Utils__get_StaticRandomNumberGenerator (const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_Utils__GenerateRandom (int32_t keySize, const MethodInfo* method);
bool System_Security_Cryptography_Utils__HasAlgorithm (int32_t dwCalg, int32_t dwKeySize, const MethodInfo* method);
System_String_o* System_Security_Cryptography_Utils__DiscardWhiteSpaces (System_String_o* inputBuffer, const MethodInfo* method);
System_String_o* System_Security_Cryptography_Utils__DiscardWhiteSpaces (System_String_o* inputBuffer, int32_t inputOffset, int32_t inputCount, const MethodInfo* method);
int32_t System_Security_Cryptography_Utils__ConvertByteArrayToInt (System_Byte_array* input, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_Utils__ConvertIntToByteArray (int32_t dwInput, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_Utils__FixupKeyParity (System_Byte_array* key, const MethodInfo* method);
void System_Security_Cryptography_Utils__DWORDFromLittleEndian (uint32_t* x, int32_t digits, uint8_t* block, const MethodInfo* method);
void System_Security_Cryptography_Utils__DWORDToLittleEndian (System_Byte_array* block, System_UInt32_array* x, int32_t digits, const MethodInfo* method);
void System_Security_Cryptography_Utils__DWORDFromBigEndian (uint32_t* x, int32_t digits, uint8_t* block, const MethodInfo* method);
void System_Security_Cryptography_Utils__DWORDToBigEndian (System_Byte_array* block, System_UInt32_array* x, int32_t digits, const MethodInfo* method);
void System_Security_Cryptography_Utils__QuadWordFromBigEndian (uint64_t* x, int32_t digits, uint8_t* block, const MethodInfo* method);
void System_Security_Cryptography_Utils__QuadWordToBigEndian (System_Byte_array* block, System_UInt64_array* x, int32_t digits, const MethodInfo* method);
bool System_Security_Cryptography_Utils___ProduceLegacyHmacValues (const MethodInfo* method);
