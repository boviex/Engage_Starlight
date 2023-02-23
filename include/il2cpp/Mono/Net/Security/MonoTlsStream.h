#pragma once

#include "il2cpp.h"

System_Net_HttpWebRequest_o* Mono_Net_Security_MonoTlsStream__get_Request (Mono_Net_Security_MonoTlsStream_o* __this, const MethodInfo* method);
int32_t Mono_Net_Security_MonoTlsStream__get_ExceptionStatus (Mono_Net_Security_MonoTlsStream_o* __this, const MethodInfo* method);
bool Mono_Net_Security_MonoTlsStream__get_CertificateValidationFailed (Mono_Net_Security_MonoTlsStream_o* __this, const MethodInfo* method);
void Mono_Net_Security_MonoTlsStream__set_CertificateValidationFailed (Mono_Net_Security_MonoTlsStream_o* __this, bool value, const MethodInfo* method);
void Mono_Net_Security_MonoTlsStream___ctor (Mono_Net_Security_MonoTlsStream_o* __this, System_Net_HttpWebRequest_o* request, System_Net_Sockets_NetworkStream_o* networkStream, const MethodInfo* method);
System_Threading_Tasks_Task_Stream__o* Mono_Net_Security_MonoTlsStream__CreateStream (Mono_Net_Security_MonoTlsStream_o* __this, System_Net_WebConnectionTunnel_o* tunnel, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
