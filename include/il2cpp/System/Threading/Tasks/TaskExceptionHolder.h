#pragma once

#include "il2cpp.h"

void System_Threading_Tasks_TaskExceptionHolder___ctor (System_Threading_Tasks_TaskExceptionHolder_o* __this, System_Threading_Tasks_Task_o* task, const MethodInfo* method_info);
bool System_Threading_Tasks_TaskExceptionHolder__ShouldFailFastOnUnobservedException (const MethodInfo* method_info);
void System_Threading_Tasks_TaskExceptionHolder__EnsureADUnloadCallbackRegistered (const MethodInfo* method_info);
void System_Threading_Tasks_TaskExceptionHolder__AppDomainUnloadCallback (Il2CppObject* sender, System_EventArgs_o* e, const MethodInfo* method_info);
void System_Threading_Tasks_TaskExceptionHolder__Finalize (System_Threading_Tasks_TaskExceptionHolder_o* __this, const MethodInfo* method_info);
bool System_Threading_Tasks_TaskExceptionHolder__get_ContainsFaultList (System_Threading_Tasks_TaskExceptionHolder_o* __this, const MethodInfo* method_info);
void System_Threading_Tasks_TaskExceptionHolder__Add (System_Threading_Tasks_TaskExceptionHolder_o* __this, Il2CppObject* exceptionObject, bool representsCancellation, const MethodInfo* method_info);
void System_Threading_Tasks_TaskExceptionHolder__SetCancellationException (System_Threading_Tasks_TaskExceptionHolder_o* __this, Il2CppObject* exceptionObject, const MethodInfo* method_info);
void System_Threading_Tasks_TaskExceptionHolder__AddFaultException (System_Threading_Tasks_TaskExceptionHolder_o* __this, Il2CppObject* exceptionObject, const MethodInfo* method_info);
void System_Threading_Tasks_TaskExceptionHolder__MarkAsUnhandled (System_Threading_Tasks_TaskExceptionHolder_o* __this, const MethodInfo* method_info);
void System_Threading_Tasks_TaskExceptionHolder__MarkAsHandled (System_Threading_Tasks_TaskExceptionHolder_o* __this, bool calledFromFinalizer, const MethodInfo* method_info);
System_AggregateException_o* System_Threading_Tasks_TaskExceptionHolder__CreateExceptionObject (System_Threading_Tasks_TaskExceptionHolder_o* __this, bool calledFromFinalizer, System_Exception_o* includeThisException, const MethodInfo* method_info);
System_Collections_ObjectModel_ReadOnlyCollection_ExceptionDispatchInfo__o* System_Threading_Tasks_TaskExceptionHolder__GetExceptionDispatchInfos (System_Threading_Tasks_TaskExceptionHolder_o* __this, const MethodInfo* method_info);
System_Runtime_ExceptionServices_ExceptionDispatchInfo_o* System_Threading_Tasks_TaskExceptionHolder__GetCancellationExceptionDispatchInfo (System_Threading_Tasks_TaskExceptionHolder_o* __this, const MethodInfo* method_info);
void System_Threading_Tasks_TaskExceptionHolder___cctor (const MethodInfo* method_info);