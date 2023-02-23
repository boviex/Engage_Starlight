#pragma once

#include "il2cpp.h"

int32_t App_BattleUtil__GetDamageLevel (int32_t damage, bool critical, bool efficacy, const MethodInfo* method);
int32_t App_BattleUtil__GetDamageLevel (App_BattleScene_o* scene, int32_t side, const MethodInfo* method);
bool App_BattleUtil__CanGainExp (App_BattleInfoSide_o* current, const MethodInfo* method);
bool App_BattleUtil__CanGainExp (App_BattleInfoSide_o* current, App_BattleInfoSide_o* reverse, const MethodInfo* method);
bool App_BattleUtil__CanRodExp (App_BattleInfoSide_o* current, const MethodInfo* method);
int32_t App_BattleUtil__GetBattleExp (App_BattleInfoSide_o* current, App_BattleInfoSide_o* reverse, System_String_o* command, const MethodInfo* method);
int32_t App_BattleUtil__GetRodExp (App_BattleInfoSide_o* current, const MethodInfo* method);
int32_t App_BattleUtil__GetDanceExp (App_BattleInfoSide_o* current, const MethodInfo* method);
int32_t App_BattleUtil__GetSummonExp (App_BattleInfoSide_o* current, const MethodInfo* method);
int32_t App_BattleUtil__GetGuardExp (App_BattleInfoSide_o* current, const MethodInfo* method);
int32_t App_BattleUtil__GetBattleExp (App_BattleInfoSide_o* current, App_BattleInfoSide_o* reverse, const MethodInfo* method);
int32_t App_BattleUtil__GetEnchantExp (App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
bool App_BattleUtil__IsAmbush (App_BattleInfoSide_o* current, App_BattleInfoSide_o* reverse, const MethodInfo* method);
bool App_BattleUtil__IsIncessantAttack (App_BattleInfoSide_o* current, App_BattleInfoSide_o* reverse, const MethodInfo* method);
bool App_BattleUtil__IsSwapOrder (App_BattleInfoSide_o* current, App_BattleInfoSide_o* reverse, const MethodInfo* method);
bool App_BattleUtil__HasPlayerUnit (App_BattleInfo_o* info, const MethodInfo* method);
bool App_BattleUtil__IsDetailBattle (App_BattleInfo_o* info, const MethodInfo* method);
bool App_BattleUtil__IsGrowTalk (App_BattleInfoSide_o* current, App_BattleInfoSide_o* reverse, const MethodInfo* method);
bool App_BattleUtil__CanGainSituation (const MethodInfo* method);
void App_BattleUtil__PlayLastBattleDieSound (const MethodInfo* method);
void App_BattleUtil___ctor (App_BattleUtil_o* __this, const MethodInfo* method);
