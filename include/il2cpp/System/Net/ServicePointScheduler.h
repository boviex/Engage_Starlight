#pragma once

#include "il2cpp.h"

System_Net_ServicePoint_o* System_Net_ServicePointScheduler__get_ServicePoint (System_Net_ServicePointScheduler_o* __this, const MethodInfo* method);
int32_t System_Net_ServicePointScheduler__get_MaxIdleTime (System_Net_ServicePointScheduler_o* __this, const MethodInfo* method);
int32_t System_Net_ServicePointScheduler__get_ConnectionLimit (System_Net_ServicePointScheduler_o* __this, const MethodInfo* method);
void System_Net_ServicePointScheduler___ctor (System_Net_ServicePointScheduler_o* __this, System_Net_ServicePoint_o* servicePoint, int32_t connectionLimit, int32_t maxIdleTime, const MethodInfo* method);
void System_Net_ServicePointScheduler__Run (System_Net_ServicePointScheduler_o* __this, const MethodInfo* method);
void System_Net_ServicePointScheduler__StartScheduler (System_Net_ServicePointScheduler_o* __this, const MethodInfo* method);
void System_Net_ServicePointScheduler__Cleanup (System_Net_ServicePointScheduler_o* __this, const MethodInfo* method);
void System_Net_ServicePointScheduler__RunSchedulerIteration (System_Net_ServicePointScheduler_o* __this, const MethodInfo* method);
bool System_Net_ServicePointScheduler__OperationCompleted (System_Net_ServicePointScheduler_o* __this, System_Net_ServicePointScheduler_ConnectionGroup_o* group, System_Net_WebOperation_o* operation, System_Threading_Tasks_Task_ValueTuple_bool__WebOperation___o* task, const MethodInfo* method);
void System_Net_ServicePointScheduler__CloseIdleConnection (System_Net_ServicePointScheduler_o* __this, System_Net_ServicePointScheduler_ConnectionGroup_o* group, System_Net_WebConnection_o* connection, const MethodInfo* method);
bool System_Net_ServicePointScheduler__SchedulerIteration (System_Net_ServicePointScheduler_o* __this, System_Net_ServicePointScheduler_ConnectionGroup_o* group, const MethodInfo* method);
void System_Net_ServicePointScheduler__RemoveOperation (System_Net_ServicePointScheduler_o* __this, System_Net_WebOperation_o* operation, const MethodInfo* method);
void System_Net_ServicePointScheduler__RemoveIdleConnection (System_Net_ServicePointScheduler_o* __this, System_Net_WebConnection_o* connection, const MethodInfo* method);
void System_Net_ServicePointScheduler__SendRequest (System_Net_ServicePointScheduler_o* __this, System_Net_WebOperation_o* operation, System_String_o* groupName, const MethodInfo* method);
System_Net_ServicePointScheduler_ConnectionGroup_o* System_Net_ServicePointScheduler__GetConnectionGroup (System_Net_ServicePointScheduler_o* __this, System_String_o* name, const MethodInfo* method);
void System_Net_ServicePointScheduler__OnConnectionCreated (System_Net_ServicePointScheduler_o* __this, System_Net_WebConnection_o* connection, const MethodInfo* method);
void System_Net_ServicePointScheduler__OnConnectionClosed (System_Net_ServicePointScheduler_o* __this, System_Net_WebConnection_o* connection, const MethodInfo* method);
