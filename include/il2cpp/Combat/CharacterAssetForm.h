#pragma once

#include "il2cpp.h"

Combat_CharacterAsset_o* Combat_CharacterAssetForm__get_Item (Combat_CharacterAssetForm_o* __this, int32_t index, const MethodInfo* method);
Combat_CharacterAsset_o* Combat_CharacterAssetForm__get_Item (Combat_CharacterAssetForm_o* __this, int32_t type, const MethodInfo* method);
bool Combat_CharacterAssetForm__get_InitialInvisibility (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
void Combat_CharacterAssetForm__set_InitialInvisibility (Combat_CharacterAssetForm_o* __this, bool value, const MethodInfo* method);
bool Combat_CharacterAssetForm__get_IsDone (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
void Combat_CharacterAssetForm__set_IsDone (Combat_CharacterAssetForm_o* __this, bool value, const MethodInfo* method);
void Combat_CharacterAssetForm__Build (Combat_CharacterAssetForm_o* __this, Combat_CharacterAppearance_o* appearance, bool invisible, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_CharacterAssetForm__BuildForTest (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_CharacterAssetForm__BuildCoroutine (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
void Combat_CharacterAssetForm__BeginContentsChange (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
void Combat_CharacterAssetForm__EndContentsChange (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
void Combat_CharacterAssetForm__SetViaTableResult (Combat_CharacterAssetForm_o* __this, App_AssetTable_Result_o* r, const MethodInfo* method);
void Combat_CharacterAssetForm__UnloadD (Combat_CharacterAssetForm_o* __this, UnityEngine_Transform_o* chr, const MethodInfo* method);
void Combat_CharacterAssetForm__Attach (UnityEngine_GameObject_o* me, UnityEngine_Transform_o* parent, const MethodInfo* method);
void Combat_CharacterAssetForm__Attach (Combat_CharacterAssetForm_o* __this, UnityEngine_GameObject_o* me, System_String_o* parent, const MethodInfo* method);
UnityEngine_Transform_o* Combat_CharacterAssetForm__FindInChildren (Combat_CharacterAssetForm_o* __this, System_String_o* parent, const MethodInfo* method);
System_Collections_Generic_IEnumerable_CharacterAsset__o* Combat_CharacterAssetForm__GetAccessories (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
void Combat_CharacterAssetForm__OnDestroy (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
void Combat_CharacterAssetForm__LoadDatabase (const MethodInfo* method);
void Combat_CharacterAssetForm___ctor (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Combat_CharacterAssetForm___Build_b__18_0 (Combat_CharacterAssetForm_o* __this, const MethodInfo* method);
