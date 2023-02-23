#pragma once

#include "il2cpp.h"

System_String_o* Mono_Unity_UnityTlsProvider__get_Name (Mono_Unity_UnityTlsProvider_o* __this, const MethodInfo* method);
System_Guid_o Mono_Unity_UnityTlsProvider__get_ID (Mono_Unity_UnityTlsProvider_o* __this, const MethodInfo* method);
bool Mono_Unity_UnityTlsProvider__get_SupportsSslStream (Mono_Unity_UnityTlsProvider_o* __this, const MethodInfo* method);
bool Mono_Unity_UnityTlsProvider__get_SupportsMonoExtensions (Mono_Unity_UnityTlsProvider_o* __this, const MethodInfo* method);
bool Mono_Unity_UnityTlsProvider__get_SupportsConnectionInfo (Mono_Unity_UnityTlsProvider_o* __this, const MethodInfo* method);
bool Mono_Unity_UnityTlsProvider__get_SupportsCleanShutdown (Mono_Unity_UnityTlsProvider_o* __this, const MethodInfo* method);
int32_t Mono_Unity_UnityTlsProvider__get_SupportedProtocols (Mono_Unity_UnityTlsProvider_o* __this, const MethodInfo* method);
Mono_Security_Interface_IMonoSslStream_o* Mono_Unity_UnityTlsProvider__CreateSslStream (Mono_Unity_UnityTlsProvider_o* __this, System_IO_Stream_o* innerStream, bool leaveInnerStreamOpen, Mono_Security_Interface_MonoTlsSettings_o* settings, const MethodInfo* method);
Mono_Security_Interface_IMonoSslStream_o* Mono_Unity_UnityTlsProvider__CreateSslStreamInternal (Mono_Unity_UnityTlsProvider_o* __this, System_Net_Security_SslStream_o* sslStream, System_IO_Stream_o* innerStream, bool leaveInnerStreamOpen, Mono_Security_Interface_MonoTlsSettings_o* settings, const MethodInfo* method);
bool Mono_Unity_UnityTlsProvider__ValidateCertificate (Mono_Unity_UnityTlsProvider_o* __this, Mono_Security_Interface_ICertificateValidator2_o* validator, System_String_o* targetHost, bool serverMode, System_Security_Cryptography_X509Certificates_X509CertificateCollection_o* certificates, bool wantsChain, System_Security_Cryptography_X509Certificates_X509Chain_o** chain, int32_t* errors, int32_t* status11, const MethodInfo* method);
void Mono_Unity_UnityTlsProvider___ctor (Mono_Unity_UnityTlsProvider_o* __this, const MethodInfo* method);
