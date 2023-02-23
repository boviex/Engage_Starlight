#pragma once

#include "il2cpp.h"

Combat_CharacterAsset_o* App_UnitInfoWeaponModelPool__GetAndLoadWeapon (App_UnitInfoWeaponModelPool_o* __this, App_Unit_o* unit, App_UnitItem_o* equipped, int32_t assetType, const MethodInfo* method);
Combat_CharacterAsset_o* App_UnitInfoWeaponModelPool__GetAndLoadWeaponShop (App_UnitInfoWeaponModelPool_o* __this, App_UnitItem_o* equipped, int32_t assetType, const MethodInfo* method);
void App_UnitInfoWeaponModelPool__AddLeft (App_UnitInfoWeaponModelPool_o* __this, App_Unit_o* unit, App_UnitItem_o* equipped, const MethodInfo* method);
void App_UnitInfoWeaponModelPool__AddRight (App_UnitInfoWeaponModelPool_o* __this, App_Unit_o* unit, App_UnitItem_o* equipped, const MethodInfo* method);
UnityEngine_GameObject_o* App_UnitInfoWeaponModelPool__TryGetLeft (App_UnitInfoWeaponModelPool_o* __this, App_UnitItem_o* equipped, const MethodInfo* method);
UnityEngine_GameObject_o* App_UnitInfoWeaponModelPool__TryGetRight (App_UnitInfoWeaponModelPool_o* __this, App_UnitItem_o* equipped, const MethodInfo* method);
void App_UnitInfoWeaponModelPool__TryActiveLeft (App_UnitInfoWeaponModelPool_o* __this, App_UnitItem_o* equipped, const MethodInfo* method);
void App_UnitInfoWeaponModelPool__TryActiveRight (App_UnitInfoWeaponModelPool_o* __this, App_UnitItem_o* equipped, const MethodInfo* method);
void App_UnitInfoWeaponModelPool__SetShopWeapon (App_UnitInfoWeaponModelPool_o* __this, App_UnitItem_o* equipped, const MethodInfo* method);
void App_UnitInfoWeaponModelPool__ClearShopWeapon (const MethodInfo* method);
bool App_UnitInfoWeaponModelPool__IsShopWeapon (const MethodInfo* method);
void App_UnitInfoWeaponModelPool__LoadAsync (App_UnitInfoWeaponModelPool_o* __this, System_Action_o* callback, const MethodInfo* method);
System_Collections_IEnumerator_o* App_UnitInfoWeaponModelPool__WaitLoaded (App_UnitInfoWeaponModelPool_o* __this, const MethodInfo* method);
bool App_UnitInfoWeaponModelPool__IsLoaded (App_UnitInfoWeaponModelPool_o* __this, const MethodInfo* method);
void App_UnitInfoWeaponModelPool__Delete (App_UnitInfoWeaponModelPool_o* __this, const MethodInfo* method);
void App_UnitInfoWeaponModelPool___ctor (App_UnitInfoWeaponModelPool_o* __this, const MethodInfo* method);
void App_UnitInfoWeaponModelPool___cctor (const MethodInfo* method);
void App_UnitInfoWeaponModelPool___GetAndLoadWeaponShop_b__6_0 (App_UnitInfoWeaponModelPool_o* __this, const MethodInfo* method);
