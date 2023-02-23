#pragma once

#include "il2cpp.h"

void System_Security_Cryptography_RijndaelManagedTransform___ctor (System_Security_Cryptography_RijndaelManagedTransform_o* __this, System_Byte_array* rgbKey, int32_t mode, System_Byte_array* rgbIV, int32_t blockSize, int32_t feedbackSize, int32_t PaddingValue, int32_t transformMode, const MethodInfo* method);
void System_Security_Cryptography_RijndaelManagedTransform__Dispose (System_Security_Cryptography_RijndaelManagedTransform_o* __this, const MethodInfo* method);
void System_Security_Cryptography_RijndaelManagedTransform__Dispose (System_Security_Cryptography_RijndaelManagedTransform_o* __this, bool disposing, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__get_InputBlockSize (System_Security_Cryptography_RijndaelManagedTransform_o* __this, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__get_OutputBlockSize (System_Security_Cryptography_RijndaelManagedTransform_o* __this, const MethodInfo* method);
bool System_Security_Cryptography_RijndaelManagedTransform__get_CanTransformMultipleBlocks (System_Security_Cryptography_RijndaelManagedTransform_o* __this, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__TransformBlock (System_Security_Cryptography_RijndaelManagedTransform_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, System_Byte_array* outputBuffer, int32_t outputOffset, const MethodInfo* method);
System_Byte_array* System_Security_Cryptography_RijndaelManagedTransform__TransformFinalBlock (System_Security_Cryptography_RijndaelManagedTransform_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, const MethodInfo* method);
void System_Security_Cryptography_RijndaelManagedTransform__Reset (System_Security_Cryptography_RijndaelManagedTransform_o* __this, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__EncryptData (System_Security_Cryptography_RijndaelManagedTransform_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, System_Byte_array** outputBuffer, int32_t outputOffset, int32_t paddingMode, bool fLast, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__DecryptData (System_Security_Cryptography_RijndaelManagedTransform_o* __this, System_Byte_array* inputBuffer, int32_t inputOffset, int32_t inputCount, System_Byte_array** outputBuffer, int32_t outputOffset, int32_t paddingMode, bool fLast, const MethodInfo* method);
void System_Security_Cryptography_RijndaelManagedTransform__Enc (System_Security_Cryptography_RijndaelManagedTransform_o* __this, int32_t* encryptindex, int32_t* encryptKeyExpansion, int32_t* T, int32_t* TF, int32_t* work, int32_t* temp, const MethodInfo* method);
void System_Security_Cryptography_RijndaelManagedTransform__Dec (System_Security_Cryptography_RijndaelManagedTransform_o* __this, int32_t* decryptindex, int32_t* decryptKeyExpansion, int32_t* iT, int32_t* iTF, int32_t* work, int32_t* temp, const MethodInfo* method);
void System_Security_Cryptography_RijndaelManagedTransform__GenerateKeyExpansion (System_Security_Cryptography_RijndaelManagedTransform_o* __this, System_Byte_array* rgbKey, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__rot1 (int32_t val, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__rot2 (int32_t val, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__rot3 (int32_t val, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__SubWord (int32_t a, const MethodInfo* method);
int32_t System_Security_Cryptography_RijndaelManagedTransform__MulX (int32_t x, const MethodInfo* method);
void System_Security_Cryptography_RijndaelManagedTransform___cctor (const MethodInfo* method);
