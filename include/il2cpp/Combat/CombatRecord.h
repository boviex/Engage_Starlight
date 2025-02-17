#pragma once

#include "il2cpp.h"

bool Combat_CombatRecord__op_Implicit (Combat_CombatRecord_o* a, const MethodInfo* method);
bool Combat_CombatRecord__get_IsEnemyAttack (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_IsEnemyAttack (Combat_CombatRecord_o* __this, bool value, const MethodInfo* method);
int32_t Combat_CombatRecord__get_CombatStyle (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_CombatStyle (Combat_CombatRecord_o* __this, int32_t value, const MethodInfo* method);
App_BattleCalculator_o* Combat_CombatRecord__get_Calculator (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_Calculator (Combat_CombatRecord_o* __this, App_BattleCalculator_o* value, const MethodInfo* method);
App_BattleCalculator_o* Combat_CombatRecord__get_SimCalculator (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_SimCalculator (Combat_CombatRecord_o* __this, App_BattleCalculator_o* value, const MethodInfo* method);
Combat_CharacterGameStatus_array* Combat_CombatRecord__get_GameStatus (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_GameStatus (Combat_CombatRecord_o* __this, Combat_CharacterGameStatus_array* value, const MethodInfo* method);
Combat_CharacterGameStatus_array* Combat_CombatRecord__get_GameStatusChainAtk (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_GameStatusChainAtk (Combat_CombatRecord_o* __this, Combat_CharacterGameStatus_array* value, const MethodInfo* method);
Combat_CharacterGameStatus_array* Combat_CombatRecord__get_GameStatusDragonize (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_GameStatusDragonize (Combat_CombatRecord_o* __this, Combat_CharacterGameStatus_array* value, const MethodInfo* method);
Combat_BaseCombatLocation_o* Combat_CombatRecord__get_Location (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_Location (Combat_CombatRecord_o* __this, Combat_BaseCombatLocation_o* value, const MethodInfo* method);
Combat_SkillStack_o* Combat_CombatRecord__get_PassiveSkills (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_PassiveSkills (Combat_CombatRecord_o* __this, Combat_SkillStack_o* value, const MethodInfo* method);
Combat_PhaseArray_o* Combat_CombatRecord__get_PhaseArray (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_PhaseArray (Combat_CombatRecord_o* __this, Combat_PhaseArray_o* value, const MethodInfo* method);
Combat_Phase_o* Combat_CombatRecord__get_CurrentPhase (Combat_CombatRecord_o* __this, const MethodInfo* method);
Combat_Phase_o* Combat_CombatRecord__get_LastPhase (Combat_CombatRecord_o* __this, const MethodInfo* method);
int32_t Combat_CombatRecord__get_AttackRight (Combat_CombatRecord_o* __this, const MethodInfo* method);
bool Combat_CombatRecord__get_HasCounter (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__UpdateAttackRight (Combat_CombatRecord_o* __this, const MethodInfo* method);
int32_t Combat_CombatRecord__get_MapDistance (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_MapDistance (Combat_CombatRecord_o* __this, int32_t value, const MethodInfo* method);
int32_t Combat_CombatRecord__get_MapDistance1or2 (Combat_CombatRecord_o* __this, const MethodInfo* method);
int32_t Combat_CombatRecord__get_ChainAttackCount (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__set_ChainAttackCount (Combat_CombatRecord_o* __this, int32_t value, const MethodInfo* method);
int32_t Combat_CombatRecord__get_FinishStyle (Combat_CombatRecord_o* __this, const MethodInfo* method);
bool Combat_CombatRecord__get_IsChainAttack (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord___ctor (Combat_CombatRecord_o* __this, const MethodInfo* method);
int32_t Combat_CombatRecord__CalcFinishStyle (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__PostProcess (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__PreloadPassiveSkillsEffects (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__MakeDecorators (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__FixForSelfHeal (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__FixForDance (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord_________ (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord______ (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord_____ (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord_____ (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__________ (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord_________ (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__________ (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord_____ (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord_______ (Combat_CombatRecord_o* __this, const MethodInfo* method);
void Combat_CombatRecord__ImportFromGame (Combat_CombatRecord_o* __this, App_BattleCalculator_o* calc, App_BattleCalculator_o* simCalc, const MethodInfo* method);
void Combat_CombatRecord__ImportOnestepParameters (App_BattleCalculator_o* calc, App_BattleScene_o* src, Combat_Phase_o* phase, int32_t s0, int32_t s1, const MethodInfo* method);
int32_t Combat_CombatRecord__GetDistance (App_BattleCalculator_o* calc, const MethodInfo* method);
void Combat_CombatRecord__ImportMasterUnitsFromGame (Combat_CombatRecord_o* __this, App_BattleCalculator_o* calc, const MethodInfo* method);
void Combat_CombatRecord__ImportGrandewFromGame (Combat_CombatRecord_o* __this, App_BattleCalculator_o* calc, const MethodInfo* method);
void Combat_CombatRecord__ImportChainUnitsFromGame (Combat_CombatRecord_o* __this, App_BattleCalculator_o* calc, const MethodInfo* method);
void Combat_CombatRecord__CreateForJobIntro (Combat_CombatRecord_o* __this, App_JobIntroData_o* data, const MethodInfo* method);
void Combat_CombatRecord__CreatePhaseArrayForJobIntro (Combat_CombatRecord_o* __this, App_JobIntroData_o* data, bool isRod, const MethodInfo* method);
void Combat_CombatRecord__ImportFromViewer (Combat_CombatRecord_o* __this, Combat_CombatViewer_o* viewer, const MethodInfo* method);
void Combat_CombatRecord_________g__import_80_0 (Combat_CombatRecord_o* __this, int32_t side, System_String_o* name, Combat_CombatRecord___c__DisplayClass80_0_o* , const MethodInfo* method);
bool Combat_CombatRecord___ImportFromGame_g__isStandingDie_81_0 (Combat_CombatRecord_o* __this, int32_t gameSide, Combat_CombatRecord___c__DisplayClass81_0_o* , const MethodInfo* method);
void Combat_CombatRecord___ImportMasterUnitsFromGame_g____84_0 (Combat_CombatRecord_o* __this, int32_t calcSide, Combat_CombatRecord___c__DisplayClass84_0_o* , const MethodInfo* method);
void Combat_CombatRecord___ImportGrandewFromGame_g____85_0 (Combat_CombatRecord_o* __this, int32_t side, const MethodInfo* method);
void Combat_CombatRecord___ImportChainUnitsFromGame_g___Atk_86_0 (Combat_CombatRecord_o* __this, int32_t calcSide, Combat_CombatRecord___c__DisplayClass86_0_o* , const MethodInfo* method);
void Combat_CombatRecord___ImportChainUnitsFromGame_g___Grd_86_1 (Combat_CombatRecord_o* __this, int32_t calcSide, Combat_CombatRecord___c__DisplayClass86_0_o* , const MethodInfo* method);
void Combat_CombatRecord___CreateForJobIntro_g__Import_87_0 (Combat_CombatRecord_o* __this, int32_t side, System_String_array* pidArray, System_String_array* jidArray, System_String_array* iidArray, Combat_CombatRecord___c__DisplayClass87_0_o* , const MethodInfo* method);
Combat_Phase_o* Combat_CombatRecord___CreatePhaseArrayForJobIntro_g__CreatePhase_88_0 (Combat_CombatRecord_o* __this, int32_t type, int32_t dmgHash, const MethodInfo* method);
void Combat_CombatRecord___ImportFromViewer_g__mywarn_89_1 (Combat_CombatRecord_o* __this, Combat_CombatRecord___c__DisplayClass89_0_o* , Combat_CombatRecord___c__DisplayClass89_1_o* , const MethodInfo* method);
void Combat_CombatRecord___ImportFromViewer_g__enwarn_89_2 (Combat_CombatRecord_o* __this, Combat_CombatRecord___c__DisplayClass89_0_o* , Combat_CombatRecord___c__DisplayClass89_1_o* , const MethodInfo* method);
void Combat_CombatRecord___ImportFromViewer_g____makechr_89_0 (Combat_CombatRecord_o* __this, int32_t side, System_String_o* objName, int32_t chainId, int32_t engageStyle, Combat_CombatRecord___c__DisplayClass89_0_o* , const MethodInfo* method);
