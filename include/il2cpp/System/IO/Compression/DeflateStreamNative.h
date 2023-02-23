#pragma once

#include "il2cpp.h"

void System_IO_Compression_DeflateStreamNative___ctor (System_IO_Compression_DeflateStreamNative_o* __this, const MethodInfo* method);
System_IO_Compression_DeflateStreamNative_o* System_IO_Compression_DeflateStreamNative__Create (System_IO_Stream_o* compressedStream, int32_t mode, bool gzip, const MethodInfo* method);
void System_IO_Compression_DeflateStreamNative__Finalize (System_IO_Compression_DeflateStreamNative_o* __this, const MethodInfo* method);
void System_IO_Compression_DeflateStreamNative__Dispose (System_IO_Compression_DeflateStreamNative_o* __this, bool disposing, const MethodInfo* method);
void System_IO_Compression_DeflateStreamNative__Flush (System_IO_Compression_DeflateStreamNative_o* __this, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStreamNative__ReadZStream (System_IO_Compression_DeflateStreamNative_o* __this, intptr_t buffer, int32_t length, const MethodInfo* method);
void System_IO_Compression_DeflateStreamNative__WriteZStream (System_IO_Compression_DeflateStreamNative_o* __this, intptr_t buffer, int32_t length, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStreamNative__UnmanagedRead (intptr_t buffer, int32_t length, intptr_t data, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStreamNative__UnmanagedRead (System_IO_Compression_DeflateStreamNative_o* __this, intptr_t buffer, int32_t length, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStreamNative__UnmanagedWrite (intptr_t buffer, int32_t length, intptr_t data, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStreamNative__UnmanagedWrite (System_IO_Compression_DeflateStreamNative_o* __this, intptr_t buffer, int32_t length, const MethodInfo* method);
void System_IO_Compression_DeflateStreamNative__CheckResult (int32_t result, System_String_o* where, const MethodInfo* method);
System_IO_Compression_DeflateStreamNative_SafeDeflateStreamHandle_o* System_IO_Compression_DeflateStreamNative__CreateZStream (int32_t compress, bool gzip, System_IO_Compression_DeflateStreamNative_UnmanagedReadOrWrite_o* feeder, intptr_t data, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStreamNative__CloseZStream (intptr_t stream, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStreamNative__Flush (System_IO_Compression_DeflateStreamNative_SafeDeflateStreamHandle_o* stream, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStreamNative__ReadZStream (System_IO_Compression_DeflateStreamNative_SafeDeflateStreamHandle_o* stream, intptr_t buffer, int32_t length, const MethodInfo* method);
int32_t System_IO_Compression_DeflateStreamNative__WriteZStream (System_IO_Compression_DeflateStreamNative_SafeDeflateStreamHandle_o* stream, intptr_t buffer, int32_t length, const MethodInfo* method);
