#pragma once

#include "il2cpp.h"

App_SkillData_o* App_SkillInheritanceMenuItem__get_Skill (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenuItem__set_Skill (App_SkillInheritanceMenuItem_o* __this, App_SkillData_o* value, const MethodInfo* method);
int32_t App_SkillInheritanceMenuItem__get_SortId (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenuItem__set_SortId (App_SkillInheritanceMenuItem_o* __this, int32_t value, const MethodInfo* method);
int32_t App_SkillInheritanceMenuItem__get_SkillLevel (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenuItem__set_SkillLevel (App_SkillInheritanceMenuItem_o* __this, int32_t value, const MethodInfo* method);
int32_t App_SkillInheritanceMenuItem__get_SkillCost (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenuItem__set_SkillCost (App_SkillInheritanceMenuItem_o* __this, int32_t value, const MethodInfo* method);
void App_SkillInheritanceMenuItem___ctor (App_SkillInheritanceMenuItem_o* __this, int32_t sortId, App_SkillData_o* skill, int32_t skillLevel, System_Action_Unit__o* decideEventHandler, const MethodInfo* method);
int32_t App_SkillInheritanceMenuItem__BuildAttribute (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenuItem__OnBuildMenuItemContent (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenuItem__SetInitialColor (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenuItem__OnSelect (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
int32_t App_SkillInheritanceMenuItem__ACall (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
bool App_SkillInheritanceMenuItem__IsInherited (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
bool App_SkillInheritanceMenuItem__IsEnoughLevel (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
bool App_SkillInheritanceMenuItem__IsEnoughSp (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenuItem__ResetCost (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenuItem__OnInherite (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
App_Unit_o* App_SkillInheritanceMenuItem__GetUnit (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
App_GodUnit_o* App_SkillInheritanceMenuItem__GetGod (App_SkillInheritanceMenuItem_o* __this, const MethodInfo* method);
