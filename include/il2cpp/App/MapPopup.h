#pragma once

#include "il2cpp.h"

UnityEngine_Vector3_o App_MapPopup__GetPopupPos (App_Unit_o* unit, const MethodInfo* method);
UnityEngine_Vector3_o App_MapPopup__GetPopupPos (App_BattleInfoSide_o* side, const MethodInfo* method);
UnityEngine_GameObject_o* App_MapPopup__GetRoot (const MethodInfo* method);
void App_MapPopup__PlayDamage (App_BattleInfoSide_o* side, int32_t value, int32_t result, const MethodInfo* method);
void App_MapPopup__PlayDamage (App_Unit_o* unit, int32_t value, const MethodInfo* method);
void App_MapPopup__PlayHeal (App_Unit_o* unit, int32_t value, const MethodInfo* method);
void App_MapPopup__PlayHeal (UnityEngine_Vector3_o pos, int32_t value, const MethodInfo* method);
void App_MapPopup__PlayDamage (UnityEngine_Vector3_o pos, int32_t value, const MethodInfo* method);
void App_MapPopup__PlayCritical (UnityEngine_Vector3_o pos, int32_t value, const MethodInfo* method);
void App_MapPopup__PlayChainAttack (UnityEngine_Vector3_o pos, int32_t value, const MethodInfo* method);
void App_MapPopup__PlaySkill (App_Unit_o* unit, App_SkillData_o* skill, const MethodInfo* method);
void App_MapPopup__PlayText (UnityEngine_Vector3_o pos, UnityEngine_Color_o color, System_String_o* text, const MethodInfo* method);
void App_MapPopup__PlayPopup (App_BattleInfoSide_o* side, System_String_o* name, const MethodInfo* method);
void App_MapPopup__PlayPopup (App_Unit_o* unit, System_String_o* name, const MethodInfo* method);
Combat_HUDPopup_o* App_MapPopup__PlayPopup (UnityEngine_Vector3_o pos, System_String_o* name, const MethodInfo* method);
void App_MapPopup___ctor (App_MapPopup_o* __this, const MethodInfo* method);
