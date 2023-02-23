#pragma once

#include "il2cpp.h"

void System_Net_Sockets_NetworkStream___ctor (System_Net_Sockets_NetworkStream_o* __this, System_Net_Sockets_Socket_o* socket, const MethodInfo* method);
void System_Net_Sockets_NetworkStream___ctor (System_Net_Sockets_NetworkStream_o* __this, System_Net_Sockets_Socket_o* socket, bool ownsSocket, const MethodInfo* method);
System_Net_Sockets_Socket_o* System_Net_Sockets_NetworkStream__get_InternalSocket (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
bool System_Net_Sockets_NetworkStream__get_CanRead (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
bool System_Net_Sockets_NetworkStream__get_CanSeek (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
bool System_Net_Sockets_NetworkStream__get_CanWrite (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
bool System_Net_Sockets_NetworkStream__get_CanTimeout (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
int32_t System_Net_Sockets_NetworkStream__get_ReadTimeout (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__set_ReadTimeout (System_Net_Sockets_NetworkStream_o* __this, int32_t value, const MethodInfo* method);
int32_t System_Net_Sockets_NetworkStream__get_WriteTimeout (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__set_WriteTimeout (System_Net_Sockets_NetworkStream_o* __this, int32_t value, const MethodInfo* method);
int64_t System_Net_Sockets_NetworkStream__get_Length (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
int64_t System_Net_Sockets_NetworkStream__get_Position (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__set_Position (System_Net_Sockets_NetworkStream_o* __this, int64_t value, const MethodInfo* method);
int64_t System_Net_Sockets_NetworkStream__Seek (System_Net_Sockets_NetworkStream_o* __this, int64_t offset, int32_t origin, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__InitNetworkStream (System_Net_Sockets_NetworkStream_o* __this, System_Net_Sockets_Socket_o* socket, int32_t Access, const MethodInfo* method);
int32_t System_Net_Sockets_NetworkStream__Read (System_Net_Sockets_NetworkStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__Write (System_Net_Sockets_NetworkStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__Dispose (System_Net_Sockets_NetworkStream_o* __this, bool disposing, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__Finalize (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
System_IAsyncResult_o* System_Net_Sockets_NetworkStream__BeginRead (System_Net_Sockets_NetworkStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
int32_t System_Net_Sockets_NetworkStream__EndRead (System_Net_Sockets_NetworkStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_IAsyncResult_o* System_Net_Sockets_NetworkStream__BeginWrite (System_Net_Sockets_NetworkStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__EndWrite (System_Net_Sockets_NetworkStream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__Flush (System_Net_Sockets_NetworkStream_o* __this, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__SetLength (System_Net_Sockets_NetworkStream_o* __this, int64_t value, const MethodInfo* method);
void System_Net_Sockets_NetworkStream__SetSocketTimeoutOption (System_Net_Sockets_NetworkStream_o* __this, int32_t mode, int32_t timeout, bool silent, const MethodInfo* method);
