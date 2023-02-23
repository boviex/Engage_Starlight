#pragma once

#include "il2cpp.h"

void System_IO_Compression_DeflateStream___ctor (System_IO_Compression_DeflateStream_o* __this, System_IO_Stream_o* stream, int32_t mode, const MethodInfo* method);
void System_IO_Compression_DeflateStream___ctor (System_IO_Compression_DeflateStream_o* __this, System_IO_Stream_o* stream, int32_t mode, bool leaveOpen, int32_t windowsBits, const MethodInfo* method);
void System_IO_Compression_DeflateStream___ctor (System_IO_Compression_DeflateStream_o* __this, System_IO_Stream_o* compressedStream, int32_t mode, bool leaveOpen, bool gzip, const MethodInfo* method);
void System_IO_Compression_DeflateStream___ctor (System_IO_Compression_DeflateStream_o* __this, System_IO_Stream_o* stream, int32_t compressionLevel, bool leaveOpen, int32_t windowsBits, const MethodInfo* method);
void System_IO_Compression_DeflateStream___ctor (System_IO_Compression_DeflateStream_o* __this, System_IO_Stream_o* stream, int32_t compressionLevel, bool leaveOpen, bool gzip, const MethodInfo* method);
void System_IO_Compression_DeflateStream__Dispose (System_IO_Compression_DeflateStream_o* __this, bool disposing, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStream__ReadInternal (System_IO_Compression_DeflateStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStream__Read (System_IO_Compression_DeflateStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, const MethodInfo* method);
void System_IO_Compression_DeflateStream__WriteInternal (System_IO_Compression_DeflateStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, const MethodInfo* method);
void System_IO_Compression_DeflateStream__Write (System_IO_Compression_DeflateStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, const MethodInfo* method);
void System_IO_Compression_DeflateStream__Flush (System_IO_Compression_DeflateStream_o* __this, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Compression_DeflateStream__BeginRead (System_IO_Compression_DeflateStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, System_AsyncCallback_o* asyncCallback, Il2CppObject* asyncState, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Compression_DeflateStream__BeginWrite (System_IO_Compression_DeflateStream_o* __this, System_Byte_array* array, int32_t offset, int32_t count, System_AsyncCallback_o* asyncCallback, Il2CppObject* asyncState, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStream__EndRead (System_IO_Compression_DeflateStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
void System_IO_Compression_DeflateStream__EndWrite (System_IO_Compression_DeflateStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
int64_t System_IO_Compression_DeflateStream__Seek (System_IO_Compression_DeflateStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method);
void System_IO_Compression_DeflateStream__SetLength (System_IO_Compression_DeflateStream_o* __this, int64_t value, const MethodInfo* method);
bool System_IO_Compression_DeflateStream__get_CanRead (System_IO_Compression_DeflateStream_o* __this, const MethodInfo* method);
bool System_IO_Compression_DeflateStream__get_CanSeek (System_IO_Compression_DeflateStream_o* __this, const MethodInfo* method);
bool System_IO_Compression_DeflateStream__get_CanWrite (System_IO_Compression_DeflateStream_o* __this, const MethodInfo* method);
int64_t System_IO_Compression_DeflateStream__get_Length (System_IO_Compression_DeflateStream_o* __this, const MethodInfo* method);
int64_t System_IO_Compression_DeflateStream__get_Position (System_IO_Compression_DeflateStream_o* __this, const MethodInfo* method);
void System_IO_Compression_DeflateStream__set_Position (System_IO_Compression_DeflateStream_o* __this, int64_t value, const MethodInfo* method);
