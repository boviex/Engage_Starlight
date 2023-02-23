#pragma once

#include "il2cpp.h"

bool NexPlugin_Detail_Screening__Screening_ReportDataStoreContentAsync (uint32_t asyncId, intptr_t pNgsFacade, NexPlugin_Detail_Screening_ScreeningDataStoreContentParamInt_o* pContentParam, NexPlugin_Detail_Screening_ScreeningUgcViolationParamInt_o* pViolationParam, int32_t timeOut, const MethodInfo* method);
bool NexPlugin_Detail_Screening__ReportDataStoreContentAsync (uint32_t* asyncId, intptr_t pNgsFacade, NexPlugin_ScreeningDataStoreContentParam_o* contentParam, NexPlugin_ScreeningUgcViolationParam_o* violationParam, int32_t timeOut, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
void NexPlugin_Detail_Screening__Callback (NexPlugin_Detail_AsyncResultInt_o res, Il2CppObject* callback, const MethodInfo* method);
