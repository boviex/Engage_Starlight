#pragma once

#include "il2cpp.h"

System_String_o* App_BattleScene__get_DebuggerDisplay (App_BattleScene_o* __this, const MethodInfo* method);
void App_BattleScene___ctor (App_BattleScene_o* __this, const MethodInfo* method);
void App_BattleScene__Clear (App_BattleScene_o* __this, const MethodInfo* method);
void App_BattleScene__OnEnter (App_BattleScene_o* __this, const MethodInfo* method);
void App_BattleScene__OnExit (App_BattleScene_o* __this, const MethodInfo* method);
void App_BattleScene__Setup (App_BattleScene_o* __this, App_BattleSceneList_o* list, int32_t kind, int32_t current, int32_t target, App_BattleInfo_o* info, int32_t index, const MethodInfo* method);
int32_t App_BattleScene__GetKind (App_BattleScene_o* __this, const MethodInfo* method);
int32_t App_BattleScene__GetIndex (App_BattleScene_o* __this, const MethodInfo* method);
App_BattleScene_FieldResult_o* App_BattleScene__GetResult (App_BattleScene_o* __this, const MethodInfo* method);
bool App_BattleScene__IsResult (App_BattleScene_o* __this, int32_t result, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetResult (App_BattleScene_o* __this, int32_t result, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetKind (App_BattleScene_o* __this, int32_t kind, const MethodInfo* method);
int32_t App_BattleScene__GetDamage (App_BattleScene_o* __this, int32_t side, const MethodInfo* method);
int32_t App_BattleScene__GetHeal (App_BattleScene_o* __this, int32_t side, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetDamage (App_BattleScene_o* __this, int32_t side, int32_t damage, const MethodInfo* method);
int32_t App_BattleScene__GetHp (App_BattleScene_o* __this, int32_t side, const MethodInfo* method);
void App_BattleScene__AddHp (App_BattleScene_o* __this, int32_t side, int32_t value, const MethodInfo* method);
void App_BattleScene__Commit (App_BattleScene_o* __this, App_BattleInfo_o* info, const MethodInfo* method);
int32_t App_BattleScene__GetEngageCount (App_BattleScene_o* __this, int32_t side, const MethodInfo* method);
int32_t App_BattleScene__GetClampDamage (App_BattleScene_o* __this, int32_t side, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetSkill (App_BattleScene_o* __this, int32_t skill, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetSkill (App_BattleScene_o* __this, App_SkillData_o* skill, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetSkill (App_BattleScene_o* __this, System_String_o* sid, const MethodInfo* method);
App_SkillData_o* App_BattleScene__GetSkill (App_BattleScene_o* __this, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetItem (App_BattleScene_o* __this, int32_t item, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetItem (App_BattleScene_o* __this, App_ItemData_o* item, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetItem (App_BattleScene_o* __this, System_String_o* iid, const MethodInfo* method);
App_ItemData_o* App_BattleScene__GetItem (App_BattleScene_o* __this, const MethodInfo* method);
App_BattleScene_o* App_BattleScene__SetGod (App_BattleScene_o* __this, App_GodData_o* god, const MethodInfo* method);
App_GodData_o* App_BattleScene__GetGod (App_BattleScene_o* __this, const MethodInfo* method);
App_SkillData_o* App_BattleScene__GetShowSkill (App_BattleScene_o* __this, const MethodInfo* method);
System_String_o* App_BattleScene__GetSkillNameForDebuggerDisplay (App_BattleScene_o* __this, const MethodInfo* method);
int32_t App_BattleScene__get_Side (App_BattleScene_o* __this, const MethodInfo* method);
int32_t App_BattleScene__get_Target (App_BattleScene_o* __this, const MethodInfo* method);
int32_t App_BattleScene__get_Guardian (App_BattleScene_o* __this, const MethodInfo* method);
void App_BattleScene__set_Guardian (App_BattleScene_o* __this, int32_t value, const MethodInfo* method);
int32_t App_BattleScene__get_Current (App_BattleScene_o* __this, const MethodInfo* method);
int32_t App_BattleScene__get_Reverse (App_BattleScene_o* __this, const MethodInfo* method);
bool App_BattleScene__IsEntry (App_BattleScene_o* __this, int32_t side, const MethodInfo* method);
