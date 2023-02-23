#pragma once

#include "il2cpp.h"

System_Threading_SemaphoreSlim_o* System_IO_Stream__EnsureAsyncActiveSemaphoreInitialized (System_IO_Stream_o* __this, const MethodInfo* method);
bool System_IO_Stream__get_CanTimeout (System_IO_Stream_o* __this, const MethodInfo* method);
int32_t System_IO_Stream__get_ReadTimeout (System_IO_Stream_o* __this, const MethodInfo* method);
void System_IO_Stream__set_ReadTimeout (System_IO_Stream_o* __this, int32_t value, const MethodInfo* method);
int32_t System_IO_Stream__get_WriteTimeout (System_IO_Stream_o* __this, const MethodInfo* method);
void System_IO_Stream__set_WriteTimeout (System_IO_Stream_o* __this, int32_t value, const MethodInfo* method);
void System_IO_Stream__Close (System_IO_Stream_o* __this, const MethodInfo* method);
void System_IO_Stream__Dispose (System_IO_Stream_o* __this, const MethodInfo* method);
void System_IO_Stream__Dispose (System_IO_Stream_o* __this, bool disposing, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream__BeginRead (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream__BeginReadInternal (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, bool serializeAsynchronously, const MethodInfo* method);
int32_t System_IO_Stream__EndRead (System_IO_Stream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* System_IO_Stream__ReadAsync (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_int__o* System_IO_Stream__BeginEndReadAsync (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream__BeginWrite (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream__BeginWriteInternal (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, bool serializeAsynchronously, const MethodInfo* method);
void System_IO_Stream__RunReadWriteTaskWhenReady (System_IO_Stream_o* __this, System_Threading_Tasks_Task_o* asyncWaiter, System_IO_Stream_ReadWriteTask_o* readWriteTask, const MethodInfo* method);
void System_IO_Stream__RunReadWriteTask (System_IO_Stream_o* __this, System_IO_Stream_ReadWriteTask_o* readWriteTask, const MethodInfo* method);
void System_IO_Stream__EndWrite (System_IO_Stream_o* __this, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_IO_Stream__WriteAsync (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_IO_Stream__WriteAsync (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
System_Threading_Tasks_Task_o* System_IO_Stream__BeginEndWriteAsync (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, const MethodInfo* method);
int32_t System_IO_Stream__ReadByte (System_IO_Stream_o* __this, const MethodInfo* method);
void System_IO_Stream__WriteByte (System_IO_Stream_o* __this, uint8_t value, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream__BlockingBeginRead (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
int32_t System_IO_Stream__BlockingEndRead (System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream__BlockingBeginWrite (System_IO_Stream_o* __this, System_Byte_array* buffer, int32_t offset, int32_t count, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
void System_IO_Stream__BlockingEndWrite (System_IAsyncResult_o* asyncResult, const MethodInfo* method);
void System_IO_Stream___ctor (System_IO_Stream_o* __this, const MethodInfo* method);
void System_IO_Stream___cctor (const MethodInfo* method);
