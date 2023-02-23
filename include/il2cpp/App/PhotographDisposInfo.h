#pragma once

#include "il2cpp.h"

System_String_array* App_PhotographDisposInfo__get_PauseGroupNameList (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
App_PhotographDisposInfo_FlagField_o* App_PhotographDisposInfo__get_Flag (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
bool App_PhotographDisposInfo__get_IsLoading (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
System_Collections_Generic_List_string__o* App_PhotographDisposInfo__get_CharacterIdList (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
System_String_o* App_PhotographDisposInfo__get_CurrentCharacterId (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__set_CurrentCharacterId (App_PhotographDisposInfo_o* __this, System_String_o* value, const MethodInfo* method);
int32_t App_PhotographDisposInfo__get_CharaType (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
System_Collections_Generic_List_PhotographPauseData__o* App_PhotographDisposInfo__get_PauseDataList (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
App_PhotographPauseData_o* App_PhotographDisposInfo__get_CurrentPauseData (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
bool App_PhotographDisposInfo__get_IsLookAtCamera (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__set_IsLookAtCamera (App_PhotographDisposInfo_o* __this, bool value, const MethodInfo* method);
void App_PhotographDisposInfo__set_LookAtRate (App_PhotographDisposInfo_o* __this, float value, const MethodInfo* method);
System_Collections_Generic_List_AccessoryData__o* App_PhotographDisposInfo__get_BodyAccDataList (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__set_BodyAccDataList (App_PhotographDisposInfo_o* __this, System_Collections_Generic_List_AccessoryData__o* value, const MethodInfo* method);
App_AccessoryData_o* App_PhotographDisposInfo__get_BodyAccData (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__set_BodyAccData (App_PhotographDisposInfo_o* __this, App_AccessoryData_o* value, const MethodInfo* method);
System_Collections_Generic_List_AccessoryData__o* App_PhotographDisposInfo__get_FaceAccDataList (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__set_FaceAccDataList (App_PhotographDisposInfo_o* __this, System_Collections_Generic_List_AccessoryData__o* value, const MethodInfo* method);
App_AccessoryData_o* App_PhotographDisposInfo__get_FaceAccData (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__set_FaceAccData (App_PhotographDisposInfo_o* __this, App_AccessoryData_o* value, const MethodInfo* method);
System_Collections_Generic_List_ItemData__o* App_PhotographDisposInfo__get_WeaponDataList (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__set_WeaponDataList (App_PhotographDisposInfo_o* __this, System_Collections_Generic_List_ItemData__o* value, const MethodInfo* method);
App_ItemData_o* App_PhotographDisposInfo__get_WeaponData (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__set_WeaponData (App_PhotographDisposInfo_o* __this, App_ItemData_o* value, const MethodInfo* method);
void App_PhotographDisposInfo__set_IsVisible (App_PhotographDisposInfo_o* __this, bool value, const MethodInfo* method);
int32_t App_PhotographDisposInfo__get_Female (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo___ctor (App_PhotographDisposInfo_o* __this, UnityEngine_GameObject_o* locator, App_PhotographSpotData_o* selectSpot, int32_t locatorNo, System_Collections_Generic_Dictionary_string__RuntimeAnimatorController__o* animeControllerDic, const MethodInfo* method);
App_PhotographPauseData_o* App_PhotographDisposInfo__GetRandomPause (App_PhotographDisposInfo_o* __this, System_String_o* charaId, const MethodInfo* method);
void App_PhotographDisposInfo__SetUpCharacter (App_PhotographDisposInfo_o* __this, System_String_o* characterId, App_PhotographPauseData_o* pauseData, App_AccessoryData_o* bodyAcc, App_AccessoryData_o* faceAcc, App_ItemData_o* weaponData, bool isRandom, const MethodInfo* method);
void App_PhotographDisposInfo__UpdateLook (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__InitCharacter (App_PhotographDisposInfo_o* __this, System_String_o* characterId, App_PhotographPauseData_o* pauseData, App_AccessoryData_o* bodyAcc, App_AccessoryData_o* faceAcc, App_ItemData_o* weaponData, bool isRandom, const MethodInfo* method);
void App_PhotographDisposInfo__SetUpPause (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__SetupWeapon (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo__DestroyWeapon (App_PhotographDisposInfo_o* __this, const MethodInfo* method);
void App_PhotographDisposInfo___cctor (const MethodInfo* method);
void App_PhotographDisposInfo____ctor_b__75_0 (App_PhotographDisposInfo_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_PhotographDisposInfo___SetUpPause_g__CreateObj_80_0 (App_PhotographDisposInfo_o* __this, System_String_o* path, const MethodInfo* method);
void App_PhotographDisposInfo___SetUpPause_b__80_1 (App_PhotographDisposInfo_o* __this, int64_t __, const MethodInfo* method);
