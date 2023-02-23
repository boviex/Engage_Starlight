#pragma once

#include "il2cpp.h"

System_Net_WebRequestStream_o* System_Net_WebResponseStream__get_RequestStream (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
System_Net_WebHeaderCollection_o* System_Net_WebResponseStream__get_Headers (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
void System_Net_WebResponseStream__set_Headers (System_Net_WebResponseStream_o* __this, System_Net_WebHeaderCollection_o* value, const MethodInfo* method);
int32_t System_Net_WebResponseStream__get_StatusCode (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
void System_Net_WebResponseStream__set_StatusCode (System_Net_WebResponseStream_o* __this, int32_t value, const MethodInfo* method);
System_String_o* System_Net_WebResponseStream__get_StatusDescription (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
void System_Net_WebResponseStream__set_StatusDescription (System_Net_WebResponseStream_o* __this, System_String_o* value, const MethodInfo* method);
System_Version_o* System_Net_WebResponseStream__get_Version (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
void System_Net_WebResponseStream__set_Version (System_Net_WebResponseStream_o* __this, System_Version_o* value, const MethodInfo* method);
bool System_Net_WebResponseStream__get_KeepAlive (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
void System_Net_WebResponseStream__set_KeepAlive (System_Net_WebResponseStream_o* __this, bool value, const MethodInfo* method);
void System_Net_WebResponseStream___ctor (System_Net_WebResponseStream_o* __this, System_Net_WebRequestStream_o* request, const MethodInfo* method);
int64_t System_Net_WebResponseStream__get_Length (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
bool System_Net_WebResponseStream__get_CanRead (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
bool System_Net_WebResponseStream__get_CanWrite (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
bool System_Net_WebResponseStream__get_ChunkedRead (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
void System_Net_WebResponseStream__set_ChunkedRead (System_Net_WebResponseStream_o* __this, bool value, const MethodInfo* method);
System_Net_MonoChunkStream_o* System_Net_WebResponseStream__get_ChunkStream (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
void System_Net_WebResponseStream__set_ChunkStream (System_Net_WebResponseStream_o* __this, System_Net_MonoChunkStream_o* value, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* System_Net_WebResponseStream__ReadAsync (System_Net_WebResponseStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_ValueTuple_int__int___o* System_Net_WebResponseStream__ProcessRead (System_Net_WebResponseStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* System_Net_WebResponseStream__InnerReadAsync (System_Net_WebResponseStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* System_Net_WebResponseStream__EnsureReadAsync (System_Net_WebResponseStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
bool System_Net_WebResponseStream__CheckAuthHeader (System_Net_WebResponseStream_o* __this, System_String_o* headerName, const MethodInfo* method);
bool System_Net_WebResponseStream__IsNtlmAuth (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
bool System_Net_WebResponseStream__get_ExpectContent (System_Net_WebResponseStream_o* __this, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebResponseStream__Initialize (System_Net_WebResponseStream_o* __this, System_Net_BufferOffsetSize_o* buffer, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebResponseStream__ReadAllAsync (System_Net_WebResponseStream_o* __this, bool resending, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebResponseStream__WriteAsync (System_Net_WebResponseStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
void System_Net_WebResponseStream__Close_internal (System_Net_WebResponseStream_o* __this, bool* disposed, const MethodInfo* method);
System_Net_WebException_o* System_Net_WebResponseStream__GetReadException (System_Net_WebResponseStream_o* __this, int32_t status, System_Exception_o* error, System_String_o* where, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_Net_WebResponseStream__InitReadAsync (System_Net_WebResponseStream_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
bool System_Net_WebResponseStream__GetResponse (System_Net_WebResponseStream_o* __this, System_Net_BufferOffsetSize_o* buffer, int32_t* pos, int32_t* state, const MethodInfo* method);
