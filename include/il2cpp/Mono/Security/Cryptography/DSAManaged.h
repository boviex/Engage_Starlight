#pragma once

#include "il2cpp.h"

void Mono_Security_Cryptography_DSAManaged___ctor (Mono_Security_Cryptography_DSAManaged_o* __this, int32_t dwKeySize, const MethodInfo* method);
void Mono_Security_Cryptography_DSAManaged__Finalize (Mono_Security_Cryptography_DSAManaged_o* __this, const MethodInfo* method);
void Mono_Security_Cryptography_DSAManaged__Generate (Mono_Security_Cryptography_DSAManaged_o* __this, const MethodInfo* method);
void Mono_Security_Cryptography_DSAManaged__GenerateKeyPair (Mono_Security_Cryptography_DSAManaged_o* __this, const MethodInfo* method);
void Mono_Security_Cryptography_DSAManaged__add (Mono_Security_Cryptography_DSAManaged_o* __this, System_Byte_array* a, System_Byte_array* b, int32_t value, const MethodInfo* method);
void Mono_Security_Cryptography_DSAManaged__GenerateParams (Mono_Security_Cryptography_DSAManaged_o* __this, int32_t keyLength, const MethodInfo* method);
System_Security_Cryptography_RandomNumberGenerator_o* Mono_Security_Cryptography_DSAManaged__get_Random (Mono_Security_Cryptography_DSAManaged_o* __this, const MethodInfo* method);
int32_t Mono_Security_Cryptography_DSAManaged__get_KeySize (Mono_Security_Cryptography_DSAManaged_o* __this, const MethodInfo* method);
bool Mono_Security_Cryptography_DSAManaged__get_PublicOnly (Mono_Security_Cryptography_DSAManaged_o* __this, const MethodInfo* method);
System_Byte_array* Mono_Security_Cryptography_DSAManaged__NormalizeArray (Mono_Security_Cryptography_DSAManaged_o* __this, System_Byte_array* array, const MethodInfo* method);
System_Security_Cryptography_DSAParameters_o Mono_Security_Cryptography_DSAManaged__ExportParameters (Mono_Security_Cryptography_DSAManaged_o* __this, bool includePrivateParameters, const MethodInfo* method);
void Mono_Security_Cryptography_DSAManaged__ImportParameters (Mono_Security_Cryptography_DSAManaged_o* __this, System_Security_Cryptography_DSAParameters_o parameters, const MethodInfo* method);
void Mono_Security_Cryptography_DSAManaged__Dispose (Mono_Security_Cryptography_DSAManaged_o* __this, bool disposing, const MethodInfo* method);
void Mono_Security_Cryptography_DSAManaged__add_KeyGenerated (Mono_Security_Cryptography_DSAManaged_o* __this, Mono_Security_Cryptography_DSAManaged_KeyGeneratedEventHandler_o* value, const MethodInfo* method);
void Mono_Security_Cryptography_DSAManaged__remove_KeyGenerated (Mono_Security_Cryptography_DSAManaged_o* __this, Mono_Security_Cryptography_DSAManaged_KeyGeneratedEventHandler_o* value, const MethodInfo* method);