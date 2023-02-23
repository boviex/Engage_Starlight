#pragma once

#include "il2cpp.h"

void App_UnitInfoParamManager___ctor (App_UnitInfoParamManager_o* __this, const MethodInfo* method);
void App_UnitInfoParamManager__CopyValue (App_UnitInfoParamManager_o* __this, int32_t type, System_Int32_array** value, const MethodInfo* method);
void App_UnitInfoParamManager__MargeMaxEnhanceFactors (App_UnitInfoParamManager_o* __this, App_UnitEnhanceFactors_o* factors, App_Unit_o* unit, const MethodInfo* method);
void App_UnitInfoParamManager__SetUnit (App_UnitInfoParamManager_o* __this, App_Unit_o* unit, int32_t x, int32_t z, bool isDiffCollect, int32_t f, bool isGodChange, App_GodUnit_o* god, App_UnitRing_o* ring, const MethodInfo* method);
void App_UnitInfoParamManager__ClearUnit (App_UnitInfoParamManager_o* __this, App_GodUnit_o* god, App_UnitRing_o* ring, const MethodInfo* method);
App_UnitParamDetail_o* App_UnitInfoParamManager__GetParam (App_UnitInfoParamManager_o* __this, int32_t type, const MethodInfo* method);
App_UnitParamDetail_o* App_UnitInfoParamManager__GetParam (App_UnitInfoParamManager_o* __this, int32_t type, const MethodInfo* method);
int32_t App_UnitInfoParamManager__ToGrowCapabilityType (int32_t type, const MethodInfo* method);
int32_t App_UnitInfoParamManager__ToValueType (int32_t type, const MethodInfo* method);
App_Unit_o* App_UnitInfoParamManager__GetCalcUnit (App_UnitInfoParamManager_o* __this, const MethodInfo* method);
App_Unit_o* App_UnitInfoParamManager__GetCalcNoGod (App_UnitInfoParamManager_o* __this, const MethodInfo* method);
App_Unit_o* App_UnitInfoParamManager__GetCalcNoEnhance (App_UnitInfoParamManager_o* __this, const MethodInfo* method);
int32_t App_UnitInfoParamManager__GetCapabilityRating (App_UnitInfoParamManager_o* __this, App_Unit_o* unit, App_BattleInfoParam_o* info, const MethodInfo* method);
