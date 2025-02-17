#pragma once

#include "il2cpp.h"

void App_MapHistory__RewindCreate (const MethodInfo* method);
void App_MapHistory__ReplayCreate (const MethodInfo* method);
bool App_MapHistory__RewindIsCreated (const MethodInfo* method);
bool App_MapHistory__ReplayIsCreated (const MethodInfo* method);
void App_MapHistory__Delete (const MethodInfo* method);
void App_MapHistory__Serialize (App_Stream_o* stream, const MethodInfo* method);
void App_MapHistory__Overwrite (App_Stream_o* stream, int32_t pos, int32_t val, const MethodInfo* method);
void App_MapHistory__Deserialize (App_Stream_o* stream, const MethodInfo* method);
void App_MapHistory__Begin (App_ProcInst_o* super, const MethodInfo* method);
void App_MapHistory__End (const MethodInfo* method);
void App_MapHistory__PhaseBegin (const MethodInfo* method);
void App_MapHistory__PhaseNext (const MethodInfo* method);
void App_MapHistory__PickUp (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__CancelPickUp (const MethodInfo* method);
void App_MapHistory__CancelUnitCommand (const MethodInfo* method);
void App_MapHistory__Mind (const MethodInfo* method);
void App_MapHistory__Talk (App_Unit_o* fromUnit, App_Unit_o* toUnit, const MethodInfo* method);
void App_MapHistory__Pretrade (App_Unit_o* fromUnit, App_Unit_o* toUnit, const MethodInfo* method);
void App_MapHistory__PretradeUndone (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Posttrade (App_Unit_o* fromUnit, App_Unit_o* toUnit, const MethodInfo* method);
void App_MapHistory__PosttradeUndone (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Transporter (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__BattleCalc (App_BattleInfo_o* info, const MethodInfo* method);
void App_MapHistory__GainItem (App_Unit_o* unit, App_UnitItem_o* unitItem, const MethodInfo* method);
void App_MapHistory__PreequipItem (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__PostequipItem (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__PretakeOffItem (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__PosttakeOffItem (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__PresortItem (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__PostsortItem (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__PreputOffItem (App_Unit_o* unit, bool fromMenu, const MethodInfo* method);
void App_MapHistory__PostputOffItem (App_Unit_o* unit, bool fromMenu, const MethodInfo* method);
void App_MapHistory__EventBattle (const MethodInfo* method);
void App_MapHistory__MindDone (const MethodInfo* method);
void App_MapHistory__EngageCancel (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__GodChangeCancel (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AfterCommandStackCancel (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Status (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Status (App_Unit_o* unit, int64_t status, const MethodInfo* method);
void App_MapHistory__Hp (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Hp (App_Unit_o* unit, int32_t hp, const MethodInfo* method);
void App_MapHistory__BaseCapability (App_Unit_o* unit, int32_t index, const MethodInfo* method);
void App_MapHistory__EngageCount (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__EngageCount (App_Unit_o* unit, int32_t engageCount, const MethodInfo* method);
void App_MapHistory__ExtraSight (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Exp (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__LevelUp (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__ClassChange (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Position (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Position (App_Unit_o* unit, int32_t newX, int32_t newZ, const MethodInfo* method);
void App_MapHistory__AngleOnce (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__PrivateSkill (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__EnhanceFactorItem (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AIActive (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AIBand (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AIPriority (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AISequence (App_Unit_o* unit, int32_t order, const MethodInfo* method);
void App_MapHistory__AIValue (App_Unit_o* unit, int32_t order, int32_t index, const MethodInfo* method);
void App_MapHistory__AIProhibitEngageAttack (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AIProhibitRod (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AIProhibitOverlap (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AIEngageAttackOnceDone (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AIRerewarp (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AIRerewarpCount (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Engage (App_Unit_o* unit, App_Unit_o* linkUnit, bool isEvent, const MethodInfo* method);
void App_MapHistory__EngageForDecideTargetSelect (App_Unit_o* unit, bool isEngaging, const MethodInfo* method);
void App_MapHistory__EngageOffForCommandSkillAfter (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Dead (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Transfer (App_Unit_o* unit, int32_t nextForceType, const MethodInfo* method);
void App_MapHistory__Revive (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginAllBegin (const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginOneBegin (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginStatus (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginPrivateSkill (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginExtraSight (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginEngageTurn (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginEngage (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginEngageCount (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginAIProhibitEngageAttack (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginAIProhibitRod (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginAIProhibitOverlap (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginMultiChangeGod (App_Unit_o* unit, App_GodData_o* godData, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginPosition (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginOneEnd (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseBeginAllEnd (const MethodInfo* method);
void App_MapHistory__UnitPhaseEndAllBegin (const MethodInfo* method);
void App_MapHistory__UnitPhaseEndOne (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__UnitPhaseEndAllEnd (const MethodInfo* method);
void App_MapHistory__UnitItem (App_Unit_o* unit, int32_t index, const MethodInfo* method);
void App_MapHistory__UnitItemList (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__Dispos (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__GodCreate (App_GodData_o* godData, const MethodInfo* method);
void App_MapHistory__GodDelete (App_GodUnit_o* godUnit, const MethodInfo* method);
void App_MapHistory__GodConnect (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__GodDisconnect (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__GodChange (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__GodExp (App_GodUnit_o* godUnit, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__GodLevelUp (App_GodUnit_o* godUnit, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__GodDarkness (App_GodUnit_o* godUnit, const MethodInfo* method);
void App_MapHistory__GodNotifyLevelCapTalk (App_GodUnit_o* godUnit, App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__GodState (App_Unit_o* unit, int32_t index, const MethodInfo* method);
void App_MapHistory__RelianceScore (App_Unit_o* unitA, App_Unit_o* unitB, const MethodInfo* method);
void App_MapHistory__TransporterData (int32_t index, App_Transporter_Data_o* data, const MethodInfo* method);
void App_MapHistory__CannonShells (App_CannonInspector_o* cannonInspector, const MethodInfo* method);
void App_MapHistory__TerrainOpen (int32_t x, int32_t z, const MethodInfo* method);
void App_MapHistory__TerrainBroken (int32_t x, int32_t z, const MethodInfo* method);
void App_MapHistory__TerrainAction (int32_t x, int32_t z, int32_t action, const MethodInfo* method);
void App_MapHistory__TerrainSetBegin (const MethodInfo* method);
void App_MapHistory__TerrainSet (int32_t x, int32_t z, const MethodInfo* method);
void App_MapHistory__TerrainSetEnd (const MethodInfo* method);
void App_MapHistory__TerrainSetOne (int32_t x, int32_t z, const MethodInfo* method);
void App_MapHistory__OverlapBegin (const MethodInfo* method);
void App_MapHistory__Overlap (int32_t x, int32_t z, System_String_o* tid, const MethodInfo* method);
void App_MapHistory__OverlapEnd (const MethodInfo* method);
void App_MapHistory__OverlapOne (int32_t x, int32_t z, System_String_o* tid, const MethodInfo* method);
void App_MapHistory__Gold (int32_t gold, const MethodInfo* method);
void App_MapHistory__Material (int32_t kind, const MethodInfo* method);
void App_MapHistory__PieceOfBond (const MethodInfo* method);
void App_MapHistory__Variable (System_String_o* key, const MethodInfo* method);
void App_MapHistory__WinRule (const MethodInfo* method);
void App_MapHistory__WinRuleEnemyNum (const MethodInfo* method);
void App_MapHistory__WinRuleLimitTurn (const MethodInfo* method);
void App_MapHistory__WinRuleMID (const MethodInfo* method);
void App_MapHistory__FieldBgmPhaseBgm (System_String_o* playerPhaseBgm, System_String_o* enemyPhaseBgm, System_String_o* allyPhaseBgm, const MethodInfo* method);
void App_MapHistory__FieldBgmWarSituation (System_String_o* warSituationStateName, const MethodInfo* method);
void App_MapHistory__EngageBreak (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__RangeBegin (const MethodInfo* method);
void App_MapHistory__Range (int32_t x, int32_t z, const MethodInfo* method);
void App_MapHistory__RangeEnd (const MethodInfo* method);
void App_MapHistory__RangeClear (const MethodInfo* method);
void App_MapHistory__GodEscaping (App_GodUnit_o* godUnit, const MethodInfo* method);
void App_MapHistory__RewindDangerShowing (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__MapKillBonus (int32_t x, int32_t z, int32_t kind, const MethodInfo* method);
void App_MapHistory__GodDirty (App_GodUnit_o* godUnit, const MethodInfo* method);
void App_MapHistory__EffectCreate (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void App_MapHistory__EffectDeleteBegin (const MethodInfo* method);
void App_MapHistory__EffectDelete (System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
void App_MapHistory__EffectDeleteEnd (const MethodInfo* method);
void App_MapHistory__MaterialFloatBegin (System_String_o* name, System_String_o* material, System_String_o* property, const MethodInfo* method);
void App_MapHistory__MaterialFloat (float val, const MethodInfo* method);
void App_MapHistory__MaterialFloatEnd (const MethodInfo* method);
void App_MapHistory__MaterialColorBegin (System_String_o* name, System_String_o* material, System_String_o* property, const MethodInfo* method);
void App_MapHistory__MaterialColor (UnityEngine_Color_o color, const MethodInfo* method);
void App_MapHistory__MaterialColorEnd (const MethodInfo* method);
void App_MapHistory__FieldBgmSpecialTurn (int32_t turn, const MethodInfo* method);
void App_MapHistory__PostChangeBgmEvent (System_String_o* eventName, const MethodInfo* method);
void App_MapHistory__TerrainEndurance (int32_t x, int32_t z, int32_t hp, int32_t maxHp, const MethodInfo* method);
void App_MapHistory__TerrainState (int32_t x, int32_t z, int32_t state, const MethodInfo* method);
void App_MapHistory__LoseRuleMID (const MethodInfo* method);
void App_MapHistory__BattleStart (App_Unit_o* unit, int32_t mind, const MethodInfo* method);
void App_MapHistory__PhaseBeginAfter (const MethodInfo* method);
void App_MapHistory__ClearRing (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__VisionDelete (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__MapKillBonusCount (int32_t x, int32_t z, int32_t kind, const MethodInfo* method);
void App_MapHistory__UnitRecord (App_Unit_o* unit, int32_t kind, const MethodInfo* method);
void App_MapHistory__SkillCharge (const MethodInfo* method);
void App_MapHistory__Surrender (const MethodInfo* method);
void App_MapHistory__SetExtraHpStock (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__ClearExtraHpStock (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__EngageTurn (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__SummonDelete (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__MapSightUsable (const MethodInfo* method);
void App_MapHistory__PlainHpStock (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__ResetLockTarget (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__EnchantWeapon (const MethodInfo* method);
void App_MapHistory__AIBulletPattern (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__PositionListBegin (const MethodInfo* method);
void App_MapHistory__PositionList (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__PositionListEnd (const MethodInfo* method);
void App_MapHistory__AIMoveLimit (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__TerrainActionMove (int32_t x, int32_t z, int32_t movedX, int32_t movedZ, int32_t action, int32_t state, const MethodInfo* method);
void App_MapHistory__AIMagicShieldOnceDone (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__RandomGame (const MethodInfo* method);
void App_MapHistory__FullBulletAttack (const MethodInfo* method);
void App_MapHistory__LockTarget (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__AIEnchantWeaponDone (App_Unit_o* unit, const MethodInfo* method);
bool App_MapHistory__RewindIsEnable (const MethodInfo* method);
void App_MapHistory__RewindEnable (const MethodInfo* method);
void App_MapHistory__RewindDisable (const MethodInfo* method);
void App_MapHistory__RewindDbgSetUseCount (int32_t count, const MethodInfo* method);
int32_t App_MapHistory__RewindGetUseCount (const MethodInfo* method);
int32_t App_MapHistory__RewindGetMaxUseCount (const MethodInfo* method);
void App_MapHistory__RewindReset (const MethodInfo* method);
int32_t App_MapHistory__RewindGetLastSplitIndex (const MethodInfo* method);
int32_t App_MapHistory__RewindGetNextSplitIndex (int32_t index, const MethodInfo* method);
int32_t App_MapHistory__RewindGetPrevSplitIndex (int32_t index, const MethodInfo* method);
bool App_MapHistory__RewindCreateLog (int32_t index, App_MapHistory_RewindLog_o* result, const MethodInfo* method);
bool App_MapHistory__RewindCheckLogExists (const MethodInfo* method);
bool App_MapHistory__RewindGetCursorPos (int32_t index, int32_t* x, int32_t* z, const MethodInfo* method);
bool App_MapHistory__RewindIsPhaseBegin (int32_t index, const MethodInfo* method);
void App_MapHistory__RewindPreviewSetup (const MethodInfo* method);
bool App_MapHistory__RewindPreviewApply (int32_t index, const MethodInfo* method);
void App_MapHistory__RewindPreviewDecide (const MethodInfo* method);
void App_MapHistory__RewindPreviewCancel (const MethodInfo* method);
bool App_MapHistory__RewindIsPreviewing (const MethodInfo* method);
App_Unit_o* App_MapHistory__RewindPreviewGetUnit (int32_t mapHistoryIndex, const MethodInfo* method);
void App_MapHistory__RewindDbgDump (const MethodInfo* method);
void App_MapHistory__RewindDbgCreateSnapshot (const MethodInfo* method);
bool App_MapHistory__RewindDbgHasSnapshot (int32_t index, const MethodInfo* method);
void App_MapHistory__RewindDbgDeleteSnapshot (int32_t index, const MethodInfo* method);
bool App_MapHistory__ReplayIsEnable (const MethodInfo* method);
void App_MapHistory__ReplaySetReadMode (const MethodInfo* method);
bool App_MapHistory__ReplayIsReadMode (const MethodInfo* method);
bool App_MapHistory__ReplayRead (const MethodInfo* method);
bool App_MapHistory__ReplayHasReadData (const MethodInfo* method);
bool App_MapHistory__ReplayIsReadDataLastTurn (const MethodInfo* method);
void App_MapHistory__ReplaySkipReadDataToLastTurn (const MethodInfo* method);
void App_MapHistory__ReplayChangeReadModeToWriteMode (const MethodInfo* method);
void App_MapHistory__ReplayRegisterAllUnits (const MethodInfo* method);
void App_MapHistory__ReplayRegisterAppearanceUnit (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__ReplayRegisterLeavingUnit (App_Unit_o* unit, const MethodInfo* method);
void App_MapHistory__ReplayLeaving (App_Unit_o* unit, const MethodInfo* method);
bool App_MapHistory__ReplayGetAeppearanceAndLeavingIndexes (System_Int32_array** appearanceIndexes, System_Int32_array** leavingIndexes, const MethodInfo* method);
App_Unit_o* App_MapHistory__ReplayCreateAppearanceUnit (int32_t index, const MethodInfo* method);
App_Unit_o* App_MapHistory__ReplayGetLeavingUnit (int32_t index, const MethodInfo* method);
void App_MapHistory__ReplayRegisterRelayTakeOverTiming (const MethodInfo* method);
bool App_MapHistory__ReplayIsRelayTakeOverTiming (const MethodInfo* method);
void App_MapHistory__ReplayTurnSave (App_ProcInst_o* super, const MethodInfo* method);
int32_t App_MapHistory__ReplayDbgGetReadIndex (const MethodInfo* method);
int32_t App_MapHistory__ReplayDbgGetCommandCount (const MethodInfo* method);
void App_MapHistory__ReplayDbgDump (const MethodInfo* method);
void App_MapHistory___cctor (const MethodInfo* method);
