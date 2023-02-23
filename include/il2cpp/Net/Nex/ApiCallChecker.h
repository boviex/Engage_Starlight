#pragma once

#include "il2cpp.h"

void Net_Nex_ApiCallChecker___ctor (Net_Nex_ApiCallChecker_o* __this, int32_t maxCallCount, Net_Nex_ApiCallChecker_Guideline_array* guidelines, const MethodInfo* method);
bool Net_Nex_ApiCallChecker__Run (Net_Nex_ApiCallChecker_o* __this, int32_t api, const MethodInfo* method);
void Net_Nex_ApiCallChecker__RemoveOldCalledTimes (Net_Nex_ApiCallChecker_o* __this, int32_t api, Net_Nex_ApiCallChecker_Guideline_o* guideline, const MethodInfo* method);
bool Net_Nex_ApiCallChecker__Check (Net_Nex_ApiCallChecker_o* __this, int32_t api, Net_Nex_ApiCallChecker_Guideline_o* guideline, const MethodInfo* method);
void Net_Nex_ApiCallChecker__RecordCalledTime (Net_Nex_ApiCallChecker_o* __this, int32_t api, const MethodInfo* method);
void Net_Nex_ApiCallChecker__Clear (Net_Nex_ApiCallChecker_o* __this, const MethodInfo* method);
void Net_Nex_ApiCallChecker__DbgOnInvalidApi (Net_Nex_ApiCallChecker_o* __this, int32_t api, const MethodInfo* method);
void Net_Nex_ApiCallChecker__DbgOnTooMuchCall (Net_Nex_ApiCallChecker_o* __this, int32_t api, const MethodInfo* method);
void Net_Nex_ApiCallChecker__DbgOnFullCalledTimes (Net_Nex_ApiCallChecker_o* __this, int32_t api, const MethodInfo* method);
