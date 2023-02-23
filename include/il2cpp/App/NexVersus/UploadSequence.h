#pragma once

#include "il2cpp.h"

void App_NexVersus_UploadSequence___ctor (App_NexVersus_UploadSequence_o* __this, System_String_o* playerName, App_VersusServerRankedMetaData_o* metaData, App_VersusServerRankedData_o* data, uint16_t dataType, System_Byte_array* pngBytes, const MethodInfo* method);
void App_NexVersus_UploadSequence__Postlogin (App_NexVersus_UploadSequence_o* __this, const MethodInfo* method);
void App_NexVersus_UploadSequence__UploadPNG (App_NexVersus_UploadSequence_o* __this, const MethodInfo* method);
void App_NexVersus_UploadSequence__PostUploadPNG (App_NexVersus_UploadSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, uint64_t dataId, const MethodInfo* method);
void App_NexVersus_UploadSequence__Post (App_NexVersus_UploadSequence_o* __this, const MethodInfo* method);
void App_NexVersus_UploadSequence__PostResult (App_NexVersus_UploadSequence_o* __this, NexPlugin_AsyncResult_o* asyncResult, uint64_t dataId, const MethodInfo* method);
void App_NexVersus_UploadSequence__CreateBind (App_ProcInst_o* super, System_String_o* playerName, App_VersusServerRankedMetaData_o* metaData, App_VersusServerRankedData_o* data, uint16_t dataType, System_Byte_array* pngBytes, const MethodInfo* method);
