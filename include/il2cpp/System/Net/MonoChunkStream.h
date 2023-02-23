#pragma once

#include "il2cpp.h"

void System_Net_MonoChunkStream___ctor (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_Net_WebHeaderCollection_o* headers, const MethodInfo* method);
void System_Net_MonoChunkStream___ctor (System_Net_MonoChunkStream_o* __this, System_Net_WebHeaderCollection_o* headers, const MethodInfo* method);
void System_Net_MonoChunkStream__ResetBuffer (System_Net_MonoChunkStream_o* __this, const MethodInfo* method);
void System_Net_MonoChunkStream__WriteAndReadBack (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, int32_t* read, const MethodInfo* method);
int32_t System_Net_MonoChunkStream__Read (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
int32_t System_Net_MonoChunkStream__ReadFromChunks (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
void System_Net_MonoChunkStream__Write (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
void System_Net_MonoChunkStream__InternalWrite (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t* offset, int32_t size, const MethodInfo* method);
bool System_Net_MonoChunkStream__get_WantMore (System_Net_MonoChunkStream_o* __this, const MethodInfo* method);
bool System_Net_MonoChunkStream__get_DataAvailable (System_Net_MonoChunkStream_o* __this, const MethodInfo* method);
int32_t System_Net_MonoChunkStream__get_ChunkLeft (System_Net_MonoChunkStream_o* __this, const MethodInfo* method);
int32_t System_Net_MonoChunkStream__ReadBody (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t* offset, int32_t size, const MethodInfo* method);
int32_t System_Net_MonoChunkStream__GetChunkSize (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t* offset, int32_t size, const MethodInfo* method);
System_String_o* System_Net_MonoChunkStream__RemoveChunkExtension (System_String_o* input, const MethodInfo* method);
int32_t System_Net_MonoChunkStream__ReadCRLF (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t* offset, int32_t size, const MethodInfo* method);
int32_t System_Net_MonoChunkStream__ReadTrailer (System_Net_MonoChunkStream_o* __this, System_Byte_array* buffer, int32_t* offset, int32_t size, const MethodInfo* method);
void System_Net_MonoChunkStream__ThrowProtocolViolation (System_String_o* message, const MethodInfo* method);
