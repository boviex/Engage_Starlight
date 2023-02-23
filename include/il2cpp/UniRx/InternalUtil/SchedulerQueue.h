#pragma once

#include "il2cpp.h"

void UniRx_InternalUtil_SchedulerQueue___ctor (UniRx_InternalUtil_SchedulerQueue_o* __this, const MethodInfo* method);
void UniRx_InternalUtil_SchedulerQueue___ctor (UniRx_InternalUtil_SchedulerQueue_o* __this, int32_t capacity, const MethodInfo* method);
int32_t UniRx_InternalUtil_SchedulerQueue__get_Count (UniRx_InternalUtil_SchedulerQueue_o* __this, const MethodInfo* method);
void UniRx_InternalUtil_SchedulerQueue__Enqueue (UniRx_InternalUtil_SchedulerQueue_o* __this, UniRx_InternalUtil_ScheduledItem_o* scheduledItem, const MethodInfo* method);
bool UniRx_InternalUtil_SchedulerQueue__Remove (UniRx_InternalUtil_SchedulerQueue_o* __this, UniRx_InternalUtil_ScheduledItem_o* scheduledItem, const MethodInfo* method);
UniRx_InternalUtil_ScheduledItem_o* UniRx_InternalUtil_SchedulerQueue__Dequeue (UniRx_InternalUtil_SchedulerQueue_o* __this, const MethodInfo* method);
UniRx_InternalUtil_ScheduledItem_o* UniRx_InternalUtil_SchedulerQueue__Peek (UniRx_InternalUtil_SchedulerQueue_o* __this, const MethodInfo* method);
