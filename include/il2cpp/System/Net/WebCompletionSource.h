#pragma once

#include "il2cpp.h"

void System_Net_WebCompletionSource___ctor (System_Net_WebCompletionSource_o* __this, const MethodInfo* method);
bool System_Net_WebCompletionSource__TrySetCompleted (System_Net_WebCompletionSource_o* __this, const MethodInfo* method);
bool System_Net_WebCompletionSource__TrySetCanceled (System_Net_WebCompletionSource_o* __this, const MethodInfo* method);
bool System_Net_WebCompletionSource__TrySetException (System_Net_WebCompletionSource_o* __this, System_Exception_o* error, const MethodInfo* method);
bool System_Net_WebCompletionSource__get_IsCompleted (System_Net_WebCompletionSource_o* __this, const MethodInfo* method);
void System_Net_WebCompletionSource__ThrowOnError (System_Net_WebCompletionSource_o* __this, const MethodInfo* method);
System_Threading_Tasks_Task_bool__o* System_Net_WebCompletionSource__WaitForCompletion (System_Net_WebCompletionSource_o* __this, bool throwOnError, const MethodInfo* method);
