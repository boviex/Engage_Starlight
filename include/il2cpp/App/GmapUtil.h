#pragma once

#include "il2cpp.h"

int32_t App_GmapUtil__get_SortiableCount (const MethodInfo* method);
void App_GmapUtil__set_SortiableCount (int32_t value, const MethodInfo* method);
int32_t App_GmapUtil__GetEncountRank (App_GmapSpot_o* gmapSpot, const MethodInfo* method);
System_Collections_Generic_List_int__o* App_GmapUtil__GetSortieNum (App_GmapSpot_o* gmapSpot, const MethodInfo* method);
int32_t App_GmapUtil__CalcEncountRank (int32_t sortieCount, bool isDlcMode, const MethodInfo* method);
int32_t App_GmapUtil__GetAverageLevel (int32_t difficulty, int32_t sortieCount, const MethodInfo* method);
int32_t App_GmapUtil__GetVandreLevel (App_Unit_o** vandreUnit, const MethodInfo* method);
System_Collections_Generic_List_DisposData__o* App_GmapUtil__ReductDispos (System_Collections_Generic_List_DisposData__o* disposList, const MethodInfo* method);
App_ItemData_Kinds_array* App_GmapUtil__GetEquipableWeapons (App_JobData_o* job, App_WeaponMask_o** selectedMask, const MethodInfo* method);
App_ItemData_o* App_GmapUtil__GetDownLevelWeapon (App_ItemData_o* item, int32_t level, const MethodInfo* method);
void App_GmapUtil__RegistRareDisposCount (const MethodInfo* method);
int32_t App_GmapUtil__GetRareExpDisposCount (const MethodInfo* method);
int32_t App_GmapUtil__GetRareGoldDisposCount (const MethodInfo* method);
App_ItemData_Kinds_array* App_GmapUtil__WeaponMaskToArray (App_WeaponMask_o* mask, const MethodInfo* method);
App_WeaponMask_o* App_GmapUtil__WeaponArrayToMask (App_ItemData_Kinds_array* kinds, const MethodInfo* method);
bool App_GmapUtil__IsAppearGradlon (const MethodInfo* method);
void App_GmapUtil__UpdateVisibleGradlon (const MethodInfo* method);
void App_GmapUtil___ctor (App_GmapUtil_o* __this, const MethodInfo* method);
void App_GmapUtil___cctor (const MethodInfo* method);
