#pragma once

#include "il2cpp.h"

System_String_o* Combat_Deco_Skill__get_Name (Combat_Deco_Skill_o* __this, const MethodInfo* method);
void Combat_Deco_Skill__set_Pair (Combat_Deco_Skill_o* __this, Combat_SkillStack_Packet_o* value, const MethodInfo* method);
bool Combat_Deco_Skill__IsAvailable (Combat_DecoratorArgs_o* that, Combat_SkillStack_Packet_o* pair, const MethodInfo* method);
void Combat_Deco_Skill__OnEnter (Combat_Deco_Skill_o* __this, const MethodInfo* method);
void Combat_Deco_Skill__OnEnterAttack (Combat_Deco_Skill_o* __this, const MethodInfo* method);
void Combat_Deco_Skill__OnEnemyDamage_ (Combat_Deco_Skill_o* __this, UnityEngine_AnimationEvent_o* ev, const MethodInfo* method);
void Combat_Deco_Skill__DrawSkillDamages (Combat_Phase_o* phase, Combat_SkillStack_o* skills, const MethodInfo* method);
System_IDisposable_o* Combat_Deco_Skill__DrawSkillTimeStop (Combat_Character_o* chr, const MethodInfo* method);
bool Combat_Deco_Skill__IsSubspace (Combat_Character_o* c, const MethodInfo* method);
void Combat_Deco_Skill___ctor (Combat_Deco_Skill_o* __this, const MethodInfo* method);
