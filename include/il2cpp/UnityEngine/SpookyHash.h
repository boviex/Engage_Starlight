#pragma once

#include "il2cpp.h"

bool UnityEngine_SpookyHash__AttemptDetectAllowUnalignedRead (const MethodInfo* method);
void UnityEngine_SpookyHash__Hash (void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2, const MethodInfo* method);
void UnityEngine_SpookyHash__End (uint64_t* data, uint64_t* h0, uint64_t* h1, uint64_t* h2, uint64_t* h3, uint64_t* h4, uint64_t* h5, uint64_t* h6, uint64_t* h7, uint64_t* h8, uint64_t* h9, uint64_t* h10, uint64_t* h11, const MethodInfo* method);
void UnityEngine_SpookyHash__EndPartial (uint64_t* h0, uint64_t* h1, uint64_t* h2, uint64_t* h3, uint64_t* h4, uint64_t* h5, uint64_t* h6, uint64_t* h7, uint64_t* h8, uint64_t* h9, uint64_t* h10, uint64_t* h11, const MethodInfo* method);
void UnityEngine_SpookyHash__Rot64 (uint64_t* x, int32_t k, const MethodInfo* method);
void UnityEngine_SpookyHash__Short (void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2, const MethodInfo* method);
void UnityEngine_SpookyHash__ShortMix (uint64_t* h0, uint64_t* h1, uint64_t* h2, uint64_t* h3, const MethodInfo* method);
void UnityEngine_SpookyHash__ShortEnd (uint64_t* h0, uint64_t* h1, uint64_t* h2, uint64_t* h3, const MethodInfo* method);
void UnityEngine_SpookyHash__Mix (uint64_t* data, uint64_t* s0, uint64_t* s1, uint64_t* s2, uint64_t* s3, uint64_t* s4, uint64_t* s5, uint64_t* s6, uint64_t* s7, uint64_t* s8, uint64_t* s9, uint64_t* s10, uint64_t* s11, const MethodInfo* method);
void UnityEngine_SpookyHash__memset (void* dst, int32_t value, uint64_t numberOfBytes, const MethodInfo* method);
void UnityEngine_SpookyHash___cctor (const MethodInfo* method);
