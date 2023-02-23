#pragma once

#include "il2cpp.h"

UnityEngine_GameObject_o* App_HubLocatorGroup__get_ActiveGroupRoot (App_HubLocatorGroup_o* __this, const MethodInfo* method);
System_Collections_Generic_List_GameObject__o* App_HubLocatorGroup__get_UnitList (App_HubLocatorGroup_o* __this, const MethodInfo* method);
System_Collections_Generic_List_HubAccess__o* App_HubLocatorGroup__get_AccessList (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup__set_AccessList (App_HubLocatorGroup_o* __this, System_Collections_Generic_List_HubAccess__o* value, const MethodInfo* method);
void App_HubLocatorGroup__SetActive (App_HubLocatorGroup_o* __this, bool active, const MethodInfo* method);
void App_HubLocatorGroup__SetSystemActive (App_HubLocatorGroup_o* __this, bool systemActive, const MethodInfo* method);
void App_HubLocatorGroup__SetEventActive (App_HubLocatorGroup_o* __this, bool active, const MethodInfo* method);
bool App_HubLocatorGroup__Contains (App_HubLocatorGroup_o* __this, System_String_array* param, System_String_o* value, const MethodInfo* method);
void App_HubLocatorGroup__SetCaseActive (App_HubLocatorGroup_o* __this, bool active, System_String_array* ignoreNode, const MethodInfo* method);
void App_HubLocatorGroup__UpdateActive (App_HubLocatorGroup_o* __this, const MethodInfo* method);
bool App_HubLocatorGroup__IsValid (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup___ctor (App_HubLocatorGroup_o* __this, const MethodInfo* method);
App_HubAccess_o* App_HubLocatorGroup__AddNewLocator (App_HubLocatorGroup_o* __this, UnityEngine_GameObject_o* locator, System_String_o* pid, const MethodInfo* method);
void App_HubLocatorGroup__ClearLocator (App_HubLocatorGroup_o* __this, UnityEngine_GameObject_o* locator, const MethodInfo* method);
void App_HubLocatorGroup__ReloadLocator (App_HubLocatorGroup_o* __this, App_HubAccess_o* access, const MethodInfo* method);
void App_HubLocatorGroup__ReleaseCharacters (App_HubLocatorGroup_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* App_HubLocatorGroup__LocateAccessObjects (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup__SetupAfter (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup__RefreshConfirmContent (App_HubLocatorGroup_o* __this, System_String_o* pid, const MethodInfo* method);
void App_HubLocatorGroup__RefreshConfirmAll (App_HubLocatorGroup_o* __this, const MethodInfo* method);
App_HubAccess_o* App_HubLocatorGroup__FindAccess (App_HubLocatorGroup_o* __this, System_String_o* pid, const MethodInfo* method);
void App_HubLocatorGroup__UpdateLocator (App_HubLocatorGroup_o* __this, System_String_o* locator, const MethodInfo* method);
void App_HubLocatorGroup__RelocateAccess (App_HubLocatorGroup_o* __this, const MethodInfo* method);
bool App_HubLocatorGroup__IsCharacterLoading (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup__SetupCharacterFadeLength (App_HubLocatorGroup_o* __this, Combat_Character_o* chara, float fadeDistance, const MethodInfo* method);
void App_HubLocatorGroup__SetupCharacterFadeRadius (App_HubLocatorGroup_o* __this, Combat_Character_o* chara, float radius, const MethodInfo* method);
System_String_o* App_HubLocatorGroup__GetPlaceWaer (App_HubLocatorGroup_o* __this, System_String_o* pid, App_HubAccess_o* access, const MethodInfo* method);
void App_HubLocatorGroup__SaveAccessory (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup__RestoreAccessory (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup__ResetLookAt (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup__ResetBody (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup__Reload (App_HubLocatorGroup_o* __this, System_String_o* pid, const MethodInfo* method);
void App_HubLocatorGroup__IncrementLoadingCount (App_HubLocatorGroup_o* __this, const MethodInfo* method);
void App_HubLocatorGroup__CreateCharacter (App_HubLocatorGroup_o* __this, System_String_o* pid, UnityEngine_GameObject_o* locator, App_HubAccess_o* access, System_Action_HubUnitController__o* callback, const MethodInfo* method);
