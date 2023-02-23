#pragma once

#include "il2cpp.h"

void App_GameIcon__LoadAsync (const MethodInfo* method);
void App_GameIcon__Unload (const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetItemKind (System_String_o* iconName, bool isOutline, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetItemKind (int32_t itemKind, bool isOutline, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetItemKind (int32_t itemKind, bool isBullet, bool isOutline, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetItemKind (int32_t itemKind, App_JobData_o* jobData, bool isOutline, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetItemKind (App_ItemData_o* itemData, bool isOutline, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetItem (System_String_o* iconName, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetItem (App_ItemData_o* item, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetSystemItem (App_ItemData_o* item, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetEfficacy (System_String_o* iconLabel, bool isOutline, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetSkill (System_String_o* skillIconName, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetSkillEmpty (const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetGodSymbol (App_GodData_o* godData, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetGodRing (App_Unit_o* unit, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetGodRing (App_GodData_o* godData, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetGodRing (App_RingData_o* ring, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetGodRing (int32_t rank, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetAccessoryKinds (int32_t accessoryKinds, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetCommonRing (int32_t ringDataRank, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TryGetSystem (System_String_o* iconName, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TyrGetUnitIconIndex (System_String_o* name, const MethodInfo* method);
UnityEngine_Sprite_o* App_GameIcon__TyrGetUnitIconPallete (System_String_o* name, const MethodInfo* method);
void App_GameIcon__ClearUnitIconCache (const MethodInfo* method);
void App_GameIcon___ctor (App_GameIcon_o* __this, const MethodInfo* method);
