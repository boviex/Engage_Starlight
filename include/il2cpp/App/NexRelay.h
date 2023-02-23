#pragma once

#include "il2cpp.h"

void App_NexRelay__OnCreate (App_NexRelay_o* __this, const MethodInfo* method);
void App_NexRelay__UploadNew (App_NexRelay_o* __this, App_ProcInst_o* super, System_String_o* playerName, App_RelayServerMetaData_o* metaData, App_RelayServerData_o* data, bool isSecret, const MethodInfo* method);
void App_NexRelay__UploadTakeOver (App_NexRelay_o* __this, App_ProcInst_o* super, uint64_t dataId, App_RelayServerMetaData_o* oldMetaData, System_String_o* playerName, App_RelayServerMetaData_o* newMetaData, App_RelayServerData_o* data, bool isChangeToPublic, const MethodInfo* method);
void App_NexRelay__Search (App_NexRelay_o* __this, App_ProcInst_o* super, System_Collections_Generic_List_RelayServerMetaData__o* results, const MethodInfo* method);
void App_NexRelay__SetPlaying (App_NexRelay_o* __this, App_ProcInst_o* super, uint64_t dataId, App_RelayServerMetaData_o* oldMetaData, App_RelayServerMetaData_o* newMetaData, const MethodInfo* method);
void App_NexRelay__Download (App_NexRelay_o* __this, App_ProcInst_o* super, uint64_t dataId, App_RelayServerData_o* result, App_RelayServerMetaData_o* resultMeta, const MethodInfo* method);
void App_NexRelay__DownloadMeta (App_NexRelay_o* __this, App_ProcInst_o* super, System_Collections_Generic_List_ulong__o* dataIds, System_Collections_Generic_List_RelayServerMetaData__o* results, const MethodInfo* method);
void App_NexRelay__DownloadMeta (App_NexRelay_o* __this, App_ProcInst_o* super, System_String_o* dataCode, App_RelayServerMetaData_o* result, const MethodInfo* method);
bool App_NexRelay__TryGetPrincipalId (App_NexRelay_o* __this, uint64_t* principalId, const MethodInfo* method);
int32_t App_NexRelay__get_LastResult (App_NexRelay_o* __this, const MethodInfo* method);
uint64_t App_NexRelay__get_LastUploadedDataId (App_NexRelay_o* __this, const MethodInfo* method);
void App_NexRelay__CloseWaitMessage (App_ProcInst_o* super, bool isSuccess, const MethodInfo* method);
void App_NexRelay___ctor (App_NexRelay_o* __this, const MethodInfo* method);
