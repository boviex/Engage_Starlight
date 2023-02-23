#pragma once

#include "il2cpp.h"

bool App_ShopCore__BuyOnWeaponShop (App_Unit_o* unit, App_ItemData_o* itemData, const MethodInfo* method);
bool App_ShopCore__BuyOnItemShop (App_Unit_o* unit, App_ItemData_o* itemData, const MethodInfo* method);
bool App_ShopCore__BuyOnFleaMarket (App_Unit_o* unit, App_ItemData_o* itemData, const MethodInfo* method);
void App_ShopCore__BuyOnAccessoryShop (App_AccessoryData_o* accessoryData, const MethodInfo* method);
void App_ShopCore__Sell (App_Unit_o* unit, int32_t itemIndex, bool closeup, const MethodInfo* method);
App_UnitItem_o* App_ShopCore__Refine (App_Unit_o* unit, int32_t itemIndex, int32_t refineLevel, const MethodInfo* method);
int32_t App_ShopCore__GetNeededIronToRefine (App_UnitItem_o* unitItem, int32_t newRefineLevel, const MethodInfo* method);
int32_t App_ShopCore__GetNeededSteelToRefine (App_UnitItem_o* unitItem, int32_t newRefineLevel, const MethodInfo* method);
int32_t App_ShopCore__GetNeededSilverToRefine (App_UnitItem_o* unitItem, int32_t newRefineLevel, const MethodInfo* method);
int32_t App_ShopCore__GetNeededMoneyToRefine (App_UnitItem_o* unitItem, int32_t newRefineLevel, const MethodInfo* method);
App_UnitItem_o* App_ShopCore__Evolve (App_Unit_o* unit, int32_t itemIndex, int32_t evolveDataIndex, const MethodInfo* method);
App_UnitItem_o* App_ShopCore__Engrave (App_Unit_o* unit, int32_t itemIndex, App_GodData_o* godData, const MethodInfo* method);
int32_t App_ShopCore__GetEngraveCost (App_ItemData_o* itemData, const MethodInfo* method);
int32_t App_ShopCore__Exchange (App_ItemRefineExchangeData_o* sourceMaterialData, App_ItemRefineExchangeData_o* targetMaterialData, int32_t sourceMaterialCount, const MethodInfo* method);
int32_t App_ShopCore__GetUnitItemEmptyCount (App_Unit_o* unit, const MethodInfo* method);
App_UnitItem_o* App_ShopCore__GetUnitItem (App_Unit_o* unit, int32_t itemIndex, const MethodInfo* method);
bool App_ShopCore__IsPriceDown (const MethodInfo* method);
int32_t App_ShopCore__GetPrice (App_ItemData_o* itemData, bool isDiscountableShop, const MethodInfo* method);
bool App_ShopCore__CanAdd (App_Unit_o* unit, App_ItemData_o* itemData, const MethodInfo* method);
int32_t App_ShopCore__CalcAdd (App_Unit_o* unit, App_ItemData_o* itemData, const MethodInfo* method);
bool App_ShopCore__IsInventoryMax (App_ItemData_o* itemData, const MethodInfo* method);
int32_t App_ShopCore__AddItem (App_Unit_o* unit, App_ItemData_o* itemData, const MethodInfo* method);
int32_t App_ShopCore__GetRefineMaterialCount (App_ItemRefineExchangeData_o* materialData, const MethodInfo* method);
int32_t App_ShopCore__GetRefineMaterialMax (App_ItemRefineExchangeData_o* materialData, const MethodInfo* method);
void App_ShopCore__AddAchievementOnBuy (App_ItemData_o* itemData, int32_t count, const MethodInfo* method);
void App_ShopCore__AddAchievementOnSell (App_ItemData_o* itemData, int32_t count, const MethodInfo* method);
void App_ShopCore__AddAchievementOnRefine (App_ItemData_o* itemData, int32_t count, const MethodInfo* method);
void App_ShopCore__AddAchievementOnBuyAccessory (const MethodInfo* method);
System_String_o* App_ShopCore__GetUnknownName (App_UnitItem_o* unititem, const MethodInfo* method);
void App_ShopCore___ctor (App_ShopCore_o* __this, const MethodInfo* method);
