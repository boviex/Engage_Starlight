#pragma once

#include "il2cpp.h"

void System_Net_FileWebStream___ctor (System_Net_FileWebStream_o* __this, System_Net_FileWebRequest_o* request, System_String_o* path, int32_t mode, int32_t access, int32_t sharing, const MethodInfo* method);
void System_Net_FileWebStream___ctor (System_Net_FileWebStream_o* __this, System_Net_FileWebRequest_o* request, System_String_o* path, int32_t mode, int32_t access, int32_t sharing, int32_t length, bool async, const MethodInfo* method);
void System_Net_FileWebStream__Dispose (System_Net_FileWebStream_o* __this, bool disposing, const MethodInfo* method);
void System_Net_FileWebStream__System_Net_ICloseEx_CloseEx (System_Net_FileWebStream_o* __this, int32_t closeState, const MethodInfo* method);
int32_t System_Net_FileWebStream__Read (System_Net_FileWebStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
void System_Net_FileWebStream__Write (System_Net_FileWebStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, const MethodInfo* method);
System_IAsyncResult_o* System_Net_FileWebStream__BeginRead (System_Net_FileWebStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
int32_t System_Net_FileWebStream__EndRead (System_Net_FileWebStream_o* __this, System_IAsyncResult_o* ar, const MethodInfo* method);
System_IAsyncResult_o* System_Net_FileWebStream__BeginWrite (System_Net_FileWebStream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t size, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
void System_Net_FileWebStream__EndWrite (System_Net_FileWebStream_o* __this, System_IAsyncResult_o* ar, const MethodInfo* method);
void System_Net_FileWebStream__CheckError (System_Net_FileWebStream_o* __this, const MethodInfo* method);
