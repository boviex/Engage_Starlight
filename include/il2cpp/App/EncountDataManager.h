#pragma once

#include "il2cpp.h"

void App_EncountDataManager__OnCreate (App_EncountDataManager_o* __this, const MethodInfo* method);
void App_EncountDataManager__OnDispose (App_EncountDataManager_o* __this, const MethodInfo* method);
App_ItemData_array* App_EncountDataManager__GetWeapons (App_EncountDataManager_o* __this, int32_t rank, App_WeaponMask_o* weaponMask, const MethodInfo* method);
App_ItemData_o* App_EncountDataManager__GetNormalWeapon (App_EncountDataManager_o* __this, int32_t rank, App_ItemData_Kinds_array* kinds, const MethodInfo* method);
App_ItemData_o* App_EncountDataManager__GetAppendWeaponList (App_EncountDataManager_o* __this, int32_t rank, App_ItemData_Kinds_array* kinds, const MethodInfo* method);
App_StructDataArrayList_EncountWeaponCategoryData__o* App_EncountDataManager__GetNormalWeaponArrayList (App_EncountDataManager_o* __this, int32_t rank, App_ItemData_Kinds_array* kinds, const MethodInfo* method);
App_StructDataArrayList_EncountEquipData__o* App_EncountDataManager__GetData (App_EncountDataManager_o* __this, int32_t rank, const MethodInfo* method);
System_Collections_Generic_List_EncountUnitData__o* App_EncountDataManager__ReductDispos (System_Collections_Generic_List_EncountUnitData__o* encountUnitDataList, const MethodInfo* method);
float App_EncountDataManager__GetReductRate (const MethodInfo* method);
App_ItemData_o* App_EncountDataManager__TryGetRareMoneyItem (int32_t difficulty, int32_t nationLevel, const MethodInfo* method);
void App_EncountDataManager___ctor (App_EncountDataManager_o* __this, const MethodInfo* method);
void App_EncountDataManager___cctor (const MethodInfo* method);
