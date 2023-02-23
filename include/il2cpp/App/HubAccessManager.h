#pragma once

#include "il2cpp.h"

System_String_o* App_HubAccessManager__get_SceneName (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__set_SceneName (App_HubAccessManager_o* __this, System_String_o* value, const MethodInfo* method);
System_Collections_Generic_List_HubAccessData__o* App_HubAccessManager__get_AccessList (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__set_AccessList (App_HubAccessManager_o* __this, System_Collections_Generic_List_HubAccessData__o* value, const MethodInfo* method);
System_Collections_Generic_List_HubDisposData__o* App_HubAccessManager__get_DisposList (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__set_DisposList (App_HubAccessManager_o* __this, System_Collections_Generic_List_HubDisposData__o* value, const MethodInfo* method);
System_Collections_Generic_List_HubDisposData__o* App_HubAccessManager__get_DisposItemList (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__set_DisposItemList (App_HubAccessManager_o* __this, System_Collections_Generic_List_HubDisposData__o* value, const MethodInfo* method);
System_Collections_Generic_List_ValueTuple_string__int___o* App_HubAccessManager__get_TalkLimit (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__set_TalkLimit (App_HubAccessManager_o* __this, System_Collections_Generic_List_ValueTuple_string__int___o* value, const MethodInfo* method);
System_Collections_Generic_List_AnimalData__o* App_HubAccessManager__get_AnimalDataList (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__set_AnimalDataList (App_HubAccessManager_o* __this, System_Collections_Generic_List_AnimalData__o* value, const MethodInfo* method);
bool App_HubAccessManager__IsItemType (App_HubDisposData_o* dispos, const MethodInfo* method);
void App_HubAccessManager__Setup (App_HubAccessManager_o* __this, System_String_o* sceneName, int32_t timezoneType, const MethodInfo* method);
void App_HubAccessManager__ConfirmContent (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__Reset (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__Refresh (App_HubAccessManager_o* __this, const MethodInfo* method);
bool App_HubAccessManager__IsUsedLocator (App_HubAccessManager_o* __this, System_String_o* locatorName, const MethodInfo* method);
bool App_HubAccessManager__TrySetAccessObject (App_HubAccessManager_o* __this, App_HubDisposData_o* data, App_Random_o* random, const MethodInfo* method);
bool App_HubAccessManager__TryRemoveAccessObject (App_HubAccessManager_o* __this, App_HubDisposData_o* data, const MethodInfo* method);
App_HubAccessData_o* App_HubAccessManager__AddNewLocator (App_HubAccessManager_o* __this, System_String_o* locator, const MethodInfo* method);
void App_HubAccessManager__ClearLocator (App_HubAccessManager_o* __this, System_String_o* locator, const MethodInfo* method);
App_HubAccessData_o* App_HubAccessManager__FindLocator (App_HubAccessManager_o* __this, System_String_o* locator, const MethodInfo* method);
App_HubAccessData_o* App_HubAccessManager__FindPID (App_HubAccessManager_o* __this, System_String_o* pid, const MethodInfo* method);
bool App_HubAccessManager__IsAlreadyLocated (App_HubAccessManager_o* __this, System_String_o* pid, const MethodInfo* method);
bool App_HubAccessManager__IsAvailablePID (App_HubAccessManager_o* __this, System_String_o* pid, bool disabledTalk, const MethodInfo* method);
System_String_o* App_HubAccessManager__GetSelectedGodWithSpecial (App_HubAccessManager_o* __this, App_GodUnit_o* godUnit, const MethodInfo* method);
System_String_o* App_HubAccessManager__GetPlayerGod (App_HubAccessManager_o* __this, const MethodInfo* method);
System_String_o* App_HubAccessManager__GetChooseID (App_HubAccessManager_o* __this, App_HubDisposData_o* data, int32_t* count, App_Random_o* random, const MethodInfo* method);
System_String_o* App_HubAccessManager__GetChooseAnimalID (App_HubAccessManager_o* __this, App_HubDisposData_o* data, App_Random_o* random, const MethodInfo* method);
System_String_o* App_HubAccessManager__GetChooseAnimalItem (App_HubAccessManager_o* __this, App_HubDisposData_o* data, const MethodInfo* method);
bool App_HubAccessManager__EntryTalkLimit (App_HubAccessManager_o* __this, System_String_o* talkType, const MethodInfo* method);
int32_t App_HubAccessManager__GetNotTakedPieceOfBond (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__Dump (App_HubAccessManager_o* __this, const MethodInfo* method);
System_Collections_Generic_List_HubDisposData__o* App_HubAccessManager__CopyDisposList (App_HubAccessManager_o* __this, System_String_o* sceneName, const MethodInfo* method);
System_Collections_Generic_List_AnimalData__o* App_HubAccessManager__CopyAnimalList (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager__ConfirmMaterial (App_HubAccessManager_o* __this, const MethodInfo* method);
void App_HubAccessManager___ctor (App_HubAccessManager_o* __this, const MethodInfo* method);
