#pragma once

#include "il2cpp.h"

void Mono_Unity_UnityTlsStream___ctor (Mono_Unity_UnityTlsStream_o* __this, System_IO_Stream_o* innerStream, bool leaveInnerStreamOpen, System_Net_Security_SslStream_o* owner, Mono_Security_Interface_MonoTlsSettings_o* settings, Mono_Security_Interface_MonoTlsProvider_o* provider, const MethodInfo* method);
Mono_Net_Security_MobileTlsContext_o* Mono_Unity_UnityTlsStream__CreateContext (Mono_Unity_UnityTlsStream_o* __this, bool serverMode, System_String_o* targetHost, int32_t enabledProtocols, System_Security_Cryptography_X509Certificates_X509Certificate_o* serverCertificate, System_Security_Cryptography_X509Certificates_X509CertificateCollection_o* clientCertificates, bool askForClientCert, const MethodInfo* method);
