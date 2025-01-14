#pragma once

#include "il2cpp.h"

bool System_Threading_Tasks_TaskScheduler__TryRunInline (System_Threading_Tasks_TaskScheduler_o* __this, System_Threading_Tasks_Task_o* task, bool taskWasPreviouslyQueued, const MethodInfo* method);
bool System_Threading_Tasks_TaskScheduler__TryDequeue (System_Threading_Tasks_TaskScheduler_o* __this, System_Threading_Tasks_Task_o* task, const MethodInfo* method);
void System_Threading_Tasks_TaskScheduler__NotifyWorkItemProgress (System_Threading_Tasks_TaskScheduler_o* __this, const MethodInfo* method);
bool System_Threading_Tasks_TaskScheduler__get_RequiresAtomicStartTransition (System_Threading_Tasks_TaskScheduler_o* __this, const MethodInfo* method);
void System_Threading_Tasks_TaskScheduler__InternalQueueTask (System_Threading_Tasks_TaskScheduler_o* __this, System_Threading_Tasks_Task_o* task, const MethodInfo* method);
void System_Threading_Tasks_TaskScheduler___ctor (System_Threading_Tasks_TaskScheduler_o* __this, const MethodInfo* method);
void System_Threading_Tasks_TaskScheduler__AddToActiveTaskSchedulers (System_Threading_Tasks_TaskScheduler_o* __this, const MethodInfo* method);
System_Threading_Tasks_TaskScheduler_o* System_Threading_Tasks_TaskScheduler__get_Default (const MethodInfo* method);
System_Threading_Tasks_TaskScheduler_o* System_Threading_Tasks_TaskScheduler__get_Current (const MethodInfo* method);
System_Threading_Tasks_TaskScheduler_o* System_Threading_Tasks_TaskScheduler__get_InternalCurrent (const MethodInfo* method);
System_Threading_Tasks_TaskScheduler_o* System_Threading_Tasks_TaskScheduler__FromCurrentSynchronizationContext (const MethodInfo* method);
int32_t System_Threading_Tasks_TaskScheduler__get_Id (System_Threading_Tasks_TaskScheduler_o* __this, const MethodInfo* method);
bool System_Threading_Tasks_TaskScheduler__TryExecuteTask (System_Threading_Tasks_TaskScheduler_o* __this, System_Threading_Tasks_Task_o* task, const MethodInfo* method);
void System_Threading_Tasks_TaskScheduler__PublishUnobservedTaskException (Il2CppObject* sender, System_Threading_Tasks_UnobservedTaskExceptionEventArgs_o* ueea, const MethodInfo* method);
void System_Threading_Tasks_TaskScheduler___cctor (const MethodInfo* method);
