#pragma once

#include "il2cpp.h"

void System_IO_Compression_GZipStream___ctor (System_IO_Compression_GZipStream_o* __this, System_IO_Stream_o* stream, int32_t mode, const MethodInfo* method);
void System_IO_Compression_GZipStream___ctor (System_IO_Compression_GZipStream_o* __this, System_IO_Stream_o* stream, int32_t mode, bool leaveOpen, const MethodInfo* method);
void System_IO_Compression_GZipStream___ctor (System_IO_Compression_GZipStream_o* __this, System_IO_Stream_o* stream, int32_t compressionLevel, bool leaveOpen, const MethodInfo* method);
bool System_IO_Compression_GZipStream__get_CanRead (System_IO_Compression_GZipStream_o* __this, const MethodInfo* method);
bool System_IO_Compression_GZipStream__get_CanWrite (System_IO_Compression_GZipStream_o* __this, const MethodInfo* method);
bool System_IO_Compression_GZipStream__get_CanSeek (System_IO_Compression_GZipStream_o* __this, const MethodInfo* method);
int64_t System_IO_Compression_GZipStream__get_Length (System_IO_Compression_GZipStream_o* __this, const MethodInfo* method);
int64_t System_IO_Compression_GZipStream__get_Position (System_IO_Compression_GZipStream_o* __this, const MethodInfo* method);
void System_IO_Compression_GZipStream__set_Position (System_IO_Compression_GZipStream_o* __this, int64_t value, const MethodInfo* method);
void System_IO_Compression_GZipStream__Flush (System_IO_Compression_GZipStream_o* __this, const MethodInfo* method);
int64_t System_IO_Compression_GZipStream__Seek (System_IO_Compression_GZipStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method);
void System_IO_Compression_GZipStream__SetLength (System_IO_Compression_GZipStream_o* __this, int64_t value, const MethodInfo* method);
int32_t System_IO_Compression_GZipStream__ReadByte (System_IO_Compression_GZipStream_o* __this, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Compression_GZipStream__BeginRead (System_IO_Compression_GZipStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, System_AsyncCallback_o* asyncCallback, Il2CppObject* asyncState, const MethodInfo* method);
int32_t System_IO_Compression_GZipStream__EndRead (System_IO_Compression_GZipStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
int32_t System_IO_Compression_GZipStream__Read (System_IO_Compression_GZipStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Compression_GZipStream__BeginWrite (System_IO_Compression_GZipStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, System_AsyncCallback_o* asyncCallback, Il2CppObject* asyncState, const MethodInfo* method);
void System_IO_Compression_GZipStream__EndWrite (System_IO_Compression_GZipStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
void System_IO_Compression_GZipStream__Write (System_IO_Compression_GZipStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, const MethodInfo* method);
void System_IO_Compression_GZipStream__Dispose (System_IO_Compression_GZipStream_o* __this, bool disposing, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* System_IO_Compression_GZipStream__ReadAsync (System_IO_Compression_GZipStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_IO_Compression_GZipStream__WriteAsync (System_IO_Compression_GZipStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
void System_IO_Compression_GZipStream__CheckDeflateStream (System_IO_Compression_GZipStream_o* __this, const MethodInfo* method);
void System_IO_Compression_GZipStream__ThrowStreamClosedException (const MethodInfo* method);
