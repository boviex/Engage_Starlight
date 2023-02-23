#pragma once

#include "il2cpp.h"

int32_t App_RingSelectMenu_RingMenuItem__get_RingSortId (App_RingSelectMenu_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingSelectMenu_RingMenuItem__set_RingSortId (App_RingSelectMenu_RingMenuItem_o* __this, int32_t value, const MethodInfo* method);
void App_RingSelectMenu_RingMenuItem___ctor (App_RingSelectMenu_RingMenuItem_o* __this, bool isGod, App_GodUnit_o* god, App_UnitRing_o* ring, int32_t ringSortId, const MethodInfo* method);
bool App_RingSelectMenu_RingMenuItem__IsGod (App_RingSelectMenu_RingMenuItem_o* __this, const MethodInfo* method);
App_GodUnit_o* App_RingSelectMenu_RingMenuItem__GetGod (App_RingSelectMenu_RingMenuItem_o* __this, const MethodInfo* method);
App_UnitRing_o* App_RingSelectMenu_RingMenuItem__GetCommon (App_RingSelectMenu_RingMenuItem_o* __this, const MethodInfo* method);
int32_t App_RingSelectMenu_RingMenuItem__BuildAttribute (App_RingSelectMenu_RingMenuItem_o* __this, const MethodInfo* method);
int32_t App_RingSelectMenu_RingMenuItem__CalcAttribute (App_Unit_o* unit, App_GodUnit_o* god, App_UnitRing_o* ring, const MethodInfo* method);
int32_t App_RingSelectMenu_RingMenuItem__ACall (App_RingSelectMenu_RingMenuItem_o* __this, const MethodInfo* method);
void App_RingSelectMenu_RingMenuItem__OnSelect (App_RingSelectMenu_RingMenuItem_o* __this, const MethodInfo* method);
