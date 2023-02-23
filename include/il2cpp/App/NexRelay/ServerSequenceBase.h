#pragma once

#include "il2cpp.h"

void App_NexRelay_ServerSequenceBase__Login (App_NexRelay_ServerSequenceBase_o* __this, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__Postlogin (App_NexRelay_ServerSequenceBase_o* __this, int32_t labelWhenCancelled, int32_t labelWhenFailed, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__SetResult (App_NexRelay_ServerSequenceBase_o* __this, int32_t result, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__SetResultFailed (App_NexRelay_ServerSequenceBase_o* __this, NexPlugin_AsyncResult_o* error, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__SetResultFailed (App_NexRelay_ServerSequenceBase_o* __this, int32_t error, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__SetResultFailedCompare (App_NexRelay_ServerSequenceBase_o* __this, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__SetResultFailedNotFound (App_NexRelay_ServerSequenceBase_o* __this, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__Error (App_NexRelay_ServerSequenceBase_o* __this, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__SetMetaBinary (App_NexRelay_ServerSequenceBase_o* __this, System_Collections_Generic_List_byte__o* paramMetaBytes, App_RelayServerMetaData_o* metaData, bool forCompare, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__ComplementTime (App_NexRelay_ServerSequenceBase_o* __this, App_RelayServerMetaData_o* metaData, const MethodInfo* method);
App_RelayServerMetaData_o* App_NexRelay_ServerSequenceBase__GetMetaInfoResultOne (App_NexRelay_ServerSequenceBase_o* __this, NexPlugin_DataStoreMetaInfo_o* info, App_RelayServerMetaData_o* result, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase__SetFromMetaInfo (App_NexRelay_ServerSequenceBase_o* __this, App_RelayServerMetaData_o* metaData, NexPlugin_DataStoreMetaInfo_o* metaInfo, const MethodInfo* method);
bool App_NexRelay_ServerSequenceBase__IsSecret (App_NexRelay_ServerSequenceBase_o* __this, NexPlugin_DataStoreMetaInfo_o* metaInfo, const MethodInfo* method);
void App_NexRelay_ServerSequenceBase___ctor (App_NexRelay_ServerSequenceBase_o* __this, const MethodInfo* method);
