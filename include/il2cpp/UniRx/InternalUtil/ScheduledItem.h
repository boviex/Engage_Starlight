#pragma once

#include "il2cpp.h"

void UniRx_InternalUtil_ScheduledItem___ctor (UniRx_InternalUtil_ScheduledItem_o* __this, System_Action_o* action, System_TimeSpan_o dueTime, const MethodInfo* method);
System_TimeSpan_o UniRx_InternalUtil_ScheduledItem__get_DueTime (UniRx_InternalUtil_ScheduledItem_o* __this, const MethodInfo* method);
void UniRx_InternalUtil_ScheduledItem__Invoke (UniRx_InternalUtil_ScheduledItem_o* __this, const MethodInfo* method);
int32_t UniRx_InternalUtil_ScheduledItem__CompareTo (UniRx_InternalUtil_ScheduledItem_o* __this, UniRx_InternalUtil_ScheduledItem_o* other, const MethodInfo* method);
bool UniRx_InternalUtil_ScheduledItem__op_LessThan (UniRx_InternalUtil_ScheduledItem_o* left, UniRx_InternalUtil_ScheduledItem_o* right, const MethodInfo* method);
bool UniRx_InternalUtil_ScheduledItem__op_LessThanOrEqual (UniRx_InternalUtil_ScheduledItem_o* left, UniRx_InternalUtil_ScheduledItem_o* right, const MethodInfo* method);
bool UniRx_InternalUtil_ScheduledItem__op_GreaterThan (UniRx_InternalUtil_ScheduledItem_o* left, UniRx_InternalUtil_ScheduledItem_o* right, const MethodInfo* method);
bool UniRx_InternalUtil_ScheduledItem__op_GreaterThanOrEqual (UniRx_InternalUtil_ScheduledItem_o* left, UniRx_InternalUtil_ScheduledItem_o* right, const MethodInfo* method);
bool UniRx_InternalUtil_ScheduledItem__op_Equality (UniRx_InternalUtil_ScheduledItem_o* left, UniRx_InternalUtil_ScheduledItem_o* right, const MethodInfo* method);
bool UniRx_InternalUtil_ScheduledItem__op_Inequality (UniRx_InternalUtil_ScheduledItem_o* left, UniRx_InternalUtil_ScheduledItem_o* right, const MethodInfo* method);
bool UniRx_InternalUtil_ScheduledItem__Equals (UniRx_InternalUtil_ScheduledItem_o* __this, Il2CppObject* obj, const MethodInfo* method);
int32_t UniRx_InternalUtil_ScheduledItem__GetHashCode (UniRx_InternalUtil_ScheduledItem_o* __this, const MethodInfo* method);
System_IDisposable_o* UniRx_InternalUtil_ScheduledItem__get_Cancellation (UniRx_InternalUtil_ScheduledItem_o* __this, const MethodInfo* method);
bool UniRx_InternalUtil_ScheduledItem__get_IsCanceled (UniRx_InternalUtil_ScheduledItem_o* __this, const MethodInfo* method);
