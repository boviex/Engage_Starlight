#pragma once

#include "il2cpp.h"

Mono_Math_BigInteger_o* Mono_Math_BigInteger_Kernel__Subtract (Mono_Math_BigInteger_o* big, Mono_Math_BigInteger_o* small, const MethodInfo* method);
void Mono_Math_BigInteger_Kernel__MinusEq (Mono_Math_BigInteger_o* big, Mono_Math_BigInteger_o* small, const MethodInfo* method);
void Mono_Math_BigInteger_Kernel__PlusEq (Mono_Math_BigInteger_o* bi1, Mono_Math_BigInteger_o* bi2, const MethodInfo* method);
int32_t Mono_Math_BigInteger_Kernel__Compare (Mono_Math_BigInteger_o* bi1, Mono_Math_BigInteger_o* bi2, const MethodInfo* method);
uint32_t Mono_Math_BigInteger_Kernel__SingleByteDivideInPlace (Mono_Math_BigInteger_o* n, uint32_t d, const MethodInfo* method);
uint32_t Mono_Math_BigInteger_Kernel__DwordMod (Mono_Math_BigInteger_o* n, uint32_t d, const MethodInfo* method);
Mono_Math_BigInteger_array* Mono_Math_BigInteger_Kernel__DwordDivMod (Mono_Math_BigInteger_o* n, uint32_t d, const MethodInfo* method);
Mono_Math_BigInteger_array* Mono_Math_BigInteger_Kernel__multiByteDivide (Mono_Math_BigInteger_o* bi1, Mono_Math_BigInteger_o* bi2, const MethodInfo* method);
Mono_Math_BigInteger_o* Mono_Math_BigInteger_Kernel__LeftShift (Mono_Math_BigInteger_o* bi, int32_t n, const MethodInfo* method);
Mono_Math_BigInteger_o* Mono_Math_BigInteger_Kernel__RightShift (Mono_Math_BigInteger_o* bi, int32_t n, const MethodInfo* method);
Mono_Math_BigInteger_o* Mono_Math_BigInteger_Kernel__MultiplyByDword (Mono_Math_BigInteger_o* n, uint32_t f, const MethodInfo* method);
void Mono_Math_BigInteger_Kernel__Multiply (System_UInt32_array* x, uint32_t xOffset, uint32_t xLen, System_UInt32_array* y, uint32_t yOffset, uint32_t yLen, System_UInt32_array* d, uint32_t dOffset, const MethodInfo* method);
void Mono_Math_BigInteger_Kernel__MultiplyMod2p32pmod (System_UInt32_array* x, int32_t xOffset, int32_t xLen, System_UInt32_array* y, int32_t yOffest, int32_t yLen, System_UInt32_array* d, int32_t dOffset, int32_t mod, const MethodInfo* method);
uint32_t Mono_Math_BigInteger_Kernel__modInverse (Mono_Math_BigInteger_o* bi, uint32_t modulus, const MethodInfo* method);
Mono_Math_BigInteger_o* Mono_Math_BigInteger_Kernel__modInverse (Mono_Math_BigInteger_o* bi, Mono_Math_BigInteger_o* modulus, const MethodInfo* method);
Mono_Math_BigInteger_1_o* Mono_Math_BigInteger_Kernel__Subtract (Mono_Math_BigInteger_1_o* big, Mono_Math_BigInteger_1_o* small, const MethodInfo* method);
void Mono_Math_BigInteger_Kernel__MinusEq (Mono_Math_BigInteger_1_o* big, Mono_Math_BigInteger_1_o* small, const MethodInfo* method);
void Mono_Math_BigInteger_Kernel__PlusEq (Mono_Math_BigInteger_1_o* bi1, Mono_Math_BigInteger_1_o* bi2, const MethodInfo* method);
int32_t Mono_Math_BigInteger_Kernel__Compare (Mono_Math_BigInteger_1_o* bi1, Mono_Math_BigInteger_1_o* bi2, const MethodInfo* method);
uint32_t Mono_Math_BigInteger_Kernel__SingleByteDivideInPlace (Mono_Math_BigInteger_1_o* n, uint32_t d, const MethodInfo* method);
uint32_t Mono_Math_BigInteger_Kernel__DwordMod (Mono_Math_BigInteger_1_o* n, uint32_t d, const MethodInfo* method);
Mono_Math_BigInteger_1_array* Mono_Math_BigInteger_Kernel__DwordDivMod (Mono_Math_BigInteger_1_o* n, uint32_t d, const MethodInfo* method);
Mono_Math_BigInteger_1_array* Mono_Math_BigInteger_Kernel__multiByteDivide (Mono_Math_BigInteger_1_o* bi1, Mono_Math_BigInteger_1_o* bi2, const MethodInfo* method);
Mono_Math_BigInteger_1_o* Mono_Math_BigInteger_Kernel__LeftShift (Mono_Math_BigInteger_1_o* bi, int32_t n, const MethodInfo* method);
Mono_Math_BigInteger_1_o* Mono_Math_BigInteger_Kernel__RightShift (Mono_Math_BigInteger_1_o* bi, int32_t n, const MethodInfo* method);
void Mono_Math_BigInteger_Kernel__Multiply (System_UInt32_array* x, uint32_t xOffset, uint32_t xLen, System_UInt32_array* y, uint32_t yOffset, uint32_t yLen, System_UInt32_array* d, uint32_t dOffset, const MethodInfo* method);
void Mono_Math_BigInteger_Kernel__MultiplyMod2p32pmod (System_UInt32_array* x, int32_t xOffset, int32_t xLen, System_UInt32_array* y, int32_t yOffest, int32_t yLen, System_UInt32_array* d, int32_t dOffset, int32_t mod, const MethodInfo* method);
uint32_t Mono_Math_BigInteger_Kernel__modInverse (Mono_Math_BigInteger_1_o* bi, uint32_t modulus, const MethodInfo* method);
Mono_Math_BigInteger_1_o* Mono_Math_BigInteger_Kernel__modInverse (Mono_Math_BigInteger_1_o* bi, Mono_Math_BigInteger_1_o* modulus, const MethodInfo* method);
