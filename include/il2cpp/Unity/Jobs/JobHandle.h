#pragma once

#include "il2cpp.h"

void Unity_Jobs_JobHandle__Complete (Unity_Jobs_JobHandle_o __this, const MethodInfo* method);
void Unity_Jobs_JobHandle__CompleteAll (Unity_Collections_NativeArray_JobHandle__o jobs, const MethodInfo* method);
bool Unity_Jobs_JobHandle__get_IsCompleted (Unity_Jobs_JobHandle_o __this, const MethodInfo* method);
void Unity_Jobs_JobHandle__ScheduleBatchedJobs (const MethodInfo* method);
void Unity_Jobs_JobHandle__ScheduleBatchedJobsAndComplete (Unity_Jobs_JobHandle_o* job, const MethodInfo* method);
bool Unity_Jobs_JobHandle__ScheduleBatchedJobsAndIsCompleted (Unity_Jobs_JobHandle_o* job, const MethodInfo* method);
void Unity_Jobs_JobHandle__ScheduleBatchedJobsAndCompleteAll (void* jobs, int32_t count, const MethodInfo* method);
Unity_Jobs_JobHandle_o Unity_Jobs_JobHandle__CombineDependencies (Unity_Collections_NativeArray_JobHandle__o jobs, const MethodInfo* method);
Unity_Jobs_JobHandle_o Unity_Jobs_JobHandle__CombineDependenciesInternalPtr (void* jobs, int32_t count, const MethodInfo* method);
void Unity_Jobs_JobHandle__CombineDependenciesInternalPtr_Injected (void* jobs, int32_t count, Unity_Jobs_JobHandle_o* ret, const MethodInfo* method);
