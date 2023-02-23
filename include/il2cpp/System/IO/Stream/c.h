#pragma once

#include "il2cpp.h"

void System_IO_Stream___c___cctor (const MethodInfo* method);
void System_IO_Stream___c___ctor (System_IO_Stream___c_o* __this, const MethodInfo* method);
System_Threading_SemaphoreSlim_o* System_IO_Stream___c___EnsureAsyncActiveSemaphoreInitialized_b__4_0 (System_IO_Stream___c_o* __this, const MethodInfo* method);
int32_t System_IO_Stream___c___BeginReadInternal_b__39_0 (System_IO_Stream___c_o* __this, Il2CppObject* _p0_, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream___c___BeginEndReadAsync_b__43_0 (System_IO_Stream___c_o* __this, System_IO_Stream_o* stream, System_IO_Stream_ReadWriteParameters_o args, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
int32_t System_IO_Stream___c___BeginEndReadAsync_b__43_1 (System_IO_Stream___c_o* __this, System_IO_Stream_o* stream, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
int32_t System_IO_Stream___c___BeginWriteInternal_b__46_0 (System_IO_Stream___c_o* __this, Il2CppObject* _p0_, const MethodInfo* method);
void System_IO_Stream___c___RunReadWriteTaskWhenReady_b__47_0 (System_IO_Stream___c_o* __this, System_Threading_Tasks_Task_o* t, Il2CppObject* state, const MethodInfo* method);
System_IAsyncResult_o* System_IO_Stream___c___BeginEndWriteAsync_b__53_0 (System_IO_Stream___c_o* __this, System_IO_Stream_o* stream, System_IO_Stream_ReadWriteParameters_o args, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
System_Threading_Tasks_VoidTaskResult_o System_IO_Stream___c___BeginEndWriteAsync_b__53_1 (System_IO_Stream___c_o* __this, System_IO_Stream_o* stream, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
