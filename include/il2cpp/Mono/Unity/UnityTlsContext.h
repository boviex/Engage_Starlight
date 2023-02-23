#pragma once

#include "il2cpp.h"

void Mono_Unity_UnityTlsContext___ctor (Mono_Unity_UnityTlsContext_o* __this, Mono_Net_Security_MobileAuthenticatedStream_o* parent, bool serverMode, System_String_o* targetHost, int32_t enabledProtocols, System_Security_Cryptography_X509Certificates_X509Certificate_o* serverCertificate, System_Security_Cryptography_X509Certificates_X509CertificateCollection_o* clientCertificates, bool askForClientCert, const MethodInfo* method);
void Mono_Unity_UnityTlsContext__ExtractNativeKeyAndChainFromManagedCertificate (System_Security_Cryptography_X509Certificates_X509Certificate_o* cert, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, Mono_Unity_UnityTls_unitytls_x509list_o** nativeCertChain, Mono_Unity_UnityTls_unitytls_key_o** nativeKey, const MethodInfo* method);
bool Mono_Unity_UnityTlsContext__get_IsAuthenticated (Mono_Unity_UnityTlsContext_o* __this, const MethodInfo* method);
System_Security_Cryptography_X509Certificates_X509Certificate_o* Mono_Unity_UnityTlsContext__get_LocalClientCertificate (Mono_Unity_UnityTlsContext_o* __this, const MethodInfo* method);
System_ValueTuple_int__bool__o Mono_Unity_UnityTlsContext__Read (Mono_Unity_UnityTlsContext_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
System_ValueTuple_int__bool__o Mono_Unity_UnityTlsContext__Write (Mono_Unity_UnityTlsContext_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
void Mono_Unity_UnityTlsContext__Shutdown (Mono_Unity_UnityTlsContext_o* __this, const MethodInfo* method);
void Mono_Unity_UnityTlsContext__Dispose (Mono_Unity_UnityTlsContext_o* __this, bool disposing, const MethodInfo* method);
void Mono_Unity_UnityTlsContext__StartHandshake (Mono_Unity_UnityTlsContext_o* __this, const MethodInfo* method);
bool Mono_Unity_UnityTlsContext__ProcessHandshake (Mono_Unity_UnityTlsContext_o* __this, const MethodInfo* method);
void Mono_Unity_UnityTlsContext__FinishHandshake (Mono_Unity_UnityTlsContext_o* __this, const MethodInfo* method);
intptr_t Mono_Unity_UnityTlsContext__WriteCallback (void* userData, uint8_t* data, intptr_t bufferLen, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
intptr_t Mono_Unity_UnityTlsContext__WriteCallback (Mono_Unity_UnityTlsContext_o* __this, uint8_t* data, intptr_t bufferLen, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
intptr_t Mono_Unity_UnityTlsContext__ReadCallback (void* userData, uint8_t* buffer, intptr_t bufferLen, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
intptr_t Mono_Unity_UnityTlsContext__ReadCallback (Mono_Unity_UnityTlsContext_o* __this, uint8_t* buffer, intptr_t bufferLen, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
uint32_t Mono_Unity_UnityTlsContext__VerifyCallback (void* userData, Mono_Unity_UnityTls_unitytls_x509list_ref_o chain, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
uint32_t Mono_Unity_UnityTlsContext__VerifyCallback (Mono_Unity_UnityTlsContext_o* __this, Mono_Unity_UnityTls_unitytls_x509list_ref_o chain, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
void Mono_Unity_UnityTlsContext__CertificateCallback (void* userData, Mono_Unity_UnityTls_unitytls_tlsctx_o* ctx, uint8_t* cn, intptr_t cnLen, Mono_Unity_UnityTls_unitytls_x509name_o* caList, intptr_t caListLen, Mono_Unity_UnityTls_unitytls_x509list_ref_o* chain, Mono_Unity_UnityTls_unitytls_key_ref_o* key, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
void Mono_Unity_UnityTlsContext__CertificateCallback (Mono_Unity_UnityTlsContext_o* __this, Mono_Unity_UnityTls_unitytls_tlsctx_o* ctx, uint8_t* cn, intptr_t cnLen, Mono_Unity_UnityTls_unitytls_x509name_o* caList, intptr_t caListLen, Mono_Unity_UnityTls_unitytls_x509list_ref_o* chain, Mono_Unity_UnityTls_unitytls_key_ref_o* key, Mono_Unity_UnityTls_unitytls_errorstate_o* errorState, const MethodInfo* method);
