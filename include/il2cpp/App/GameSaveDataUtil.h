#pragma once

#include "il2cpp.h"

bool App_GameSaveDataUtil__IsExist (int32_t type, const MethodInfo* method);
bool App_GameSaveDataUtil__IsExist (int32_t type, int32_t index, const MethodInfo* method);
bool App_GameSaveDataUtil__IsExist (System_String_o* path, const MethodInfo* method);
bool App_GameSaveDataUtil__ReadHeader (int32_t type, int32_t index, App_GameSaveDataHeader_o* header, const MethodInfo* method);
void App_GameSaveDataUtil__Read (App_ProcInst_o* super, int32_t type, int32_t index, App_GameSaveDataUtil_ProcessResult_o* resultCallback, const MethodInfo* method);
void App_GameSaveDataUtil__ReadGlobal (App_ProcInst_o* super, const MethodInfo* method);
void App_GameSaveDataUtil__Write (App_ProcInst_o* super, int32_t type, int32_t index, App_GameSaveDataUtil_ProcessResultWithHeader_o* resultHeaderCallback, const MethodInfo* method);
void App_GameSaveDataUtil__Delete (App_ProcInst_o* super, int32_t type, int32_t index, App_GameSaveDataUtil_ProcessResult_o* resultCallback, const MethodInfo* method);
void App_GameSaveDataUtil__CommitTemporary (App_ProcInst_o* super, const MethodInfo* method);
void App_GameSaveDataUtil__DeleteAll (App_ProcInst_o* super, const MethodInfo* method);
void App_GameSaveDataUtil__Copy (App_ProcInst_o* super, int32_t type, int32_t index, int32_t fromType, int32_t fromIndex, App_GameSaveDataUtil_ProcessResultWithHeader_o* resultHeaderCallback, const MethodInfo* method);
void App_GameSaveDataUtil__TryNotifyNormalizeContentsOccurred (App_ProcInst_o* super, const MethodInfo* method);
