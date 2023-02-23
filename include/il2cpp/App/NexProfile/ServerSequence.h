#pragma once

#include "il2cpp.h"

void App_NexProfile_ServerSequence___ctor (App_NexProfile_ServerSequence_o* __this, int32_t mode, uint64_t principalID, App_ProfileCard_o* profile, const MethodInfo* method);
void App_NexProfile_ServerSequence__Login (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__Postlogin (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__Branch (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__UploadBranch (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__UploadNew (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__Change (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__ChangeMeta (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__SerializeData (App_NexProfile_ServerSequence_o* __this, System_Byte_array** data, uint32_t* size, const MethodInfo* method);
int32_t App_NexProfile_ServerSequence__GetAccessPermission (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__Download (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
App_ProfileCard_o* App_NexProfile_ServerSequence__DeserializeData (App_NexProfile_ServerSequence_o* __this, System_Byte_array* data, const MethodInfo* method);
void App_NexProfile_ServerSequence__Succeeded (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__SetError (App_NexProfile_ServerSequence_o* __this, NexPlugin_AsyncResult_o* error, const MethodInfo* method);
void App_NexProfile_ServerSequence__SetError (App_NexProfile_ServerSequence_o* __this, int32_t error, const MethodInfo* method);
void App_NexProfile_ServerSequence__SetErrorNotFound (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__SetErrorPermissionDenied (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__Error (App_NexProfile_ServerSequence_o* __this, const MethodInfo* method);
void App_NexProfile_ServerSequence__CreateBindDownload (App_ProcInst_o* super, uint64_t principalID, const MethodInfo* method);
void App_NexProfile_ServerSequence__CreateBindUpload (App_ProcInst_o* super, App_ProfileCard_o* profile, const MethodInfo* method);
void App_NexProfile_ServerSequence__CreateBindImpl (App_ProcInst_o* super, int32_t mode, uint64_t principalID, App_ProfileCard_o* profile, const MethodInfo* method);
void App_NexProfile_ServerSequence___UploadBranch_b__11_0 (App_NexProfile_ServerSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, NexPlugin_DataStorePersistenceInfo_o* info, const MethodInfo* method);
void App_NexProfile_ServerSequence___UploadNew_b__12_0 (App_NexProfile_ServerSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, uint64_t dataId, const MethodInfo* method);
void App_NexProfile_ServerSequence___Change_b__13_0 (App_NexProfile_ServerSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, const MethodInfo* method);
void App_NexProfile_ServerSequence___ChangeMeta_b__14_0 (App_NexProfile_ServerSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, const MethodInfo* method);
void App_NexProfile_ServerSequence___Download_b__17_0 (App_NexProfile_ServerSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, System_Byte_array* data, const MethodInfo* method);
