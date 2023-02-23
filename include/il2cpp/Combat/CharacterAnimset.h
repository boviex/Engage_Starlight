#pragma once

#include "il2cpp.h"

bool Combat_CharacterAnimset__op_Implicit (Combat_CharacterAnimset_o* a, const MethodInfo* method);
int64_t Combat_CharacterAnimset__get_PreloadAnims (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
void Combat_CharacterAnimset__set_PreloadAnims (Combat_CharacterAnimset_o* __this, int64_t value, const MethodInfo* method);
void Combat_CharacterAnimset__Dispose (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
void Combat_CharacterAnimset__Finalize (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
void Combat_CharacterAnimset___ctor (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
void Combat_CharacterAnimset___ctor (Combat_CharacterAnimset_o* __this, System_Collections_Generic_List_string__o* animsetNames, int32_t weaponStyle, const MethodInfo* method);
bool Combat_CharacterAnimset__IsInDB (System_String_o* animsetName, const MethodInfo* method);
void Combat_CharacterAnimset__Override (Combat_CharacterAnimset_o* __this, System_String_o* animsetName, const MethodInfo* method);
void Combat_CharacterAnimset__MaskUnusedAnims (Combat_CharacterAnimset_o* __this, int64_t f, const MethodInfo* method);
System_ValueTuple_AnimAsset__AnimAsset__o Combat_CharacterAnimset__FindAssetPair (Combat_CharacterAnimset_o* __this, System_String_o* keyword, const MethodInfo* method);
System_String_o* Combat_CharacterAnimset__GetKeyword (System_String_o* s, const MethodInfo* method);
void Combat_CharacterAnimset__LoadAsync (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
bool Combat_CharacterAnimset__IsLoading (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
void Combat_CharacterAnimset__MakeDAOC (Combat_CharacterAnimset_o* __this, Combat_CharacterAppearance_o* ap, const MethodInfo* method);
System_ValueTuple_AnimatorOverrideController__AnimatorOverrideController__o Combat_CharacterAnimset__MakeDAOC (Combat_CharacterAnimset_o* __this, bool isRide, System_String_o* name, const MethodInfo* method);
void Combat_CharacterAnimset__UseEngage2 (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
bool Combat_CharacterAnimset__Has (Combat_CharacterAnimset_o* __this, int32_t hash, const MethodInfo* method);
bool Combat_CharacterAnimset__HasDie (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
System_Collections_Generic_List_string__o* Combat_CharacterAnimset__GetAnimAssetsNameList (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
System_ValueTuple_string__List_string___o Combat_CharacterAnimset__FixCommaSeparated (System_Collections_Generic_List_string__o* src, const MethodInfo* method);
System_Collections_Generic_List_string__o* Combat_CharacterAnimset__InsertNML (System_Collections_Generic_List_string__o* aset, uint16_t myNML, const MethodInfo* method);
bool Combat_CharacterAnimset__get_HasWinAsStandingDie (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
void Combat_CharacterAnimset__UpdateStatistics (Combat_Character_o* chr, const MethodInfo* method);
bool Combat_CharacterAnimset__get_CanBeSmashed (Combat_CharacterAnimset_o* __this, const MethodInfo* method);
int32_t Combat_CharacterAnimset__SelectImpl (Combat_CharacterAnimset_o* __this, bool shuffle, int32_t lastHash, System_Int32_array* candidates, const MethodInfo* method);
int32_t Combat_CharacterAnimset__SelectRandom (Combat_CharacterAnimset_o* __this, int32_t lashHash, System_Int32_array* candidates, const MethodInfo* method);
int32_t Combat_CharacterAnimset__SelectRandomAttack12345 (Combat_CharacterAnimset_o* __this, int32_t lastHash, const MethodInfo* method);
int32_t Combat_CharacterAnimset__SelectInOrder (Combat_CharacterAnimset_o* __this, System_Int32_array* candidates, const MethodInfo* method);
void Combat_CharacterAnimset___Override_g__applyCell_84_0 (Combat_AnimAsset_o** aa, System_String_o* clipName, System_String_o* cellValue, int32_t hash, Combat_CharacterAnimset___c__DisplayClass84_0_o* , const MethodInfo* method);
System_String_o* Combat_CharacterAnimset___Override_g__complement_84_1 (System_String_o* clipName, System_String_o* cellValue, Combat_CharacterAnimset___c__DisplayClass84_0_o* , const MethodInfo* method);
void Combat_CharacterAnimset___LoadAsync_g__load_88_0 (Combat_AnimAsset_o* Body, Combat_AnimAsset_o** Ride, const MethodInfo* method);
void Combat_CharacterAnimset___InsertNML_g__Add_97_0 (System_String_o* s, Combat_CharacterAnimset___c__DisplayClass97_0_o* , const MethodInfo* method);
