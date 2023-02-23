#pragma once

#include "il2cpp.h"

void App_NexRelay_DownloadSequence___ctor (App_NexRelay_DownloadSequence_o* __this, uint64_t dataId, App_RelayServerData_o* result, App_RelayServerMetaData_o* resultMeta, const MethodInfo* method);
void App_NexRelay_DownloadSequence__Postlogin (App_NexRelay_DownloadSequence_o* __this, const MethodInfo* method);
bool App_NexRelay_DownloadSequence__IsNeedToGetMetaInfo (App_NexRelay_DownloadSequence_o* __this, const MethodInfo* method);
void App_NexRelay_DownloadSequence__GetMetaInfo (App_NexRelay_DownloadSequence_o* __this, const MethodInfo* method);
void App_NexRelay_DownloadSequence__GetMetaInfoResult (App_NexRelay_DownloadSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexPlugin_DataStoreMetaInfo_o* info, const MethodInfo* method);
void App_NexRelay_DownloadSequence__GetData (App_NexRelay_DownloadSequence_o* __this, const MethodInfo* method);
void App_NexRelay_DownloadSequence__GetDataResult (App_NexRelay_DownloadSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, System_Byte_array* data, const MethodInfo* method);
void App_NexRelay_DownloadSequence__ConfirmRetry (App_NexRelay_DownloadSequence_o* __this, const MethodInfo* method);
void App_NexRelay_DownloadSequence__CreateBind (App_ProcInst_o* super, uint64_t dataId, App_RelayServerData_o* result, App_RelayServerMetaData_o* resultMeta, const MethodInfo* method);
