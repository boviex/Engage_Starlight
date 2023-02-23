#pragma once

#include "il2cpp.h"

void System_Net_WebRequestStream___ctor (System_Net_WebRequestStream_o* __this, System_Net_WebConnection_o* connection, System_Net_WebOperation_o* operation, System_IO_Stream_o* stream, System_Net_WebConnectionTunnel_o* tunnel, const MethodInfo* method);
bool System_Net_WebRequestStream__get_KeepAlive (System_Net_WebRequestStream_o* __this, const MethodInfo* method);
int64_t System_Net_WebRequestStream__get_Length (System_Net_WebRequestStream_o* __this, const MethodInfo* method);
bool System_Net_WebRequestStream__get_CanRead (System_Net_WebRequestStream_o* __this, const MethodInfo* method);
bool System_Net_WebRequestStream__get_CanWrite (System_Net_WebRequestStream_o* __this, const MethodInfo* method);
bool System_Net_WebRequestStream__get_HasWriteBuffer (System_Net_WebRequestStream_o* __this, const MethodInfo* method);
int32_t System_Net_WebRequestStream__get_WriteBufferLength (System_Net_WebRequestStream_o* __this, const MethodInfo* method);
System_Net_BufferOffsetSize_o* System_Net_WebRequestStream__GetWriteBuffer (System_Net_WebRequestStream_o* __this, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebRequestStream__FinishWriting (System_Net_WebRequestStream_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebRequestStream__WriteAsync (System_Net_WebRequestStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebRequestStream__ProcessWrite (System_Net_WebRequestStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
void System_Net_WebRequestStream__CheckWriteOverflow (System_Net_WebRequestStream_o* __this, int64_t contentLength, int64_t totalWritten, int64_t size, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebRequestStream__Initialize (System_Net_WebRequestStream_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebRequestStream__SetHeadersAsync (System_Net_WebRequestStream_o* __this, bool setInternalLength, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebRequestStream__WriteRequestAsync (System_Net_WebRequestStream_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebRequestStream__WriteChunkTrailer_inner (System_Net_WebRequestStream_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebRequestStream__WriteChunkTrailer (System_Net_WebRequestStream_o* __this, const MethodInfo* method);
void System_Net_WebRequestStream__KillBuffer (System_Net_WebRequestStream_o* __this, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* System_Net_WebRequestStream__ReadAsync (System_Net_WebRequestStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
void System_Net_WebRequestStream__Close_internal (System_Net_WebRequestStream_o* __this, bool* disposed, const MethodInfo* method);
void System_Net_WebRequestStream___cctor (const MethodInfo* method);
