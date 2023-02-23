#pragma once

#include "il2cpp.h"

void App_RelaySortie__Initialize (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie__Setup (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie__CountUnits (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie__SetupUnits (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie__CreateSortiePosition (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie__PrerelocationUnits (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie__RelocationUnitForTakeOver (App_RelaySortie_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_RelaySortie__FindEmptySortiePosition (App_RelaySortie_o* __this, int32_t* x, int32_t* z, const MethodInfo* method);
int32_t App_RelaySortie__CountEmptySortiePosition (App_RelaySortie_o* __this, const MethodInfo* method);
bool App_RelaySortie__FindSortiePositionNearbyFriends (App_RelaySortie_o* __this, int32_t* x, int32_t* z, const MethodInfo* method);
bool App_RelaySortie__IsIgnore (App_RelaySortie_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_RelaySortie__IsIgnoreForTroop (App_RelaySortie_o* __this, App_Unit_o* unit, bool isInBattleMap, const MethodInfo* method);
bool App_RelaySortie__CanSortie (App_RelaySortie_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_RelaySortie__CanToggle (App_RelaySortie_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_RelaySortie__Toggle (App_RelaySortie_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_RelaySortie__CanStartBattle (App_RelaySortie_o* __this, const MethodInfo* method);
bool App_RelaySortie__CanBackTo (App_RelaySortie_o* __this, const MethodInfo* method);
int32_t App_RelaySortie__get_MaxTotalCount (App_RelaySortie_o* __this, const MethodInfo* method);
int32_t App_RelaySortie__get_ReqMyCount (App_RelaySortie_o* __this, const MethodInfo* method);
int32_t App_RelaySortie__get_ReqTotalCountNoClamp (App_RelaySortie_o* __this, const MethodInfo* method);
int32_t App_RelaySortie__get_ReqTotalCount (App_RelaySortie_o* __this, const MethodInfo* method);
int32_t App_RelaySortie__get_TotalCount (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie__set_TotalCount (App_RelaySortie_o* __this, int32_t value, const MethodInfo* method);
int32_t App_RelaySortie__get_MyCount (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie__set_MyCount (App_RelaySortie_o* __this, int32_t value, const MethodInfo* method);
int32_t App_RelaySortie__get_OtherCount (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie___ctor (App_RelaySortie_o* __this, const MethodInfo* method);
void App_RelaySortie___FindSortiePositionNearbyFriends_b__20_0 (App_RelaySortie_o* __this, App_Unit_o* unit, const MethodInfo* method);
