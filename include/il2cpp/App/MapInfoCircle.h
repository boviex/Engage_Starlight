#pragma once

#include "il2cpp.h"

void App_MapInfoCircle__Start (App_MapInfoCircle_o* __this, const MethodInfo* method);
UnityEngine_Material_array* App_MapInfoCircle__GetMaterials (App_MapInfoCircle_o* __this, const MethodInfo* method);
UnityEngine_Color_o App_MapInfoCircle__GetColor (App_MapInfoCircle_o* __this, App_Unit_o* unit, bool isCheckFixed, const MethodInfo* method);
bool App_MapInfoCircle__CanTarget (App_MapInfoCircle_o* __this, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
bool App_MapInfoCircle__CanAttack (App_MapInfoCircle_o* __this, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
bool App_MapInfoCircle__CanDance (App_MapInfoCircle_o* __this, App_Unit_o* dancer, App_Unit_o* target, const MethodInfo* method);
bool App_MapInfoCircle__CanContract (App_MapInfoCircle_o* __this, App_Unit_o* contractor, App_Unit_o* target, const MethodInfo* method);
bool App_MapInfoCircle__CanUseHealRod (App_MapInfoCircle_o* __this, App_Unit_o* user, App_Unit_o* target, const MethodInfo* method);
bool App_MapInfoCircle__CanUseHealRod (App_MapInfoCircle_o* __this, App_Unit_o* user, App_Unit_o* target, App_ItemData_o* itemData, const MethodInfo* method);
bool App_MapInfoCircle__CanUseSupportRod (App_MapInfoCircle_o* __this, App_Unit_o* user, App_Unit_o* target, const MethodInfo* method);
bool App_MapInfoCircle__CanUseSupportRod (App_MapInfoCircle_o* __this, App_Unit_o* user, App_Unit_o* target, App_ItemData_o* itemData, bool isItemSelected, const MethodInfo* method);
bool App_MapInfoCircle__CanUseInterferenceRod (App_MapInfoCircle_o* __this, App_Unit_o* user, App_Unit_o* target, const MethodInfo* method);
bool App_MapInfoCircle__CanUseEngageRod (App_MapInfoCircle_o* __this, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
bool App_MapInfoCircle__CanEnchantItem (App_MapInfoCircle_o* __this, App_Unit_o* unit, App_Unit_o* target, const MethodInfo* method);
void App_MapInfoCircle__DrawCircle (App_MapInfoCircle_o* __this, App_Unit_o* unit, int32_t index, const MethodInfo* method);
void App_MapInfoCircle__DrawNormalCircle (App_MapInfoCircle_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoCircle__DrawBossCircle (App_MapInfoCircle_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoCircle__DrawLastBossCircle (App_MapInfoCircle_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_MapInfoCircle__IsDrawLowRotateCircle (App_MapInfoCircle_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_MapInfoCircle__IsDrawHighRotateCircle (App_MapInfoCircle_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoCircle__LateUpdate (App_MapInfoCircle_o* __this, const MethodInfo* method);
void App_MapInfoCircle__SetActive (App_MapInfoCircle_o* __this, bool active, const MethodInfo* method);
void App_MapInfoCircle__SetUnit (App_MapInfoCircle_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoCircle__SetAnime (App_MapInfoCircle_o* __this, int32_t anime, const MethodInfo* method);
void App_MapInfoCircle__SetWarpUnit (App_MapInfoCircle_o* __this, const MethodInfo* method);
void App_MapInfoCircle__SetRewarpUnit (App_MapInfoCircle_o* __this, const MethodInfo* method);
void App_MapInfoCircle__ResistWarpUnit (App_MapInfoCircle_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoCircle__ResistRewarpUnit (App_MapInfoCircle_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_MapInfoCircle__ClearWarpUnit (App_MapInfoCircle_o* __this, const MethodInfo* method);
void App_MapInfoCircle___ctor (App_MapInfoCircle_o* __this, const MethodInfo* method);
