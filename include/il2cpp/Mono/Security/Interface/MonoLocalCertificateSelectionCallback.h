#pragma once

#include "il2cpp.h"

void Mono_Security_Interface_MonoLocalCertificateSelectionCallback___ctor (Mono_Security_Interface_MonoLocalCertificateSelectionCallback_o* __this, Il2CppObject* object, intptr_t method, const MethodInfo* method);
System_Security_Cryptography_X509Certificates_X509Certificate_o* Mono_Security_Interface_MonoLocalCertificateSelectionCallback__Invoke (Mono_Security_Interface_MonoLocalCertificateSelectionCallback_o* __this, System_String_o* targetHost, System_Security_Cryptography_X509Certificates_X509CertificateCollection_o* localCertificates, System_Security_Cryptography_X509Certificates_X509Certificate_o* remoteCertificate, System_String_array* acceptableIssuers, const MethodInfo* method);
System_IAsyncResult_o* Mono_Security_Interface_MonoLocalCertificateSelectionCallback__BeginInvoke (Mono_Security_Interface_MonoLocalCertificateSelectionCallback_o* __this, System_String_o* targetHost, System_Security_Cryptography_X509Certificates_X509CertificateCollection_o* localCertificates, System_Security_Cryptography_X509Certificates_X509Certificate_o* remoteCertificate, System_String_array* acceptableIssuers, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo* method);
System_Security_Cryptography_X509Certificates_X509Certificate_o* Mono_Security_Interface_MonoLocalCertificateSelectionCallback__EndInvoke (Mono_Security_Interface_MonoLocalCertificateSelectionCallback_o* __this, System_IAsyncResult_o* result, const MethodInfo* method);