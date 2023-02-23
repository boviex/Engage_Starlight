#pragma once

#include "il2cpp.h"

void App_NexRelay_DownloadMetaSequence___ctor (App_NexRelay_DownloadMetaSequence_o* __this, System_Collections_Generic_List_ulong__o* dataIds, System_Collections_Generic_List_RelayServerMetaData__o* results, const MethodInfo* method);
void App_NexRelay_DownloadMetaSequence___ctor (App_NexRelay_DownloadMetaSequence_o* __this, System_String_o* dataCode, App_RelayServerMetaData_o* result, const MethodInfo* method);
void App_NexRelay_DownloadMetaSequence__Postlogin (App_NexRelay_DownloadMetaSequence_o* __this, const MethodInfo* method);
void App_NexRelay_DownloadMetaSequence__GetMetaInfo (App_NexRelay_DownloadMetaSequence_o* __this, const MethodInfo* method);
void App_NexRelay_DownloadMetaSequence__GetMetaInfoResult (App_NexRelay_DownloadMetaSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, System_Collections_Generic_List_DataStoreMetaInfo__o* infos, System_Collections_Generic_List_DataStoreResult__o* results, const MethodInfo* method);
void App_NexRelay_DownloadMetaSequence__GetMetaInfoResult (App_NexRelay_DownloadMetaSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexPlugin_DataStoreMetaInfo_o* info, const MethodInfo* method);
void App_NexRelay_DownloadMetaSequence__CreateBind (App_ProcInst_o* super, System_Collections_Generic_List_ulong__o* dataIds, System_Collections_Generic_List_RelayServerMetaData__o* results, const MethodInfo* method);
void App_NexRelay_DownloadMetaSequence__CreateBind (App_ProcInst_o* super, System_String_o* dataCode, App_RelayServerMetaData_o* result, const MethodInfo* method);
void App_NexRelay_DownloadMetaSequence__CreateBindImpl (App_ProcInst_o* super, App_NexRelay_DownloadMetaSequence_o* p, const MethodInfo* method);
