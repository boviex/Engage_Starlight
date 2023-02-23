#pragma once

#include "il2cpp.h"

void Net_Nex_Screening_Impl___ctor (Net_Nex_Screening_Impl_o* __this, const MethodInfo* method);
NexPlugin_ScreeningDataStoreContentParam_o* Net_Nex_Screening_Impl__GetDataStoreContentParam (Net_Nex_Screening_Impl_o* __this, const MethodInfo* method);
NexPlugin_ScreeningUgcViolationParam_o* Net_Nex_Screening_Impl__GetUgcViolationParam (Net_Nex_Screening_Impl_o* __this, const MethodInfo* method);
int32_t Net_Nex_Screening_Impl__ReportDataStoreContentAsync (Net_Nex_Screening_Impl_o* __this, NexPlugin_ScreeningDataStoreContentParam_o* contentParam, NexPlugin_ScreeningUgcViolationParam_o* violationParam, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_Screening_Impl__ReportDataStoreContentAsyncImpl (Net_Nex_Screening_Impl_o* __this, NexPlugin_ScreeningDataStoreContentParam_o* contentParam, NexPlugin_ScreeningUgcViolationParam_o* violationParam, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
void Net_Nex_Screening_Impl__UnmarkParamsForReportDataStoreContent (Net_Nex_Screening_Impl_o* __this, NexPlugin_ScreeningDataStoreContentParam_o* contentParam, NexPlugin_ScreeningUgcViolationParam_o* violationParam, const MethodInfo* method);
