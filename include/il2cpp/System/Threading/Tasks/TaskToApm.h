#pragma once

#include "il2cpp.h"

System_IAsyncResult_o* System_Threading_Tasks_TaskToApm__Begin (System_Threading_Tasks_Task_o* task, System_AsyncCallback_o* callback, Il2CppObject* state, const MethodInfo* method);
void System_Threading_Tasks_TaskToApm__End (System_IAsyncResult_o* asyncResult, const MethodInfo* method);
System_Net_HttpWebResponse_o* System_Threading_Tasks_TaskToApm__End_HttpWebResponse_ (System_IAsyncResult_o* asyncResult, const MethodInfo_2068890* method);
int32_t System_Threading_Tasks_TaskToApm__End_int_ (System_IAsyncResult_o* asyncResult, const MethodInfo_20687C0* method);
Il2CppObject* System_Threading_Tasks_TaskToApm__End_object_ (System_IAsyncResult_o* asyncResult, const MethodInfo_2068890* method);
System_IO_Stream_o* System_Threading_Tasks_TaskToApm__End_Stream_ (System_IAsyncResult_o* asyncResult, const MethodInfo_2068890* method);
void System_Threading_Tasks_TaskToApm__InvokeCallbackWhenTaskCompletes (System_Threading_Tasks_Task_o* antecedent, System_AsyncCallback_o* callback, System_IAsyncResult_o* asyncResult, const MethodInfo* method);
