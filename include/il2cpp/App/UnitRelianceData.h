#pragma once

#include "il2cpp.h"

void App_UnitRelianceData___ctor (App_UnitRelianceData_o* __this, App_RelianceExpData_o* relianceExp, const MethodInfo* method);
void App_UnitRelianceData__Reset (App_UnitRelianceData_o* __this, const MethodInfo* method);
void App_UnitRelianceData__ResetMapBegin (App_UnitRelianceData_o* __this, const MethodInfo* method);
void App_UnitRelianceData__AddExp (App_UnitRelianceData_o* __this, int32_t value, const MethodInfo* method);
void App_UnitRelianceData__AddScore (App_UnitRelianceData_o* __this, int32_t value, const MethodInfo* method);
bool App_UnitRelianceData__CanLevelUp (App_UnitRelianceData_o* __this, const MethodInfo* method);
void App_UnitRelianceData__LevelUp (App_UnitRelianceData_o* __this, const MethodInfo* method);
void App_UnitRelianceData__SetLevelAPlus (App_UnitRelianceData_o* __this, const MethodInfo* method);
void App_UnitRelianceData__Serialize (App_UnitRelianceData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_UnitRelianceData__Deserialize (App_UnitRelianceData_o* __this, App_Stream_o* stream, const MethodInfo* method);
int32_t App_UnitRelianceData__get_Level (App_UnitRelianceData_o* __this, const MethodInfo* method);
int32_t App_UnitRelianceData__get_Exp (App_UnitRelianceData_o* __this, const MethodInfo* method);
void App_UnitRelianceData__set_Exp (App_UnitRelianceData_o* __this, int32_t value, const MethodInfo* method);
int32_t App_UnitRelianceData__get_Score (App_UnitRelianceData_o* __this, const MethodInfo* method);
void App_UnitRelianceData__set_Score (App_UnitRelianceData_o* __this, int32_t value, const MethodInfo* method);
int32_t App_UnitRelianceData__GetNextLevelExp (App_UnitRelianceData_o* __this, int32_t currentLevel, const MethodInfo* method);
int32_t App_UnitRelianceData__GetClampExp (App_UnitRelianceData_o* __this, const MethodInfo* method);
int8_t App_UnitRelianceData__ClampExp (App_UnitRelianceData_o* __this, int32_t newExp, const MethodInfo* method);
int8_t App_UnitRelianceData__ClampScore (App_UnitRelianceData_o* __this, int32_t newScore, const MethodInfo* method);
