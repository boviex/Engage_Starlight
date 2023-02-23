#pragma once

#include "il2cpp.h"

App_Unit_o* App_SkillInheritanceMenu__get_m_Unit (const MethodInfo* method);
void App_SkillInheritanceMenu__set_m_Unit (App_Unit_o* value, const MethodInfo* method);
void App_SkillInheritanceMenu__CreateBind (App_ProcInst_o* super, App_Unit_o* unit, System_Collections_Generic_List_GodUnit__o* godList, System_Action_Unit__o* decideEventHandler, const MethodInfo* method);
System_Collections_Generic_List_BasicMenuItem__o* App_SkillInheritanceMenu__CreateMenuItemList (App_GodUnit_o* god, const MethodInfo* method);
void App_SkillInheritanceMenu___ctor (App_SkillInheritanceMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_SkillInheritanceMenuContent_o* menuContent, System_Collections_Generic_List_GodUnit__o* godList, const MethodInfo* method);
void App_SkillInheritanceMenu__SetupMenuSkill (App_SkillInheritanceMenu_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenu__UpdateSkillPoint (App_SkillInheritanceMenu_o* __this, const MethodInfo* method);
System_String_o* App_SkillInheritanceMenu__GetName (App_SkillInheritanceMenu_o* __this, const MethodInfo* method);
int32_t App_SkillInheritanceMenu__BCall (App_SkillInheritanceMenu_o* __this, const MethodInfo* method);
int32_t App_SkillInheritanceMenu__CustomCall (App_SkillInheritanceMenu_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenu__KeyLeft (App_SkillInheritanceMenu_o* __this, bool isTrigger, const MethodInfo* method);
void App_SkillInheritanceMenu__KeyRight (App_SkillInheritanceMenu_o* __this, bool isTrigger, const MethodInfo* method);
App_GodUnit_o* App_SkillInheritanceMenu__GetGod (App_SkillInheritanceMenu_o* __this, const MethodInfo* method);
App_GodUnit_o* App_SkillInheritanceMenu__GetGod (App_SkillInheritanceMenu_o* __this, int32_t index, const MethodInfo* method);
int32_t App_SkillInheritanceMenu__GetGodNum (App_SkillInheritanceMenu_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenu__SetSkillHelp (App_SkillInheritanceMenu_o* __this, App_SkillData_o* skill, int32_t level, const MethodInfo* method);
int32_t App_SkillInheritanceMenu__GetSelectGodIndex (App_SkillInheritanceMenu_o* __this, const MethodInfo* method);
void App_SkillInheritanceMenu___cctor (const MethodInfo* method);
