#pragma once

#include "il2cpp.h"

bool Combat_HUDPopupGroup__get_IsAlive (Combat_HUDPopupGroup_o* __this, const MethodInfo* method);
void Combat_HUDPopupGroup__DamagePopup (Combat_Phase_o* phase, const MethodInfo* method);
void Combat_HUDPopupGroup__SetAsUnscaled (UnityEngine_Transform_o* root, const MethodInfo* method);
void Combat_HUDPopupGroup__InitialUpdate (Combat_HUDPopupGroup_o* __this, const MethodInfo* method);
void Combat_HUDPopupGroup__Update (Combat_HUDPopupGroup_o* __this, const MethodInfo* method);
bool Combat_HUDPopupGroup__DoesNeedForAttacker (Combat_Phase_o* phase, const MethodInfo* method);
void Combat_HUDPopupGroup__SetupAsAttacker (Combat_HUDPopupGroup_o* __this, Combat_Phase_o* phase, UnityEngine_Vector3_o worldPos, const MethodInfo* method);
void Combat_HUDPopupGroup__SetupAsDamager (Combat_HUDPopupGroup_o* __this, Combat_Phase_o* phase, UnityEngine_Vector3_o worldPos, const MethodInfo* method);
int32_t Combat_HUDPopupGroup__GetDamage (Combat_Phase_o* phase, const MethodInfo* method);
void Combat_HUDPopupGroup__init (Combat_HUDPopupGroup_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method);
System_String_o* Combat_HUDPopupGroup__GetNumberPrefabName (Combat_Phase_o* phase, int32_t* value, const MethodInfo* method);
System_String_o* Combat_HUDPopupGroup__GetPopupPrefabName (Combat_Phase_o* phase, int32_t style, const MethodInfo* method);
Combat_HUDPopup_o* Combat_HUDPopupGroup__CreateHUD (Combat_HUDPopupGroup_o* __this, System_String_o* name, float y, const MethodInfo* method);
void Combat_HUDPopupGroup___ctor (Combat_HUDPopupGroup_o* __this, const MethodInfo* method);
