#pragma once

#include "il2cpp.h"

void App_ItemGainSequence___ctor (App_ItemGainSequence_o* __this, App_UnitItem_o* unitItem, App_Unit_o* unit, System_String_o* label, int32_t count, const MethodInfo* method);
void App_ItemGainSequence__Gain (App_ItemGainSequence_o* __this, const MethodInfo* method);
void App_ItemGainSequence__Branch (App_ItemGainSequence_o* __this, const MethodInfo* method);
void App_ItemGainSequence__Tutorial (App_ItemGainSequence_o* __this, const MethodInfo* method);
bool App_ItemGainSequence__IsPlayer (App_ItemGainSequence_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_ItemGainSequence__CreateBind (App_ProcInst_o* super, App_ItemData_o* item, int32_t count, const MethodInfo* method);
void App_ItemGainSequence__CreateBind (App_ProcInst_o* super, App_ItemData_o* item, App_Unit_o* unit, System_String_o* label, int32_t count, const MethodInfo* method);
void App_ItemGainSequence__CreateBind (App_ProcInst_o* super, App_UnitItem_o* unitItem, App_Unit_o* unit, System_String_o* label, int32_t count, const MethodInfo* method);
