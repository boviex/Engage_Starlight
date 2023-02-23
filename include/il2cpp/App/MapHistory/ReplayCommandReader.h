#pragma once

#include "il2cpp.h"

void App_MapHistory_ReplayCommandReader___ctor (App_MapHistory_ReplayCommandReader_o* __this, System_Byte_array* commandStreamBuffer, const MethodInfo* method);
App_Unit_o* App_MapHistory_ReplayCommandReader__ReadUnit (App_MapHistory_ReplayCommandReader_o* __this, const MethodInfo* method);
int32_t App_MapHistory_ReplayCommandReader__ReadUnitByIndex (App_MapHistory_ReplayCommandReader_o* __this, const MethodInfo* method);
void App_MapHistory_ReplayCommandReader__ReadUnitItem (App_MapHistory_ReplayCommandReader_o* __this, App_UnitItem_o* item, const MethodInfo* method);
void App_MapHistory_ReplayCommandReader__ReadUnitItemList (App_MapHistory_ReplayCommandReader_o* __this, App_UnitItemList_o* itemList, const MethodInfo* method);
void App_MapHistory_ReplayCommandReader__ReadMultiTargets (App_MapHistory_ReplayCommandReader_o* __this, App_MapMind_MultiTargets_o* targets, const MethodInfo* method);
int32_t App_MapHistory_ReplayCommandReader__ReadForce (App_MapHistory_ReplayCommandReader_o* __this, const MethodInfo* method);
