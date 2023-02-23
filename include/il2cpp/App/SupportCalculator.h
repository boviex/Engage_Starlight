#pragma once

#include "il2cpp.h"

void App_SupportCalculator___ctor (App_SupportCalculator_o* __this, const MethodInfo* method);
void App_SupportCalculator__Clear (App_SupportCalculator_o* __this, const MethodInfo* method);
void App_SupportCalculator__Setup (App_SupportCalculator_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void App_SupportCalculator__RangeFunction (App_SupportCalculator_o* __this, int32_t x, int32_t z, int32_t range, const MethodInfo* method);
void App_SupportCalculator__Calc (App_SupportCalculator_o* __this, const MethodInfo* method);
int32_t App_SupportCalculator__get_Hit (App_SupportCalculator_o* __this, const MethodInfo* method);
int32_t App_SupportCalculator__get_Avoid (App_SupportCalculator_o* __this, const MethodInfo* method);
int32_t App_SupportCalculator__get_Critical (App_SupportCalculator_o* __this, const MethodInfo* method);
int32_t App_SupportCalculator__get_Secure (App_SupportCalculator_o* __this, const MethodInfo* method);
App_Unit_array* App_SupportCalculator__get_ShowUnits (App_SupportCalculator_o* __this, const MethodInfo* method);
void App_SupportCalculator__RegisterShowUnit (App_SupportCalculator_o* __this, App_Unit_o* unit, int32_t relianceLevel, const MethodInfo* method);
void App_SupportCalculator__InsertShowUnit (App_SupportCalculator_o* __this, int32_t index, App_Unit_o* unit, int32_t relianceLevel, const MethodInfo* method);
