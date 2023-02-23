#pragma once

#include "il2cpp.h"

void App_AIInterruptAttack___ctor (App_AIInterruptAttack_o* __this, const MethodInfo* method);
bool App_AIInterruptAttack__Think (App_AIInterruptAttack_o* __this, App_Unit_o* actor, App_Unit_o* target, int32_t moveX, int32_t moveZ, int32_t attackX, int32_t attackZ, int32_t itemIndex, int32_t targetX, int32_t targetZ, int32_t bulletPattern, const MethodInfo* method);
bool App_AIInterruptAttack__ThinkImpl (App_AIInterruptAttack_o* __this, App_Unit_o* actor, App_Unit_o* target, int32_t moveX, int32_t moveZ, int32_t attackX, int32_t attackZ, int32_t itemIndex, int32_t targetX, int32_t targetZ, int32_t bulletPattern, const MethodInfo* method);
bool App_AIInterruptAttack__Attack (App_AIInterruptAttack_o* __this, const MethodInfo* method);
bool App_AIInterruptAttack__IsReserved (App_AIInterruptAttack_o* __this, const MethodInfo* method);
void App_AIInterruptAttack__Clear (App_AIInterruptAttack_o* __this, const MethodInfo* method);
void App_AIInterruptAttack__EnumerateCandidates (App_AIInterruptAttack_o* __this, bool isOriginalThinkBreak, bool isOriginalThinkChain, const MethodInfo* method);
bool App_AIInterruptAttack__DecideAttacker (App_AIInterruptAttack_o* __this, bool isAddMovedOriginal, const MethodInfo* method);
void App_AIInterruptAttack__Deploy (App_AIInterruptAttack_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_AIInterruptAttack__GetAttackScore (App_AIInterruptAttack_o* __this, App_Unit_o* actor, int32_t flag, int32_t bulletPattern, App_AIInterruptAttack_AttackScoreResult_o* result, const MethodInfo* method);
int32_t App_AIInterruptAttack__GetRange (App_AIInterruptAttack_o* __this, App_Unit_o* unit, const MethodInfo* method);
int32_t App_AIInterruptAttack__GetMaxAttackCount (App_AIInterruptAttack_o* __this, const MethodInfo* method);
void App_AIInterruptAttack__AddMovedOriginalToImage (App_AIInterruptAttack_o* __this, const MethodInfo* method);
void App_AIInterruptAttack__DeleteMovedOriginalFromImage (App_AIInterruptAttack_o* __this, const MethodInfo* method);
void App_AIInterruptAttack__Mind (App_AIInterruptAttack_o* __this, App_Unit_o* attacker, int32_t moveX, int32_t moveZ, int32_t attackX, int32_t attackZ, int32_t itemIndex, int32_t bulletPattern, const MethodInfo* method);
void App_AIInterruptAttack__DbgLog (App_AIInterruptAttack_o* __this, System_String_o* msg, const MethodInfo* method);
void App_AIInterruptAttack__DbgLogOrignalAndTarget (App_AIInterruptAttack_o* __this, const MethodInfo* method);
void App_AIInterruptAttack__DbgLogCandidates (App_AIInterruptAttack_o* __this, const MethodInfo* method);
void App_AIInterruptAttack__DbgLogAttacker (App_AIInterruptAttack_o* __this, System_String_o* msg, App_Unit_o* unit, int32_t moveX, int32_t moveZ, int32_t attackX, int32_t attackZ, int32_t itemIndex, int32_t bulletPattern, const MethodInfo* method);
void App_AIInterruptAttack__DbgLogExist (App_AIInterruptAttack_o* __this, System_String_o* methodName, App_Unit_o* attacker, int32_t moveX, int32_t moveZ, const MethodInfo* method);
