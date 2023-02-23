#pragma once

#include "il2cpp.h"

void App_UnitIcon__SetBrightness (App_UnitIcon_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
void App_UnitIcon__SetPalleteSprite (App_UnitIcon_o* __this, UnityEngine_Sprite_o* pallete, const MethodInfo* method);
void App_UnitIcon__SetIcon (App_UnitIcon_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitIcon__SetIconNoEngaging (App_UnitIcon_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_UnitIcon__SetIcon (App_UnitIcon_o* __this, App_PersonData_o* person, App_JobData_o* job, bool isFemale, App_UnitItem_o* equipItem, const MethodInfo* method);
void App_UnitIcon__TryInitVariationJobIconIdDictionary (const MethodInfo* method);
System_String_o* App_UnitIcon__GetIconName (System_String_o* personIconID, System_String_o* jobIconID, System_String_o* itemIconID, const MethodInfo* method);
void App_UnitIcon__SetIcon (App_UnitIcon_o* __this, App_PersonData_o* person, App_JobData_o* job, bool isFemale, int32_t itemKind, const MethodInfo* method);
void App_UnitIcon__SetIcon (App_UnitIcon_o* __this, App_PersonData_o* person, App_GodData_o* god, bool isFemale, const MethodInfo* method);
void App_UnitIcon__SetIcon (App_UnitIcon_o* __this, App_GodData_o* god, bool isDarkness, const MethodInfo* method);
void App_UnitIcon__SetIcon (App_UnitIcon_o* __this, App_GodData_o* god, bool isFemale, bool isDarkness, const MethodInfo* method);
System_String_o* App_UnitIcon__ConvertPersonIconID (System_String_o* original, bool isFemale, const MethodInfo* method);
bool App_UnitIcon__TrySet (App_UnitIcon_o* __this, System_String_o* indexName, System_String_o* palleteName, const MethodInfo* method);
void App_UnitIcon__ResetIcon (App_UnitIcon_o* __this, const MethodInfo* method);
System_String_o* App_UnitIcon__GetWeaponKindId (App_UnitIcon_o* __this, int32_t itemKind, const MethodInfo* method);
UnityEngine_Sprite_o* App_UnitIcon__GetIndexSprite (App_UnitIcon_o* __this, System_String_o* name, const MethodInfo* method);
UnityEngine_Sprite_o* App_UnitIcon__GetPalleteSprite (App_UnitIcon_o* __this, System_String_o* name, const MethodInfo* method);
UnityEngine_Material_o* App_UnitIcon__get_material (App_UnitIcon_o* __this, const MethodInfo* method);
void App_UnitIcon__set_material (App_UnitIcon_o* __this, UnityEngine_Material_o* value, const MethodInfo* method);
void App_UnitIcon__Awake (App_UnitIcon_o* __this, const MethodInfo* method);
void App_UnitIcon__OnDestroy (App_UnitIcon_o* __this, const MethodInfo* method);
void App_UnitIcon__Start (App_UnitIcon_o* __this, const MethodInfo* method);
void App_UnitIcon__OnPopulateMesh (App_UnitIcon_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
void App_UnitIcon__UpdateMaterial (App_UnitIcon_o* __this, const MethodInfo* method);
void App_UnitIcon__UpdateIcon (App_UnitIcon_o* __this, const MethodInfo* method);
void App_UnitIcon__SetRandomIcon (App_UnitIcon_o* __this, const MethodInfo* method);
void App_UnitIcon___ctor (App_UnitIcon_o* __this, const MethodInfo* method);
void App_UnitIcon___cctor (const MethodInfo* method);
