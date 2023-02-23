#pragma once

#include "il2cpp.h"

void System_Net_WebConnectionStream___ctor (System_Net_WebConnectionStream_o* __this, System_Net_WebConnection_o* cnc, System_Net_WebOperation_o* operation, System_IO_Stream_o* stream, const MethodInfo* method);
System_Net_HttpWebRequest_o* System_Net_WebConnectionStream__get_Request (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
System_Net_WebConnection_o* System_Net_WebConnectionStream__get_Connection (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
System_Net_WebOperation_o* System_Net_WebConnectionStream__get_Operation (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
System_Net_ServicePoint_o* System_Net_WebConnectionStream__get_ServicePoint (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
System_IO_Stream_o* System_Net_WebConnectionStream__get_InnerStream (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
bool System_Net_WebConnectionStream__get_CanTimeout (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
int32_t System_Net_WebConnectionStream__get_ReadTimeout (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
void System_Net_WebConnectionStream__set_ReadTimeout (System_Net_WebConnectionStream_o* __this, int32_t value, const MethodInfo* method);
int32_t System_Net_WebConnectionStream__get_WriteTimeout (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
void System_Net_WebConnectionStream__set_WriteTimeout (System_Net_WebConnectionStream_o* __this, int32_t value, const MethodInfo* method);
System_Exception_o* System_Net_WebConnectionStream__GetException (System_Net_WebConnectionStream_o* __this, System_Exception_o* e, const MethodInfo* method);
int32_t System_Net_WebConnectionStream__Read (System_Net_WebConnectionStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
System_IAsyncResult_o* System_Net_WebConnectionStream__BeginRead (System_Net_WebConnectionStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_AsyncCallback_o* cb, Il2CppObject* state, const MethodInfo* method);
int32_t System_Net_WebConnectionStream__EndRead (System_Net_WebConnectionStream_o* __this, System_IAsyncResult_o* r, const MethodInfo* method);
System_IAsyncResult_o* System_Net_WebConnectionStream__BeginWrite (System_Net_WebConnectionStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_AsyncCallback_o* cb, Il2CppObject* state, const MethodInfo* method);
void System_Net_WebConnectionStream__EndWrite (System_Net_WebConnectionStream_o* __this, System_IAsyncResult_o* r, const MethodInfo* method);
void System_Net_WebConnectionStream__Write (System_Net_WebConnectionStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
void System_Net_WebConnectionStream__Flush (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
void System_Net_WebConnectionStream__InternalClose (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
void System_Net_WebConnectionStream__Close (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
int64_t System_Net_WebConnectionStream__Seek (System_Net_WebConnectionStream_o* __this, int64_t a, int32_t b, const MethodInfo* method);
void System_Net_WebConnectionStream__SetLength (System_Net_WebConnectionStream_o* __this, int64_t a, const MethodInfo* method);
bool System_Net_WebConnectionStream__get_CanSeek (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
int64_t System_Net_WebConnectionStream__get_Position (System_Net_WebConnectionStream_o* __this, const MethodInfo* method);
void System_Net_WebConnectionStream__set_Position (System_Net_WebConnectionStream_o* __this, int64_t value, const MethodInfo* method);
