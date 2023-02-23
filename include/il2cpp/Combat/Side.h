#pragma once

#include "il2cpp.h"

System_String_o* Combat_Side__ToName (int32_t i, const MethodInfo* method);
int32_t Combat_Side__FromName (System_String_o* name, const MethodInfo* method);
bool Combat_Side__IsMaster (int32_t i, const MethodInfo* method);
bool Combat_Side__IsPairedGrandew (int32_t i, const MethodInfo* method);
bool Combat_Side__IsChain (int32_t i, const MethodInfo* method);
bool Combat_Side__IsChainAtk (int32_t i, const MethodInfo* method);
bool Combat_Side__IsChainGrd (int32_t i, const MethodInfo* method);
bool Combat_Side__IsPlayerSide (int32_t i, const MethodInfo* method);
bool Combat_Side__IsEnemySide (int32_t i, const MethodInfo* method);
int32_t Combat_Side__ToEnemy (int32_t i, const MethodInfo* method);
int32_t Combat_Side__ToEnemyGrandew (int32_t i, const MethodInfo* method);
int32_t Combat_Side__ToGrandew (int32_t i, const MethodInfo* method);
int32_t Combat_Side__ToMaster (int32_t i, const MethodInfo* method);
int32_t Combat_Side__ToPartner (int32_t i, const MethodInfo* method);
int32_t Combat_Side__ToMirrorSide (int32_t i, const MethodInfo* method);
Combat_Character_o* Combat_Side__ToEnemyChr (int32_t i, const MethodInfo* method);
Combat_Character_o* Combat_Side__ToGrandewChr (int32_t i, const MethodInfo* method);
Combat_Character_o* Combat_Side__ToMasterChr (int32_t i, const MethodInfo* method);
Combat_Character_o* Combat_Side__ToPartnerChr (int32_t i, const MethodInfo* method);
Combat_Character_o* Combat_Side__ToEnemyGrandewChr (int32_t i, const MethodInfo* method);
int32_t Combat_Side__ConvertFrom (int32_t sideType, bool isReversed, const MethodInfo* method);
