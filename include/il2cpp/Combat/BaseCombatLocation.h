#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o Combat_BaseCombatLocation__get_Item (Combat_BaseCombatLocation_o* __this, int32_t i, const MethodInfo* method);
bool Combat_BaseCombatLocation__get_IsCalculated (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_IsCalculated (Combat_BaseCombatLocation_o* __this, bool value, const MethodInfo* method);
bool Combat_BaseCombatLocation__get_IsLocated (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_IsLocated (Combat_BaseCombatLocation_o* __this, bool value, const MethodInfo* method);
float Combat_BaseCombatLocation__get_StandardFlyingHight (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
float Combat_BaseCombatLocation__get_ShootFlyingHight (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
float Combat_BaseCombatLocation__get_HeightOverFlyingHight (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
int32_t Combat_BaseCombatLocation__get_TryCount (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_TryCount (Combat_BaseCombatLocation_o* __this, int32_t value, const MethodInfo* method);
int32_t Combat_BaseCombatLocation__get_Pattern (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_Pattern (Combat_BaseCombatLocation_o* __this, int32_t value, const MethodInfo* method);
bool Combat_BaseCombatLocation__get_UseOpenStyle (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_UseOpenStyle (Combat_BaseCombatLocation_o* __this, bool value, const MethodInfo* method);
Combat_BaseCombatLocation_o* Combat_BaseCombatLocation__CreateLocator (Combat_CombatRecord_o* record, const MethodInfo* method);
void Combat_BaseCombatLocation__Calculate (Combat_BaseCombatLocation_o* __this, Combat_CharacterGameStatus_array* gs, const MethodInfo* method);
void Combat_BaseCombatLocation__Locate (Combat_BaseCombatLocation_o* __this, Combat_Character_array* charaArray, int32_t locateStyle, const MethodInfo* method);
void Combat_BaseCombatLocation__LocateEmblem (Combat_BaseCombatLocation_o* __this, int32_t masterSide, Combat_Character_o* master, Combat_Character_o* emblem, int32_t locateStyle, const MethodInfo* method);
Combat_CombatRecord_o* Combat_BaseCombatLocation__get_Record (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
Combat_FXZ_array* Combat_BaseCombatLocation__get_WorldPos (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_WorldPos (Combat_BaseCombatLocation_o* __this, Combat_FXZ_array* value, const MethodInfo* method);
System_Int32_array* Combat_BaseCombatLocation__get_DamageCount (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_DamageCount (Combat_BaseCombatLocation_o* __this, System_Int32_array* value, const MethodInfo* method);
System_Single_array* Combat_BaseCombatLocation__get_CharaTall (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_CharaTall (Combat_BaseCombatLocation_o* __this, System_Single_array* value, const MethodInfo* method);
System_Single_array* Combat_BaseCombatLocation__get_CharaBodySize (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_CharaBodySize (Combat_BaseCombatLocation_o* __this, System_Single_array* value, const MethodInfo* method);
System_Boolean_array* Combat_BaseCombatLocation__get_IsRiding (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_IsRiding (Combat_BaseCombatLocation_o* __this, System_Boolean_array* value, const MethodInfo* method);
System_Boolean_array* Combat_BaseCombatLocation__get_IsFlying (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_IsFlying (Combat_BaseCombatLocation_o* __this, System_Boolean_array* value, const MethodInfo* method);
System_Boolean_array* Combat_BaseCombatLocation__get_CanFly (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_CanFly (Combat_BaseCombatLocation_o* __this, System_Boolean_array* value, const MethodInfo* method);
System_Boolean_array* Combat_BaseCombatLocation__get_IsBigDragon (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_IsBigDragon (Combat_BaseCombatLocation_o* __this, System_Boolean_array* value, const MethodInfo* method);
Combat_FXZ_array* Combat_BaseCombatLocation__get_RoughPos (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_RoughPos (Combat_BaseCombatLocation_o* __this, Combat_FXZ_array* value, const MethodInfo* method);
UnityEngine_Vector3_array* Combat_BaseCombatLocation__get_OutPos (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_OutPos (Combat_BaseCombatLocation_o* __this, UnityEngine_Vector3_array* value, const MethodInfo* method);
Combat_FXZ_array* Combat_BaseCombatLocation__get_OutDir (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_OutDir (Combat_BaseCombatLocation_o* __this, Combat_FXZ_array* value, const MethodInfo* method);
System_Boolean_array* Combat_BaseCombatLocation__get_SetFlying (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_SetFlying (Combat_BaseCombatLocation_o* __this, System_Boolean_array* value, const MethodInfo* method);
bool Combat_BaseCombatLocation__get_SkipCheckOverWall (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__set_SkipCheckOverWall (Combat_BaseCombatLocation_o* __this, bool value, const MethodInfo* method);
float Combat_BaseCombatLocation__get_StartDistance (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation___ctor (Combat_BaseCombatLocation_o* __this, Combat_CombatRecord_o* record, const MethodInfo* method);
void Combat_BaseCombatLocation__BaseSetup (Combat_BaseCombatLocation_o* __this, Combat_CharacterGameStatus_array* gs, const MethodInfo* method);
void Combat_BaseCombatLocation__Setup (Combat_BaseCombatLocation_o* __this, Combat_CharacterGameStatus_array* gs, const MethodInfo* method);
int32_t Combat_BaseCombatLocation__get_SideAtk (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
int32_t Combat_BaseCombatLocation__get_SideDmg (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
System_ValueTuple_int__int__o Combat_BaseCombatLocation__GetTileXY (Combat_BaseCombatLocation_o* __this, int32_t dist, int32_t tile, const MethodInfo* method);
System_ValueTuple_int__int__o Combat_BaseCombatLocation__GetTileXY (Combat_BaseCombatLocation_o* __this, int32_t id, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsMoveOverWall (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsMoveOverWall (Combat_BaseCombatLocation_o* __this, int32_t side, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsOverWall (Combat_BaseCombatLocation_o* __this, int32_t sX, int32_t sZ, int32_t gX, int32_t gZ, bool isFly, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsWall (Combat_BaseCombatLocation_o* __this, int32_t side, bool isBrawl, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsWall (Combat_BaseCombatLocation_o* __this, int32_t x, int32_t z, bool isBrawl, bool isFly, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsOverBorder (Combat_BaseCombatLocation_o* __this, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsOverHeadBorder (Combat_BaseCombatLocation_o* __this, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsOverHeadBorder (Combat_BaseCombatLocation_o* __this, int32_t side, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsRotateTooMuch (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsStandable (Combat_BaseCombatLocation_o* __this, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsStandable (Combat_BaseCombatLocation_o* __this, int32_t side, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsStandable (Combat_BaseCombatLocation_o* __this, int32_t side, float size, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsStandable (Combat_BaseCombatLocation_o* __this, UnityEngine_Vector3_o center, float size, int32_t mask, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsOutOfMap (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__AboidStep (Combat_BaseCombatLocation_o* __this, const MethodInfo* method);
void Combat_BaseCombatLocation__AboidStep (Combat_BaseCombatLocation_o* __this, int32_t side, float dist, const MethodInfo* method);
float Combat_BaseCombatLocation__GetHeightForFly (Combat_BaseCombatLocation_o* __this, Combat_FXZ_o pos, float fly, bool isDebug, const MethodInfo* method);
float Combat_BaseCombatLocation__GetDist2CliffOrWall (Combat_BaseCombatLocation_o* __this, int32_t side, Combat_FXZ_o dir, float checkDist, bool isDebug, const MethodInfo* method);
float Combat_BaseCombatLocation__GetDist2Cliff (Combat_BaseCombatLocation_o* __this, int32_t side, Combat_FXZ_o dir, float checkDist, bool isDebug, const MethodInfo* method);
float Combat_BaseCombatLocation__GetDist2Wall (Combat_BaseCombatLocation_o* __this, int32_t side, Combat_FXZ_o dir, float checkDist, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__IsShootable (Combat_BaseCombatLocation_o* __this, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__CheckCameraSpace (Combat_BaseCombatLocation_o* __this, int32_t side, float forwardDist, float sideDist, bool isDebug, const MethodInfo* method);
bool Combat_BaseCombatLocation__LocateForSolo (Combat_BaseCombatLocation_o* __this, int32_t side, int32_t tryCount, const MethodInfo* method);
bool Combat_BaseCombatLocation__LocateToOpenSpace (Combat_BaseCombatLocation_o* __this, bool isDebug, const MethodInfo* method);
void Combat_BaseCombatLocation__RelocateToSpace (Combat_BaseCombatLocation_o* __this, bool isStart, const MethodInfo* method);
void Combat_BaseCombatLocation__LocateForWin (Combat_BaseCombatLocation_o* __this, Combat_Character_array* charaArray, const MethodInfo* method);
int32_t Combat_BaseCombatLocation__LocateSoloForWin (Combat_BaseCombatLocation_o* __this, int32_t side, bool checkEnPos, Combat_FXZ_o forward, float checkRadius, const MethodInfo* method);
void Combat_BaseCombatLocation__LocateForSkip (Combat_BaseCombatLocation_o* __this, Combat_Character_array* charaArray, const MethodInfo* method);
void Combat_BaseCombatLocation__LocateForEndTraining (Combat_BaseCombatLocation_o* __this, Combat_Character_array* charaArray, const MethodInfo* method);
void Combat_BaseCombatLocation__LocateForChainAttack (Combat_BaseCombatLocation_o* __this, Combat_Character_o* chain, Combat_Character_array* chars, int32_t attackHash, float chainAttackTime, const MethodInfo* method);
void Combat_BaseCombatLocation__RelocateAfterChainGuard (Combat_BaseCombatLocation_o* __this, Combat_Character_array* charaArray, Combat_Character_o* guard, const MethodInfo* method);
void Combat_BaseCombatLocation__LocateEmblemAfterCombat (Combat_BaseCombatLocation_o* __this, Combat_Character_o* emblem, const MethodInfo* method);
void Combat_BaseCombatLocation__LoadCurrentPos (Combat_BaseCombatLocation_o* __this, Combat_Character_array* charaArray, const MethodInfo* method);
Combat_FXZ_o Combat_BaseCombatLocation__GetSoloCharacterForward (bool isEnemy, const MethodInfo* method);
void Combat_BaseCombatLocation___cctor (const MethodInfo* method);
bool Combat_BaseCombatLocation___Locate_g__isStandingDie_30_0 (const MethodInfo* method);
float Combat_BaseCombatLocation___GetDist2Cliff_g__CheckImpl_123_0 (Combat_BaseCombatLocation_o* __this, UnityEngine_Vector3_o norm, Combat_BaseCombatLocation___c__DisplayClass123_0_o* , const MethodInfo* method);
bool Combat_BaseCombatLocation___LocateToOpenSpace_g__CheckOpenSpace_128_0 (Combat_BaseCombatLocation_o* __this, System_Int32_array* degreeType, int32_t minDist, int32_t maxDist, Combat_BaseCombatLocation___c__DisplayClass128_0_o* , const MethodInfo* method);
bool Combat_BaseCombatLocation___LocateToOpenSpace_g__CheckOpenSpaceCore_128_1 (Combat_BaseCombatLocation_o* __this, int32_t x, int32_t z, int32_t degree, int32_t tryCnt, Combat_BaseCombatLocation___c__DisplayClass128_0_o* , const MethodInfo* method);
bool Combat_BaseCombatLocation___LocateSoloForWin_g__isOK_131_0 (Combat_BaseCombatLocation_o* __this, Combat_BaseCombatLocation___c__DisplayClass131_0_o* , const MethodInfo* method);