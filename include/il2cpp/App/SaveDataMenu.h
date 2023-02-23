#pragma once

#include "il2cpp.h"

int32_t App_SaveDataMenu__GetShowRowMax (App_SaveDataMenu_o* __this, const MethodInfo* method);
bool App_SaveDataMenu__IsSaveFromPeriod (App_SaveDataMenu_o* __this, const MethodInfo* method);
System_String_o* App_SaveDataMenu__GetTitleMess (int32_t mode, const MethodInfo* method);
System_String_o* App_SaveDataMenu__GetHelpMess (int32_t mode, int32_t sequence, const MethodInfo* method);
System_String_o* App_SaveDataMenu__GetKeyHelpId (int32_t mode, const MethodInfo* method);
void App_SaveDataMenu___ctor (App_SaveDataMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuIltemList, App_BasicMenuContent_o* basicMenuContent, UnityEngine_GameObject_o* prefab, App_SaveDataMenuSequence_o* menuSequence, int32_t mode, App_GameSaveDataHeaderReader_o* saveDataHeaderReader, const MethodInfo* method);
void App_SaveDataMenu__AfterBuild (App_SaveDataMenu_o* __this, const MethodInfo* method);
void App_SaveDataMenu__OnDispose (App_SaveDataMenu_o* __this, const MethodInfo* method);
void App_SaveDataMenu__OnClose (App_SaveDataMenu_o* __this, const MethodInfo* method);
void App_SaveDataMenu__SaveDataLoadSetting (App_SaveDataMenu_o* __this, int32_t type, int32_t index, const MethodInfo* method);
void App_SaveDataMenu__SaveCallback (App_SaveDataMenu_o* __this, bool isSuccess, App_GameSaveDataHeader_o* saveDataHeader, const MethodInfo* method);
void App_SaveDataMenu__CopyCallback (App_SaveDataMenu_o* __this, bool isSuccess, App_GameSaveDataHeader_o* saveDataHeader, const MethodInfo* method);
void App_SaveDataMenu__DeleteCallback (App_SaveDataMenu_o* __this, bool isSuccess, const MethodInfo* method);
void App_SaveDataMenu__LoadPrfabAsync (const MethodInfo* method);
void App_SaveDataMenu__UnloadPrfab (const MethodInfo* method);
bool App_SaveDataMenu__IsLoadingPrfab (const MethodInfo* method);
void App_SaveDataMenu__LoadIconAsync (const MethodInfo* method);
void App_SaveDataMenu__UnloadIcon (const MethodInfo* method);
bool App_SaveDataMenu__IsLoadingIcon (const MethodInfo* method);
App_SpriteAtlasManager_o* App_SaveDataMenu__GetIconSpriteManager (const MethodInfo* method);
void App_SaveDataMenu__UpdateTitleBarText (App_SaveDataMenu_o* __this, const MethodInfo* method);
void App_SaveDataMenu__CreateMenuBind (App_SaveDataMenuSequence_o* super, int32_t mode, App_GameSaveDataHeaderReader_o* reader, const MethodInfo* method);
bool App_SaveDataMenu__IsSaveDataAccessSuccess (const MethodInfo* method);
void App_SaveDataMenu___cctor (const MethodInfo* method);
