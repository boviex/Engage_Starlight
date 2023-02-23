#pragma once

#include "il2cpp.h"

Mono_Security_Interface_IMonoSslStream_o* System_Net_Security_SslStream__get_Impl (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
void System_Net_Security_SslStream___ctor (System_Net_Security_SslStream_o* __this, System_IO_Stream_o* innerStream, bool leaveInnerStreamOpen, Mono_Security_Interface_MonoTlsProvider_o* provider, Mono_Security_Interface_MonoTlsSettings_o* settings, const MethodInfo* method);
Mono_Security_Interface_IMonoSslStream_o* System_Net_Security_SslStream__CreateMonoSslStream (System_IO_Stream_o* innerStream, bool leaveInnerStreamOpen, Mono_Security_Interface_MonoTlsProvider_o* provider, Mono_Security_Interface_MonoTlsSettings_o* settings, const MethodInfo* method);
bool System_Net_Security_SslStream__get_IsAuthenticated (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
bool System_Net_Security_SslStream__get_CanSeek (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
bool System_Net_Security_SslStream__get_CanRead (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
bool System_Net_Security_SslStream__get_CanTimeout (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
bool System_Net_Security_SslStream__get_CanWrite (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
int32_t System_Net_Security_SslStream__get_ReadTimeout (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
void System_Net_Security_SslStream__set_ReadTimeout (System_Net_Security_SslStream_o* __this, int32_t value, const MethodInfo* method);
int32_t System_Net_Security_SslStream__get_WriteTimeout (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
void System_Net_Security_SslStream__set_WriteTimeout (System_Net_Security_SslStream_o* __this, int32_t value, const MethodInfo* method);
int64_t System_Net_Security_SslStream__get_Length (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
int64_t System_Net_Security_SslStream__get_Position (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
void System_Net_Security_SslStream__set_Position (System_Net_Security_SslStream_o* __this, int64_t value, const MethodInfo* method);
void System_Net_Security_SslStream__SetLength (System_Net_Security_SslStream_o* __this, int64_t value, const MethodInfo* method);
int64_t System_Net_Security_SslStream__Seek (System_Net_Security_SslStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method);
void System_Net_Security_SslStream__Flush (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
void System_Net_Security_SslStream__CheckDisposed (System_Net_Security_SslStream_o* __this, const MethodInfo* method);
void System_Net_Security_SslStream__Dispose (System_Net_Security_SslStream_o* __this, bool disposing, const MethodInfo* method);
int32_t System_Net_Security_SslStream__Read (System_Net_Security_SslStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
void System_Net_Security_SslStream__Write (System_Net_Security_SslStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
System_IAsyncResult_o* System_Net_Security_SslStream__BeginRead (System_Net_Security_SslStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* asyncCallback, Il2CppObject* asyncState, const MethodInfo* method);
int32_t System_Net_Security_SslStream__EndRead (System_Net_Security_SslStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_IAsyncResult_o* System_Net_Security_SslStream__BeginWrite (System_Net_Security_SslStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* asyncCallback, Il2CppObject* asyncState, const MethodInfo* method);
void System_Net_Security_SslStream__EndWrite (System_Net_Security_SslStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
