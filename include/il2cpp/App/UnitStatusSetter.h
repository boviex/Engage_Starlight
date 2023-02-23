#pragma once

#include "il2cpp.h"

UnityEngine_Color_o App_UnitStatusSetter__GetRingColor (int32_t type, const MethodInfo* method);
UnityEngine_Sprite_o* App_UnitStatusSetter__GetRingSprite (App_UnitStatusSetter_o* setter, int32_t type, const MethodInfo* method);
void App_UnitStatusSetter__SetArrowSprite (App_UnitStatusSetter_o* setter, UnityEngine_UI_Image_o* image, int32_t diff, const MethodInfo* method);
void App_UnitStatusSetter__SetTextColor (TMPro_TextMeshProUGUI_o* text, int32_t diff, bool isLimit, const MethodInfo* method);
int32_t App_UnitStatusSetter__GetUnitRingType (App_Unit_o* unit, const MethodInfo* method);
void App_UnitStatusSetter__Init (App_UnitStatusSetter_o* __this, const MethodInfo* method);
void App_UnitStatusSetter__SetData (App_UnitStatusSetter_o* __this, App_Unit_o* unit, int32_t flags, const MethodInfo* method);
void App_UnitStatusSetter__SetDataImpl (App_UnitStatusSetter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitStatusSetter__SetDataTempRing (App_UnitStatusSetter_o* __this, App_Unit_o* unit, App_GodUnit_o* god, App_UnitRing_o* ring, const MethodInfo* method);
void App_UnitStatusSetter__SetDataNoEnhance (App_UnitStatusSetter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitStatusSetter__SetDataClassChange (App_UnitStatusSetter_o* __this, App_Unit_o* before, App_Unit_o* after, const MethodInfo* method);
void App_UnitStatusSetter__SetGodName (App_UnitStatusSetter_o* __this, App_Unit_o* unit, App_GodUnit_o* god, App_UnitRing_o* ring, const MethodInfo* method);
void App_UnitStatusSetter__SetImageColor (App_UnitStatusSetter_o* __this, App_Unit_o* unit, App_GodUnit_o* god, const MethodInfo* method);
void App_UnitStatusSetter__SetGodInfo (App_UnitStatusSetter_o* __this, App_Unit_o* unit, App_GodUnit_o* god, const MethodInfo* method);
void App_UnitStatusSetter__SetItemIcons (App_UnitStatusSetter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitStatusSetter__SetSkill (App_UnitStatusSetter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitStatusSetter__SetLevel (App_UnitStatusSetter_o* __this, App_Unit_o* unit, App_Unit_o* unitNoEnhance, const MethodInfo* method);
void App_UnitStatusSetter__SetSP (App_UnitStatusSetter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitStatusSetter__SetEfficacy (App_UnitStatusSetter_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitStatusSetter__SetWeaponLevel (App_UnitStatusSetter_o* __this, App_Unit_o* baseUnit, App_Unit_o* tempUnit, const MethodInfo* method);
void App_UnitStatusSetter__SetBattleStatus (App_UnitStatusSetter_o* __this, App_Unit_o* unit, bool isGodChange, const MethodInfo* method);
void App_UnitStatusSetter__SetCapability (App_UnitStatusSetter_o* __this, App_Unit_o* unit, App_Unit_o* unitNoEnhance, bool isGodChange, bool isNoEnhance, const MethodInfo* method);
void App_UnitStatusSetter__SetAttackTitle (App_UnitStatusSetter_o* __this, App_Unit_o* unit, const MethodInfo* method);
App_SkillData_o* App_UnitStatusSetter__GetEfficacySkill (App_UnitStatusSetter_o* __this, App_Unit_o* unit, int32_t iconIndex, const MethodInfo* method);
void App_UnitStatusSetter___ctor (App_UnitStatusSetter_o* __this, const MethodInfo* method);
