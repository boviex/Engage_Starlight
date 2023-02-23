#pragma once

#include "il2cpp.h"

void Net_Nex_Screening__TryInitialize (const MethodInfo* method);
void Net_Nex_Screening__TryCleanup (const MethodInfo* method);
NexPlugin_ScreeningDataStoreContentParam_o* Net_Nex_Screening__GetDataStoreContentParam (const MethodInfo* method);
NexPlugin_ScreeningUgcViolationParam_o* Net_Nex_Screening__GetUgcViolationParam (const MethodInfo* method);
int32_t Net_Nex_Screening__ReportDataStoreContentAsync (NexPlugin_ScreeningDataStoreContentParam_o* contentParam, NexPlugin_ScreeningUgcViolationParam_o* violationParam, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
