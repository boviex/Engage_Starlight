#pragma once

#include "il2cpp.h"

int64_t App_PlayReportCommon__GetBufferSizeImpl (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon__ReportChapterClear (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon__ReportSortie (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon__SendCommon (App_PlayReportCommon_o* __this, System_String_o* sendType, bool isSendHubs, const MethodInfo* method);
void App_PlayReportCommon__ReportBasic (App_PlayReportCommon_o* __this, const MethodInfo* method);
int32_t App_PlayReportCommon__GetProgress (App_PlayReportCommon_o* __this, const MethodInfo* method);
bool App_PlayReportCommon__IsGodCleared (App_PlayReportCommon_o* __this, int32_t idx, const MethodInfo* method);
System_String_o* App_PlayReportCommon__GetChapterType (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon__ReportForce (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon__ReportConfig (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon__ReportUnit (App_PlayReportCommon_o* __this, const MethodInfo* method);
uint32_t App_PlayReportCommon__GetForceMask (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon__ReportUnitImpl (App_PlayReportCommon_o* __this, App_Unit_o* unit, int32_t useReportNo, int32_t inReportCount, const MethodInfo* method);
bool App_PlayReportCommon__IsPlayerUnit (App_PlayReportCommon_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_PlayReportCommon__IsPlayerGodPool (App_PlayReportCommon_o* __this, App_GodUnit_o* godUnit, const MethodInfo* method);
int32_t App_PlayReportCommon__GodPoolLevel (App_PlayReportCommon_o* __this, App_Unit_o* unit, System_String_o* godName, const MethodInfo* method);
void App_PlayReportCommon__ReportReliance (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon__ReportHub (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon__ReportOther (App_PlayReportCommon_o* __this, const MethodInfo* method);
void App_PlayReportCommon___ctor (App_PlayReportCommon_o* __this, const MethodInfo* method);
