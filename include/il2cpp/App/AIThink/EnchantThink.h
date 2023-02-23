#pragma once

#include "il2cpp.h"

void App_AIThink_EnchantThink___ctor (App_AIThink_EnchantThink_o* __this, const MethodInfo* method);
bool App_AIThink_EnchantThink__Think (App_AIThink_EnchantThink_o* __this, App_Unit_o* unit, bool isEntrust, const MethodInfo* method);
bool App_AIThink_EnchantThink__CollectItemInfos (App_AIThink_EnchantThink_o* __this, const MethodInfo* method);
bool App_AIThink_EnchantThink__CanUseItem (App_AIThink_EnchantThink_o* __this, int32_t itemInfoIndex, const MethodInfo* method);
bool App_AIThink_EnchantThink__DecideMovePosAndTarget (App_AIThink_EnchantThink_o* __this, int32_t itemInfoIndex, App_AIThink_EnchantThink_DMPTResult_o* result, const MethodInfo* method);
void App_AIThink_EnchantThink__Reset (App_AIThink_EnchantThink_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_AIThink_EnchantThink__AddItemInfo (App_AIThink_EnchantThink_o* __this, int32_t itemIndex, uint8_t kind, const MethodInfo* method);
int32_t App_AIThink_EnchantThink__MakeUnitScoreKey (App_Unit_o* unit, int32_t itemInfoIndex, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScore (App_AIThink_EnchantThink_o* __this, uint8_t kind, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint32_t App_AIThink_EnchantThink__CalcPosScore (App_AIThink_EnchantThink_o* __this, uint8_t kind, int32_t moveX, int32_t moveZ, int32_t move, int32_t itemInfoIndex, App_UnitItem_o* unitItem, App_AIThink_EnchantThink_DMPTResult_o* result, const MethodInfo* method);
void App_AIThink_EnchantThink__CollectSurroundingInfo (App_AIThink_EnchantThink_o* __this, App_Unit_o* target, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreRest (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreEngageCount (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreEfficacyMorph (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreSight (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreNoChainAttack (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreWeightZero (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreNoSilence (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreReflectPhysics (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreReflectMagic (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreNoBreak (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreNoFreeze (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreNoDamage (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreHoldOut (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreWeapon (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint8_t App_AIThink_EnchantThink__CalcUnitScoreDummy (App_AIThink_EnchantThink_o* think, App_Unit_o* actor, App_Unit_o* target, App_UnitItem_o* unitItem, const MethodInfo* method);
uint32_t App_AIThink_EnchantThink__CalcPosScoreWhole (App_AIThink_EnchantThink_o* __this, App_Unit_o* actor, int32_t moveX, int32_t moveZ, int32_t move, int32_t itemInfoIndex, App_UnitItem_o* unitItem, App_AIThink_EnchantThink_DMPTResult_o* result, const MethodInfo* method);
uint32_t App_AIThink_EnchantThink__CalcPosScoreRange (App_AIThink_EnchantThink_o* __this, App_Unit_o* actor, int32_t moveX, int32_t moveZ, int32_t move, int32_t itemInfoIndex, App_UnitItem_o* unitItem, App_AIThink_EnchantThink_DMPTResult_o* result, const MethodInfo* method);
uint32_t App_AIThink_EnchantThink__CalcPosScoreRangeImpl (App_AIThink_EnchantThink_o* __this, App_Unit_o* actor, int32_t moveX, int32_t moveZ, int32_t move, int32_t itemInfoIndex, App_UnitItem_o* unitItem, App_AIThink_EnchantThink_DMPTResult_o* result, bool isWhole, const MethodInfo* method);
uint32_t App_AIThink_EnchantThink__CalcPosScoreNeighbor (App_AIThink_EnchantThink_o* __this, App_Unit_o* actor, int32_t moveX, int32_t moveZ, int32_t move, int32_t itemInfoIndex, App_UnitItem_o* unitItem, App_AIThink_EnchantThink_DMPTResult_o* result, const MethodInfo* method);
uint32_t App_AIThink_EnchantThink__CalcPosScoreDummy (App_AIThink_EnchantThink_o* __this, App_Unit_o* actor, int32_t moveX, int32_t moveZ, int32_t move, int32_t itemInfoIndex, App_UnitItem_o* unitItem, App_AIThink_EnchantThink_DMPTResult_o* result, const MethodInfo* method);
void App_AIThink_EnchantThink___cctor (const MethodInfo* method);
