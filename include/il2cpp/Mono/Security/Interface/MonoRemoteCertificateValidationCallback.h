#pragma once

#include "il2cpp.h"

void Mono_Security_Interface_MonoRemoteCertificateValidationCallback___ctor (Mono_Security_Interface_MonoRemoteCertificateValidationCallback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
bool Mono_Security_Interface_MonoRemoteCertificateValidationCallback__Invoke (Mono_Security_Interface_MonoRemoteCertificateValidationCallback_o* __this, System_String_o* targetHost, System_Security_Cryptography_X509Certificates_X509Certificate_o* certificate, System_Security_Cryptography_X509Certificates_X509Chain_o* chain, int32_t sslPolicyErrors, const MethodInfo* method);
System_IAsyncResult_o* Mono_Security_Interface_MonoRemoteCertificateValidationCallback__BeginInvoke (Mono_Security_Interface_MonoRemoteCertificateValidationCallback_o* __this, System_String_o* targetHost, System_Security_Cryptography_X509Certificates_X509Certificate_o* certificate, System_Security_Cryptography_X509Certificates_X509Chain_o* chain, int32_t sslPolicyErrors, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
bool Mono_Security_Interface_MonoRemoteCertificateValidationCallback__EndInvoke (Mono_Security_Interface_MonoRemoteCertificateValidationCallback_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);
