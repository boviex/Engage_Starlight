#pragma once

#include "il2cpp.h"

void System_Threading_ThreadPoolWorkQueue_QueueSegment__GetIndexes (System_Threading_ThreadPoolWorkQueue_QueueSegment_o* __this, int32_t* upper, int32_t* lower, const MethodInfo* method);
bool System_Threading_ThreadPoolWorkQueue_QueueSegment__CompareExchangeIndexes (System_Threading_ThreadPoolWorkQueue_QueueSegment_o* __this, int32_t* prevUpper, int32_t newUpper, int32_t* prevLower, int32_t newLower, const MethodInfo* method);
void System_Threading_ThreadPoolWorkQueue_QueueSegment___ctor (System_Threading_ThreadPoolWorkQueue_QueueSegment_o* __this, const MethodInfo* method);
bool System_Threading_ThreadPoolWorkQueue_QueueSegment__IsUsedUp (System_Threading_ThreadPoolWorkQueue_QueueSegment_o* __this, const MethodInfo* method);
bool System_Threading_ThreadPoolWorkQueue_QueueSegment__TryEnqueue (System_Threading_ThreadPoolWorkQueue_QueueSegment_o* __this, System_Threading_IThreadPoolWorkItem_o* node, const MethodInfo* method);
bool System_Threading_ThreadPoolWorkQueue_QueueSegment__TryDequeue (System_Threading_ThreadPoolWorkQueue_QueueSegment_o* __this, System_Threading_IThreadPoolWorkItem_o** node, const MethodInfo* method);
