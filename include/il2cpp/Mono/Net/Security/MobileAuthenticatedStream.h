#pragma once

#include "il2cpp.h"

void Mono_Net_Security_MobileAuthenticatedStream___ctor (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_IO_Stream_o* innerStream, bool leaveInnerStreamOpen, System_Net_Security_SslStream_o* owner, Mono_Security_Interface_MonoTlsSettings_o* settings, Mono_Security_Interface_MonoTlsProvider_o* provider, const MethodInfo* method);
Mono_Security_Interface_MonoTlsSettings_o* Mono_Net_Security_MobileAuthenticatedStream__get_Settings (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
Mono_Security_Interface_MonoTlsProvider_o* Mono_Net_Security_MobileAuthenticatedStream__get_Provider (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__CheckThrow (Mono_Net_Security_MobileAuthenticatedStream_o* __this, bool authSuccessCheck, bool shutdownCheck, const MethodInfo* method);
System_Exception_o* Mono_Net_Security_MobileAuthenticatedStream__GetSSPIException (System_Exception_o* e, const MethodInfo* method);
System_Exception_o* Mono_Net_Security_MobileAuthenticatedStream__GetIOException (System_Exception_o* e, System_String_o* message, const MethodInfo* method);
System_Runtime_ExceptionServices_ExceptionDispatchInfo_o* Mono_Net_Security_MobileAuthenticatedStream__SetException (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_Exception_o* e, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__AuthenticateAsClient (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_String_o* targetHost, System_Security_Cryptography_X509Certificates_X509CertificateCollection_o* clientCertificates, int32_t enabledSslProtocols, bool checkCertificateRevocation, const MethodInfo* method);
System_Threading_Tasks_Task_o* Mono_Net_Security_MobileAuthenticatedStream__AuthenticateAsClientAsync (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_String_o* targetHost, System_Security_Cryptography_X509Certificates_X509CertificateCollection_o* clientCertificates, int32_t enabledSslProtocols, bool checkCertificateRevocation, const MethodInfo* method);
System_Net_Security_AuthenticatedStream_o* Mono_Net_Security_MobileAuthenticatedStream__get_AuthenticatedStream (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
System_Threading_Tasks_Task_o* Mono_Net_Security_MobileAuthenticatedStream__ProcessAuthentication (Mono_Net_Security_MobileAuthenticatedStream_o* __this, bool runSynchronously, bool serverMode, System_String_o* targetHost, int32_t enabledProtocols, System_Security_Cryptography_X509Certificates_X509Certificate_o* serverCertificate, System_Security_Cryptography_X509Certificates_X509CertificateCollection_o* clientCertificates, bool clientCertRequired, const MethodInfo* method);
System_IAsyncResult_o* Mono_Net_Security_MobileAuthenticatedStream__BeginRead (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* asyncCallback, Il2CppObject* asyncState, const MethodInfo* method);
int32_t Mono_Net_Security_MobileAuthenticatedStream__EndRead (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_IAsyncResult_o* Mono_Net_Security_MobileAuthenticatedStream__BeginWrite (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* asyncCallback, Il2CppObject* asyncState, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__EndWrite (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
int32_t Mono_Net_Security_MobileAuthenticatedStream__Read (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__Write (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* Mono_Net_Security_MobileAuthenticatedStream__ReadAsync (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* Mono_Net_Security_MobileAuthenticatedStream__WriteAsync (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* Mono_Net_Security_MobileAuthenticatedStream__StartOperation (Mono_Net_Security_MobileAuthenticatedStream_o* __this, int32_t type, Mono_Net_Security_AsyncProtocolRequest_o* asyncRequest, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
int32_t Mono_Net_Security_MobileAuthenticatedStream__InternalRead (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, bool* outWantMore, const MethodInfo* method);
System_ValueTuple_int__bool__o Mono_Net_Security_MobileAuthenticatedStream__InternalRead (Mono_Net_Security_MobileAuthenticatedStream_o* __this, Mono_Net_Security_AsyncProtocolRequest_o* asyncRequest, Mono_Net_Security_BufferOffsetSize_o* internalBuffer, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
bool Mono_Net_Security_MobileAuthenticatedStream__InternalWrite (Mono_Net_Security_MobileAuthenticatedStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
bool Mono_Net_Security_MobileAuthenticatedStream__InternalWrite (Mono_Net_Security_MobileAuthenticatedStream_o* __this, Mono_Net_Security_AsyncProtocolRequest_o* asyncRequest, Mono_Net_Security_BufferOffsetSize2_o* internalBuffer, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* Mono_Net_Security_MobileAuthenticatedStream__InnerRead (Mono_Net_Security_MobileAuthenticatedStream_o* __this, bool sync, int32_t requestedSize, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* Mono_Net_Security_MobileAuthenticatedStream__InnerWrite (Mono_Net_Security_MobileAuthenticatedStream_o* __this, bool sync, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
int32_t Mono_Net_Security_MobileAuthenticatedStream__ProcessHandshake (Mono_Net_Security_MobileAuthenticatedStream_o* __this, int32_t status, const MethodInfo* method);
System_ValueTuple_int__bool__o Mono_Net_Security_MobileAuthenticatedStream__ProcessRead (Mono_Net_Security_MobileAuthenticatedStream_o* __this, Mono_Net_Security_BufferOffsetSize_o* userBuffer, const MethodInfo* method);
System_ValueTuple_int__bool__o Mono_Net_Security_MobileAuthenticatedStream__ProcessWrite (Mono_Net_Security_MobileAuthenticatedStream_o* __this, Mono_Net_Security_BufferOffsetSize_o* userBuffer, const MethodInfo* method);
bool Mono_Net_Security_MobileAuthenticatedStream__get_IsAuthenticated (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__Dispose (Mono_Net_Security_MobileAuthenticatedStream_o* __this, bool disposing, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__Flush (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
System_Security_Cryptography_X509Certificates_X509Certificate_o* Mono_Net_Security_MobileAuthenticatedStream__get_InternalLocalCertificate (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
int64_t Mono_Net_Security_MobileAuthenticatedStream__Seek (Mono_Net_Security_MobileAuthenticatedStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__SetLength (Mono_Net_Security_MobileAuthenticatedStream_o* __this, int64_t value, const MethodInfo* method);
bool Mono_Net_Security_MobileAuthenticatedStream__get_CanRead (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
bool Mono_Net_Security_MobileAuthenticatedStream__get_CanTimeout (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
bool Mono_Net_Security_MobileAuthenticatedStream__get_CanWrite (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
bool Mono_Net_Security_MobileAuthenticatedStream__get_CanSeek (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
int64_t Mono_Net_Security_MobileAuthenticatedStream__get_Length (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
int64_t Mono_Net_Security_MobileAuthenticatedStream__get_Position (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__set_Position (Mono_Net_Security_MobileAuthenticatedStream_o* __this, int64_t value, const MethodInfo* method);
int32_t Mono_Net_Security_MobileAuthenticatedStream__get_ReadTimeout (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__set_ReadTimeout (Mono_Net_Security_MobileAuthenticatedStream_o* __this, int32_t value, const MethodInfo* method);
int32_t Mono_Net_Security_MobileAuthenticatedStream__get_WriteTimeout (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream__set_WriteTimeout (Mono_Net_Security_MobileAuthenticatedStream_o* __this, int32_t value, const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream___cctor (const MethodInfo* method);
void Mono_Net_Security_MobileAuthenticatedStream___InnerWrite_b__67_0 (Mono_Net_Security_MobileAuthenticatedStream_o* __this, const MethodInfo* method);