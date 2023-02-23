#pragma once

#include "il2cpp.h"

System_Threading_SynchronizationContext_o* UniRx_Async_PlayerLoopHelper__get_UnitySynchronizationContext (const MethodInfo* method);
int32_t UniRx_Async_PlayerLoopHelper__get_MainThreadId (const MethodInfo* method);
UnityEngine_LowLevel_PlayerLoopSystem_array* UniRx_Async_PlayerLoopHelper__InsertRunner (UnityEngine_LowLevel_PlayerLoopSystem_o loopSystem, System_Type_o* loopRunnerYieldType, UniRx_Async_Internal_ContinuationQueue_o* cq, System_Type_o* loopRunnerType, UniRx_Async_Internal_PlayerLoopRunner_o* runner, const MethodInfo* method);
void UniRx_Async_PlayerLoopHelper__Init (const MethodInfo* method);
void UniRx_Async_PlayerLoopHelper__Initialize (UnityEngine_LowLevel_PlayerLoopSystem_o* playerLoop, const MethodInfo* method);
void UniRx_Async_PlayerLoopHelper__AddAction (int32_t timing, UniRx_Async_IPlayerLoopItem_o* action, const MethodInfo* method);
void UniRx_Async_PlayerLoopHelper__AddContinuation (int32_t timing, System_Action_o* continuation, const MethodInfo* method);
