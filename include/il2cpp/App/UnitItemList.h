#pragma once

#include "il2cpp.h"

void App_UnitItemList___ctor (App_UnitItemList_o* __this, const MethodInfo* method);
void App_UnitItemList__Clear (App_UnitItemList_o* __this, const MethodInfo* method);
void App_UnitItemList__CopyFrom (App_UnitItemList_o* __this, App_UnitItemList_o* from, const MethodInfo* method);
int32_t App_UnitItemList__GetEmptyIndex (App_UnitItemList_o* __this, const MethodInfo* method);
int32_t App_UnitItemList__Add (App_UnitItemList_o* __this, App_ItemData_o* item, const MethodInfo* method);
int32_t App_UnitItemList__Add (App_UnitItemList_o* __this, App_UnitItem_o* unitItem, const MethodInfo* method);
void App_UnitItemList__Move (App_UnitItemList_o* __this, int32_t from, int32_t to, const MethodInfo* method);
void App_UnitItemList__CloseUp (App_UnitItemList_o* __this, const MethodInfo* method);
void App_UnitItemList__Equip (App_UnitItemList_o* __this, int32_t index, const MethodInfo* method);
bool App_UnitItemList__TakeOff (App_UnitItemList_o* __this, int32_t index, const MethodInfo* method);
bool App_UnitItemList__PutOff (App_UnitItemList_o* __this, int32_t index, bool closeup, const MethodInfo* method);
void App_UnitItemList__PutOffAll (App_UnitItemList_o* __this, const MethodInfo* method);
bool App_UnitItemList__IsEquipped (App_UnitItemList_o* __this, const MethodInfo* method);
App_UnitItem_o* App_UnitItemList__GetEquipped (App_UnitItemList_o* __this, const MethodInfo* method);
App_UnitItem_o* App_UnitItemList__GetEquipped (App_UnitItemList_o* __this, int32_t index, const MethodInfo* method);
int32_t App_UnitItemList__GetIndexEquipped (App_UnitItemList_o* __this, const MethodInfo* method);
int32_t App_UnitItemList__GetIndexEnchantable (App_UnitItemList_o* __this, App_ItemData_o* item, const MethodInfo* method);
bool App_UnitItemList__HasEnchanted (App_UnitItemList_o* __this, const MethodInfo* method);
App_UnitItem_o* App_UnitItemList__GetHold (App_UnitItemList_o* __this, App_Unit_o* unit, const MethodInfo* method);
int32_t App_UnitItemList__GetIndexHold (App_UnitItemList_o* __this, App_Unit_o* unit, const MethodInfo* method);
bool App_UnitItemList__HasRod (App_UnitItemList_o* __this, App_Unit_o* unit, bool canUseCheck, const MethodInfo* method);
bool App_UnitItemList__HasHealRod (App_UnitItemList_o* __this, App_Unit_o* unit, bool canUseCheck, const MethodInfo* method);
bool App_UnitItemList__HasHealRodForOneself (App_UnitItemList_o* __this, App_Unit_o* unit, bool canUseCheck, const MethodInfo* method);
bool App_UnitItemList__HasSupportRod (App_UnitItemList_o* __this, App_Unit_o* unit, bool canUseCheck, bool isOneself, const MethodInfo* method);
bool App_UnitItemList__HasInterferenceRod (App_UnitItemList_o* __this, App_Unit_o* unit, bool canUsCheck, const MethodInfo* method);
bool App_UnitItemList__HasCriticalWeapon (App_UnitItemList_o* __this, App_Unit_o* unit, bool canUseCheck, const MethodInfo* method);
bool App_UnitItemList__HasEfficacyWeapon (App_UnitItemList_o* __this, App_Unit_o* unit, App_Unit_o* target, bool canUseCheck, const MethodInfo* method);
bool App_UnitItemList__HasDropItem (App_UnitItemList_o* __this, const MethodInfo* method);
bool App_UnitItemList__HasItem (App_UnitItemList_o* __this, App_ItemData_o* item, const MethodInfo* method);
int32_t App_UnitItemList__FindItem (App_UnitItemList_o* __this, App_ItemData_o* item, const MethodInfo* method);
void App_UnitItemList__PutEngageItem (App_UnitItemList_o* __this, App_GodUnit_o* godUnit, bool engaged, const MethodInfo* method);
int32_t App_UnitItemList__GetItemCount (App_UnitItemList_o* __this, App_ItemData_o* item, const MethodInfo* method);
void App_UnitItemList__Serialize (App_UnitItemList_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_UnitItemList__Deserialize (App_UnitItemList_o* __this, App_Stream_o* stream, const MethodInfo* method);
App_UnitItem_o* App_UnitItemList__get_Item (App_UnitItemList_o* __this, int32_t index, const MethodInfo* method);
int32_t App_UnitItemList__get_Count (App_UnitItemList_o* __this, const MethodInfo* method);
