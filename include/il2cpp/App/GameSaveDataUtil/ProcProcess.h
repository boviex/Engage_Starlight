#pragma once

#include "il2cpp.h"

void App_GameSaveDataUtil_ProcProcess__CreateBind (App_ProcInst_o* super, int32_t type, int32_t index, int32_t mode, App_GameSaveDataUtil_ProcessResult_o* resultCallback, const MethodInfo* method);
void App_GameSaveDataUtil_ProcProcess__CreateBindWrite (App_ProcInst_o* super, int32_t type, int32_t index, App_GameSaveDataUtil_ProcessResultWithHeader_o* resultCallback, const MethodInfo* method);
void App_GameSaveDataUtil_ProcProcess__CreateBindCopy (App_ProcInst_o* super, int32_t type, int32_t index, int32_t fromType, int32_t fromIndex, App_GameSaveDataUtil_ProcessResultWithHeader_o* resultHeaderCallback, const MethodInfo* method);
void App_GameSaveDataUtil_ProcProcess__CreateBindCommon (App_ProcInst_o* super, App_GameSaveDataUtil_ProcProcess_o* p, const MethodInfo* method);
void App_GameSaveDataUtil_ProcProcess___ctor (App_GameSaveDataUtil_ProcProcess_o* __this, int32_t type, int32_t index, int32_t mode, App_GameSaveDataUtil_ProcessResult_o* resultCallback, const MethodInfo* method);
void App_GameSaveDataUtil_ProcProcess___ctor (App_GameSaveDataUtil_ProcProcess_o* __this, int32_t type, int32_t index, App_GameSaveDataUtil_ProcessResultWithHeader_o* resultHeaderCallback, const MethodInfo* method);
void App_GameSaveDataUtil_ProcProcess___ctor (App_GameSaveDataUtil_ProcProcess_o* __this, int32_t type, int32_t index, int32_t fromType, int32_t fromIndex, App_GameSaveDataUtil_ProcessResultWithHeader_o* resultHeaderCallback, const MethodInfo* method);
void App_GameSaveDataUtil_ProcProcess__Exec (App_GameSaveDataUtil_ProcProcess_o* __this, const MethodInfo* method);
void App_GameSaveDataUtil_ProcProcess__Result (App_GameSaveDataUtil_ProcProcess_o* __this, const MethodInfo* method);
