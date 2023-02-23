#pragma once

#include "il2cpp.h"

void System_Net_FtpDataStream___ctor (System_Net_FtpDataStream_o* __this, System_Net_FtpWebRequest_o* request, System_IO_Stream_o* stream, bool isRead, const MethodInfo* method);
bool System_Net_FtpDataStream__get_CanRead (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
bool System_Net_FtpDataStream__get_CanWrite (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
bool System_Net_FtpDataStream__get_CanSeek (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
int64_t System_Net_FtpDataStream__get_Length (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
int64_t System_Net_FtpDataStream__get_Position (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
void System_Net_FtpDataStream__set_Position (System_Net_FtpDataStream_o* __this, int64_t value, const MethodInfo* method);
void System_Net_FtpDataStream__Close (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
void System_Net_FtpDataStream__Flush (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
int64_t System_Net_FtpDataStream__Seek (System_Net_FtpDataStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method);
void System_Net_FtpDataStream__SetLength (System_Net_FtpDataStream_o* __this, int64_t value, const MethodInfo* method);
int32_t System_Net_FtpDataStream__ReadInternal (System_Net_FtpDataStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
System_IAsyncResult_o* System_Net_FtpDataStream__BeginRead (System_Net_FtpDataStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_AsyncCallback_o* cb, Il2CppObject* state, const MethodInfo* method);
int32_t System_Net_FtpDataStream__EndRead (System_Net_FtpDataStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
int32_t System_Net_FtpDataStream__Read (System_Net_FtpDataStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
void System_Net_FtpDataStream__WriteInternal (System_Net_FtpDataStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
System_IAsyncResult_o* System_Net_FtpDataStream__BeginWrite (System_Net_FtpDataStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_AsyncCallback_o* cb, Il2CppObject* state, const MethodInfo* method);
void System_Net_FtpDataStream__EndWrite (System_Net_FtpDataStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
void System_Net_FtpDataStream__Write (System_Net_FtpDataStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
void System_Net_FtpDataStream__Finalize (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
void System_Net_FtpDataStream__System_IDisposable_Dispose (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
void System_Net_FtpDataStream__Dispose (System_Net_FtpDataStream_o* __this, bool disposing, const MethodInfo* method);
void System_Net_FtpDataStream__CheckDisposed (System_Net_FtpDataStream_o* __this, const MethodInfo* method);
