#pragma once

#include "il2cpp.h"

bool App_GmapMode__get_IsAlongPath (const MethodInfo* method);
void App_GmapMode__set_IsAlongPath (bool value, const MethodInfo* method);
int32_t App_GmapMode__GetMode (const MethodInfo* method);
void App_GmapMode__SetMode (int32_t mode, const MethodInfo* method);
void App_GmapMode__GoMode (int32_t mode, const MethodInfo* method);
System_String_o* App_GmapMode__GetSceneName (int32_t mode, const MethodInfo* method);
void App_GmapMode__SetNowSpotId (System_String_o* spotId, const MethodInfo* method);
void App_GmapMode__SetNowSpotId (int32_t mode, System_String_o* spotId, const MethodInfo* method);
System_String_o* App_GmapMode__GetNowSpotId (const MethodInfo* method);
bool App_GmapMode__CanMoveDlcMap (const MethodInfo* method);
bool App_GmapMode__CanMoveGod (const MethodInfo* method);
bool App_GmapMode__CanMoveEvil (const MethodInfo* method);
bool App_GmapMode__CheckSpotModeOnGmap (App_GmapSpot_o* spot, int32_t mode, const MethodInfo* method);
bool App_GmapMode__CheckSpotModeAtChapter (App_GmapSpot_o* spot, int32_t mode, const MethodInfo* method);
bool App_GmapMode__CheckSpotModeOnGmap (System_String_o* spotID, int32_t mode, const MethodInfo* method);
bool App_GmapMode__CheckSpotModeImpl (System_String_o* spotID, int32_t mode, bool onGmap, const MethodInfo* method);
System_String_o* App_GmapMode__GetDlcGmapPathAssetPath (const MethodInfo* method);
System_String_o* App_GmapMode__GetDlcGmapSpotAssetPath (const MethodInfo* method);
void App_GmapMode___ctor (App_GmapMode_o* __this, const MethodInfo* method);
void App_GmapMode___cctor (const MethodInfo* method);
