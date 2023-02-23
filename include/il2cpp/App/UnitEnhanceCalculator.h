#pragma once

#include "il2cpp.h"

void App_UnitEnhanceCalculator___ctor (App_UnitEnhanceCalculator_o* __this, const MethodInfo* method);
void App_UnitEnhanceCalculator__Commit1st (App_UnitEnhanceCalculator_o* __this, App_Unit_o* unit, App_UnitItem_o* equipped, const MethodInfo* method);
void App_UnitEnhanceCalculator__Commit2nd (App_UnitEnhanceCalculator_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitEnhanceCalculator__Clear (App_UnitEnhanceCalculator_o* __this, const MethodInfo* method);
void App_UnitEnhanceCalculator__Copy (App_UnitEnhanceCalculator_o* __this, App_UnitEnhanceCalculator_o* enhance, const MethodInfo* method);
int32_t App_UnitEnhanceCalculator__Calculate (App_UnitEnhanceCalculator_o* __this, int32_t index, int32_t value, const MethodInfo* method);
void App_UnitEnhanceCalculator__AddImpl (App_UnitEnhanceCalculator_o* __this, App_CapabilitySbyte_o* capability, bool isNotEnhance, const MethodInfo* method);
void App_UnitEnhanceCalculator__MergeImpl (App_UnitEnhanceCalculator_o* __this, App_UnitEnhanceValues_o* values, bool isNotEnhance, const MethodInfo* method);
bool App_UnitEnhanceCalculator__AddImpl (App_UnitEnhanceCalculator_o* __this, App_Unit_o* unit, App_SkillArray_o* skills, int64_t mask, bool isNotEnhance, const MethodInfo* method);
void App_UnitEnhanceCalculator__Serialize (App_UnitEnhanceCalculator_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_UnitEnhanceCalculator__Deserialize (App_UnitEnhanceCalculator_o* __this, App_Stream_o* stream, const MethodInfo* method);
