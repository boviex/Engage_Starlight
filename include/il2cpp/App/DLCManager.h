#pragma once

#include "il2cpp.h"

void App_DLCManager__Initialize (const MethodInfo* method);
void App_DLCManager__Release (const MethodInfo* method);
void App_DLCManager__Refresh (const MethodInfo* method);
void App_DLCManager__Update (const MethodInfo* method);
void App_DLCManager__MountDLC (const MethodInfo* method);
System_String_o* App_DLCManager__GetFolderName (int32_t content, const MethodInfo* method);
System_String_o* App_DLCManager__GetAssetGroupName (int32_t content, const MethodInfo* method);
int32_t App_DLCManager__GetContent (System_String_o* name, const MethodInfo* method);
System_String_o* App_DLCManager__GetStreamingAssetsDLCPath (int32_t content, const MethodInfo* method);
bool App_DLCManager__HasContent (int32_t content, const MethodInfo* method);
bool App_DLCManager__HasContents (App_DLCManager_Content_array* contents, const MethodInfo* method);
bool App_DLCManager__HasContentError (int32_t content, const MethodInfo* method);
int32_t App_DLCManager__GetAddOnContentIndex (int32_t content, const MethodInfo* method);
bool App_DLCManager__TryIndexToContent (int32_t index, int32_t* content, const MethodInfo* method);
bool App_DLCManager__IsRequiredReleaseVersion (int32_t content, const MethodInfo* method);
App_DLCManager_Content_array* App_DLCManager__GetAllContents (const MethodInfo* method);
void App_DLCManager__ShowUnacceptableVersion (const MethodInfo* method);
void App_DLCManager__ShowLostError (int32_t content, const MethodInfo* method);
void App_DLCManager__ShowLostError (App_DLCManager_Content_array* contents, const MethodInfo* method);
void App_DLCManager__ShowShopList (nn_account_UserHandle_o userHandle, const MethodInfo* method);
void App_DLCManager__InitHasList (const MethodInfo* method);
App_DLCManager_DLCList_o* App_DLCManager__GetHasList (int32_t content, const MethodInfo* method);
void App_DLCManager__RefreshHasList (const MethodInfo* method);
void App_DLCManager__StartListChangedEvent (const MethodInfo* method);
bool App_DLCManager__TryRunListChangedEvent (const MethodInfo* method);
void App_DLCManager__AddChangedEventListener (UnityEngine_Events_UnityAction_o* addEvent, const MethodInfo* method);
void App_DLCManager__RemoveChangedEventListener (UnityEngine_Events_UnityAction_o* removeEvent, const MethodInfo* method);
void App_DLCManager___ctor (App_DLCManager_o* __this, const MethodInfo* method);
void App_DLCManager___cctor (const MethodInfo* method);
