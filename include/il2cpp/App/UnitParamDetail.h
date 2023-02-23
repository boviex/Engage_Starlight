#pragma once

#include "il2cpp.h"

void App_UnitParamDetail__SetParam (App_UnitParamDetail_o* __this, int32_t total, int32_t noGod, int32_t noEffect, int32_t noHub, int32_t terrain, int32_t support, const MethodInfo* method);
void App_UnitParamDetail__AddParam (App_UnitParamDetail_o* __this, int32_t type, int32_t val, const MethodInfo* method);
void App_UnitParamDetail__SetParamForContinuous (App_UnitParamDetail_o* __this, int32_t godDelta, int32_t skillDelta, int32_t weight, const MethodInfo* method);
int32_t App_UnitParamDetail__GetValue (App_UnitParamDetail_o* __this, int32_t detail, const MethodInfo* method);
int32_t App_UnitParamDetail__GetTotal (App_UnitParamDetail_o* __this, const MethodInfo* method);
int32_t App_UnitParamDetail__GetEnhanceDir (App_UnitParamDetail_o* __this, bool isGodChange, const MethodInfo* method);
void App_UnitParamDetail___ctor (App_UnitParamDetail_o* __this, const MethodInfo* method);
