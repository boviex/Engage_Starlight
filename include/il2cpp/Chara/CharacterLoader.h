#pragma once

#include "il2cpp.h"

void Chara_CharacterLoader___ctor (Chara_CharacterLoader_o* __this, App_Unit_o* unit, int32_t side, int64_t anim, System_String_array* condition, bool collision, bool isMute, const MethodInfo* method);
bool Chara_CharacterLoader__get_IsLoaded (Chara_CharacterLoader_o* __this, const MethodInfo* method);
void Chara_CharacterLoader__set_IsLoaded (Chara_CharacterLoader_o* __this, bool value, const MethodInfo* method);
Combat_Character_o* Chara_CharacterLoader__get_Chara (Chara_CharacterLoader_o* __this, const MethodInfo* method);
void Chara_CharacterLoader__set_Chara (Chara_CharacterLoader_o* __this, Combat_Character_o* value, const MethodInfo* method);
System_Collections_IEnumerator_o* Chara_CharacterLoader__Load (Chara_CharacterLoader_o* __this, const MethodInfo* method);
void Chara_CharacterLoader__Destroy (Chara_CharacterLoader_o* __this, const MethodInfo* method);
void Chara_CharacterLoader__SetActive (Chara_CharacterLoader_o* __this, int32_t animHash, float startTime, const MethodInfo* method);
