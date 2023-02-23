#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_PhotographDisposInfo__o* App_PhotographDisposManager__get_DisposInfoList (App_PhotographDisposManager_o* __this, const MethodInfo* method);
App_PhotographDisposInfo_o* App_PhotographDisposManager__get_CurrentDisposInfo (App_PhotographDisposManager_o* __this, const MethodInfo* method);
int32_t App_PhotographDisposManager__get_CurrentDisposIdx (App_PhotographDisposManager_o* __this, const MethodInfo* method);
UnityEngine_GameObject_o* App_PhotographDisposManager__get_CurrentDisposEffect (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager__SetUp (App_PhotographDisposManager_o* __this, App_PhotographSpotData_o* selectSpot, UnityEngine_GameObject_o* currentSpot, const MethodInfo* method);
bool App_PhotographDisposManager__IsLoadingCharacter (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager__RandomDispos (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager__ChangeAcc (App_PhotographDisposManager_o* __this, bool isBody, bool isNext, const MethodInfo* method);
void App_PhotographDisposManager__ChangeAcc (App_PhotographDisposManager_o* __this, App_AccessoryData_o* bodyAcc, App_AccessoryData_o* faceAcc, const MethodInfo* method);
void App_PhotographDisposManager__EditDispos (App_PhotographDisposManager_o* __this, System_String_o* characterId, App_PhotographPauseData_o* pauseData, App_ItemData_o* weaponData, App_AccessoryData_o* bodyAcc, App_AccessoryData_o* faceAcc, bool isRandom, const MethodInfo* method);
void App_PhotographDisposManager__DecisionDispos (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager__CancelDispos (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager__DisposEffectFadeIn (App_PhotographDisposManager_o* __this, bool isOnlyCurrentDispos, const MethodInfo* method);
void App_PhotographDisposManager__DisposEffectFadeOut (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager__ChangeDispos (App_PhotographDisposManager_o* __this, bool isTrigger, bool isNext, const MethodInfo* method);
void App_PhotographDisposManager__ChangeIsLookAtCamera (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager__ResetLookAtRate (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager__End (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager__LoadResource (const MethodInfo* method);
bool App_PhotographDisposManager__IsLoadingResource (const MethodInfo* method);
void App_PhotographDisposManager__UnloadResource (const MethodInfo* method);
void App_PhotographDisposManager___ctor (App_PhotographDisposManager_o* __this, const MethodInfo* method);
void App_PhotographDisposManager___cctor (const MethodInfo* method);
