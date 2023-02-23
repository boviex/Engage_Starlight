#pragma once

#include "il2cpp.h"

System_String_o* UniRx_Async_DiagnosticsExtensions__ToStringWithCleanupAsyncStackTrace (System_Exception_o* exception, const MethodInfo* method);
System_String_o* UniRx_Async_DiagnosticsExtensions__CleanupAsyncStackTrace (System_Diagnostics_StackTrace_o* stackTrace, const MethodInfo* method);
bool UniRx_Async_DiagnosticsExtensions__IsAsync (System_Reflection_MethodBase_o* methodInfo, const MethodInfo* method);
bool UniRx_Async_DiagnosticsExtensions__TryResolveStateMachineMethod (System_Reflection_MethodBase_o** method, System_Type_o** declaringType, const MethodInfo* method);
System_String_o* UniRx_Async_DiagnosticsExtensions__BeautifyType (System_Type_o* t, bool shortName, const MethodInfo* method);
bool UniRx_Async_DiagnosticsExtensions__IgnoreLine (System_Reflection_MethodBase_o* methodInfo, const MethodInfo* method);
System_String_o* UniRx_Async_DiagnosticsExtensions__SimplifyPath (System_String_o* path, const MethodInfo* method);
void UniRx_Async_DiagnosticsExtensions___cctor (const MethodInfo* method);
