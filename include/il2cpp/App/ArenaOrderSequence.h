#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_Unit__o* App_ArenaOrderSequence__get_SelectableUnit (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_SelectableUnit (App_ArenaOrderSequence_o* __this, System_Collections_Generic_List_Unit__o* value, const MethodInfo* method);
System_Collections_Generic_List_ArenaOrderSequence_GodInfo__o* App_ArenaOrderSequence__get_SelectableGod (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_SelectableGod (App_ArenaOrderSequence_o* __this, System_Collections_Generic_List_ArenaOrderSequence_GodInfo__o* value, const MethodInfo* method);
void App_ArenaOrderSequence__SetupSelectableGodList (App_ArenaOrderSequence_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_ArenaOrderSequence__IsSelectableGod (App_GodUnit_o* god, App_Unit_o* unit, const MethodInfo* method);
bool App_ArenaOrderSequence__IsSelectableGodImpl (App_GodUnit_o* god, const MethodInfo* method);
int32_t App_ArenaOrderSequence__GetNextLevelCap (App_Unit_o* unit, App_GodUnit_o* god, bool isCapOver, bool* isLevelCapCount, const MethodInfo* method);
bool App_ArenaOrderSequence__IsLevelCapTalk (App_Unit_o* unit, App_GodUnit_o* god, const MethodInfo* method);
bool App_ArenaOrderSequence__get_IsEmblemBattle (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_IsEmblemBattle (App_ArenaOrderSequence_o* __this, bool value, const MethodInfo* method);
bool App_ArenaOrderSequence__get_IsSpecialBattle (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_IsSpecialBattle (App_ArenaOrderSequence_o* __this, bool value, const MethodInfo* method);
int32_t App_ArenaOrderSequence__get_TrainingType (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_TrainingType (App_ArenaOrderSequence_o* __this, int32_t value, const MethodInfo* method);
App_Unit_o* App_ArenaOrderSequence__get_TrainingUnit (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_TrainingUnit (App_ArenaOrderSequence_o* __this, App_Unit_o* value, const MethodInfo* method);
App_Unit_o* App_ArenaOrderSequence__get_BattleUnit (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_BattleUnit (App_ArenaOrderSequence_o* __this, App_Unit_o* value, const MethodInfo* method);
App_GodUnit_o* App_ArenaOrderSequence__get_BattleEmblem (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_BattleEmblem (App_ArenaOrderSequence_o* __this, App_GodUnit_o* value, const MethodInfo* method);
int32_t App_ArenaOrderSequence__get_EmblemType (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_EmblemType (App_ArenaOrderSequence_o* __this, int32_t value, const MethodInfo* method);
int32_t App_ArenaOrderSequence__get_BondExp (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_BondExp (App_ArenaOrderSequence_o* __this, int32_t value, const MethodInfo* method);
App_BattleCalculator_o* App_ArenaOrderSequence__get_Calculator (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_Calculator (App_ArenaOrderSequence_o* __this, App_BattleCalculator_o* value, const MethodInfo* method);
App_BattleCalculator_o* App_ArenaOrderSequence__get_SimCalculator (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__set_SimCalculator (App_ArenaOrderSequence_o* __this, App_BattleCalculator_o* value, const MethodInfo* method);
void App_ArenaOrderSequence__CreateBind (App_ProcInst_o* super, const MethodInfo* method);
System_Collections_IEnumerator_o* App_ArenaOrderSequence__Load (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__Unload (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__BackgroundIn (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__BackgroundOut (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__DispTitleBar (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__CreateTopMenu (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__CreateExpUnitSelectMenu (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__DestroyExpUnitSelectMenu (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__CreateBondUnitSelectMenu (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__DestroyBondUnitSelectMenu (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__CreateBondEmblemSelectMenu (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__DestroyBondEmblemSelectMenu (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__CreateBondLevelSelectMenu (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__DestroyBondLevelSelectMenu (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__SetupRandomUnit (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__SetupEmblem (App_ArenaOrderSequence_o* __this, App_GodUnit_o* emblem, int32_t type, const MethodInfo* method);
void App_ArenaOrderSequence__Culculate (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__SetupTraining (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__StartTraining (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__FinishTraining (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence__SetBattleUnitWeapon (App_ArenaOrderSequence_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_ArenaOrderSequence__SetEmblemWeapon (App_ArenaOrderSequence_o* __this, App_Unit_o* unit, App_GodUnit_o* emblem, int32_t bondLevel, const MethodInfo* method);
void App_ArenaOrderSequence__Exit (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence___ctor (App_ArenaOrderSequence_o* __this, const MethodInfo* method);
void App_ArenaOrderSequence___CreateTopMenu_b__71_0 (App_ArenaOrderSequence_o* __this, bool goNext, int32_t index, const MethodInfo* method);
void App_ArenaOrderSequence___CreateExpUnitSelectMenu_b__72_0 (App_ArenaOrderSequence_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_ArenaOrderSequence___CreateBondUnitSelectMenu_b__74_0 (App_ArenaOrderSequence_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_ArenaOrderSequence___CreateBondEmblemSelectMenu_b__76_0 (App_ArenaOrderSequence_o* __this, App_Unit_o* unit, App_GodUnit_o* emblem, int32_t type, const MethodInfo* method);
void App_ArenaOrderSequence___CreateBondEmblemSelectMenu_b__76_1 (App_ArenaOrderSequence_o* __this, System_String_o* name, const MethodInfo* method);
void App_ArenaOrderSequence___CreateBondLevelSelectMenu_b__78_0 (App_ArenaOrderSequence_o* __this, App_GodUnit_o* emblem, int32_t type, bool start, int32_t getExp, int32_t useCount, const MethodInfo* method);
void App_ArenaOrderSequence___CreateBondLevelSelectMenu_b__78_1 (App_ArenaOrderSequence_o* __this, System_String_o* name, const MethodInfo* method);
void App_ArenaOrderSequence___Culculate_g____82_0 (App_ArenaOrderSequence_o* __this, App_BattleInfo_o* info, bool isSimulation, const MethodInfo* method);