#pragma once

#include "il2cpp.h"

Chara_CharacterViewer_o* Chara_CharacterViewer__get_Instance (const MethodInfo* method);
void Chara_CharacterViewer__set_Instance (Chara_CharacterViewer_o* value, const MethodInfo* method);
bool Chara_CharacterViewer__get_IsReloading (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_IsReloading (Chara_CharacterViewer_o* __this, bool value, const MethodInfo* method);
int32_t Chara_CharacterViewer__get_CharaViewWaitTime (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_CharaViewWaitTime (Chara_CharacterViewer_o* __this, int32_t value, const MethodInfo* method);
Combat_Character_o* Chara_CharacterViewer__get_Character (Chara_CharacterViewer_o* __this, const MethodInfo* method);
bool Chara_CharacterViewer__get_HideEffect (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_HideEffect (Chara_CharacterViewer_o* __this, bool value, const MethodInfo* method);
bool Chara_CharacterViewer__get_TimeChanger (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_TimeChanger (Chara_CharacterViewer_o* __this, bool value, const MethodInfo* method);
float Chara_CharacterViewer__get_WorldTime (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_WorldTime (Chara_CharacterViewer_o* __this, float value, const MethodInfo* method);
float Chara_CharacterViewer__get_HeavinessFactor (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_HeavinessFactor (Chara_CharacterViewer_o* __this, float value, const MethodInfo* method);
float Chara_CharacterViewer__get_AgilityFactor (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_AgilityFactor (Chara_CharacterViewer_o* __this, float value, const MethodInfo* method);
void Chara_CharacterViewer__Start (Chara_CharacterViewer_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* Chara_CharacterViewer__Initialize (Chara_CharacterViewer_o* __this, const MethodInfo* method);
Viewer_ViewerSetting_o* Chara_CharacterViewer__CreateMainMenuElementList (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__OnDestroy (Chara_CharacterViewer_o* __this, const MethodInfo* method);
float Chara_CharacterViewer__get_AnimTime (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_AnimTime (Chara_CharacterViewer_o* __this, float value, const MethodInfo* method);
System_String_o* Chara_CharacterViewer__get_PlayingAnimName (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_PlayingAnimName (Chara_CharacterViewer_o* __this, System_String_o* value, const MethodInfo* method);
UnityEngine_Animator_o* Chara_CharacterViewer__get_BodyAnimator (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_BodyAnimator (Chara_CharacterViewer_o* __this, UnityEngine_Animator_o* value, const MethodInfo* method);
UnityEngine_Animator_o* Chara_CharacterViewer__get_RideAnimator (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_RideAnimator (Chara_CharacterViewer_o* __this, UnityEngine_Animator_o* value, const MethodInfo* method);
UnityEngine_Animator_o* Chara_CharacterViewer__get_FaceAnimator (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_FaceAnimator (Chara_CharacterViewer_o* __this, UnityEngine_Animator_o* value, const MethodInfo* method);
bool Chara_CharacterViewer__get_IsStopping (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__set_IsStopping (Chara_CharacterViewer_o* __this, bool value, const MethodInfo* method);
bool Chara_CharacterViewer__get_IsCheckModel (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__MyUpdate (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__OnGUI (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__Refresh (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__UpdateAOC (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__UpdateWeaponAndAccessory (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__UpdateColor (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__UpdateScale (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__LoadPreset (Chara_CharacterViewer_o* __this, System_String_o* presetName, const MethodInfo* method);
void Chara_CharacterViewer__ReloadCharacter (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer__AfterReload (Chara_CharacterViewer_o* __this, const MethodInfo* method);
System_Collections_Generic_List_string__o* Chara_CharacterViewer__GetAllBodyAnimNames (Chara_CharacterViewer_o* __this, const MethodInfo* method);
System_Collections_Generic_List_string__o* Chara_CharacterViewer__GetAnimNameList (Chara_CharacterViewer_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method);
System_Action_string__o* Chara_CharacterViewer__SetBodyAnim (Chara_CharacterViewer_o* __this, int32_t bodyNum, const MethodInfo* method);
void Chara_CharacterViewer__SetBodyAnimImpl (Chara_CharacterViewer_o* __this, int32_t bodyNum, System_String_o* animName, const MethodInfo* method);
void Chara_CharacterViewer__SetWeapon (Chara_CharacterViewer_o* __this, System_String_o* weaponName, const MethodInfo* method);
void Chara_CharacterViewer__SetDress (Chara_CharacterViewer_o* __this, System_String_o* dressName, const MethodInfo* method);
System_Action_string__o* Chara_CharacterViewer__SetAccessory (Chara_CharacterViewer_o* __this, int32_t accseId, const MethodInfo* method);
void Chara_CharacterViewer__SetAccessoryImpl (Chara_CharacterViewer_o* __this, int32_t accseId, System_String_o* accessoryName, bool reload, const MethodInfo* method);
void Chara_CharacterViewer__UpdateColor (Chara_CharacterViewer_o* __this, System_String_o* targetName, UnityEngine_Color_o color, const MethodInfo* method);
void Chara_CharacterViewer__UpdateScale (Chara_CharacterViewer_o* __this, System_String_o* name, float value, const MethodInfo* method);
void Chara_CharacterViewer__ApplyPresetColor (Chara_CharacterViewer_o* __this, System_String_o* presetName, const MethodInfo* method);
void Chara_CharacterViewer__ChangeCameraType (Chara_CharacterViewer_o* __this, System_String_o* typeName, const MethodInfo* method);
void Chara_CharacterViewer__ChangeMap (Chara_CharacterViewer_o* __this, System_String_o* mapName, const MethodInfo* method);
System_Single_array* Chara_CharacterViewer__MovePosition (Chara_CharacterViewer_o* __this, System_String_o* name, System_Single_array* newAxis, const MethodInfo* method);
System_Single_array* Chara_CharacterViewer__MovePosition (Chara_CharacterViewer_o* __this, System_Single_array* newAxis, const MethodInfo* method);
void Chara_CharacterViewer__RotateChara (Chara_CharacterViewer_o* __this, System_String_o* name, float value, const MethodInfo* method);
void Chara_CharacterViewer__SetLookAt (Chara_CharacterViewer_o* __this, System_String_o* target, const MethodInfo* method);
System_Action_string__o* Chara_CharacterViewer__UpdateAsset (Chara_CharacterViewer_o* __this, int32_t type, const MethodInfo* method);
void Chara_CharacterViewer__PlayAnimation (Chara_CharacterViewer_o* __this, System_String_o* animName, const MethodInfo* method);
void Chara_CharacterViewer__PlayFacial (Chara_CharacterViewer_o* __this, System_String_o* animName, const MethodInfo* method);
System_Collections_IEnumerator_o* Chara_CharacterViewer__StartCharaView (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer___ctor (Chara_CharacterViewer_o* __this, const MethodInfo* method);
void Chara_CharacterViewer___cctor (const MethodInfo* method);
void Chara_CharacterViewer___Initialize_b__50_0 (Chara_CharacterViewer_o* __this, UniRx_Unit_o __, const MethodInfo* method);
void Chara_CharacterViewer___CreateMainMenuElementList_b__51_0 (Chara_CharacterViewer_o* __this, int32_t i, const MethodInfo* method);
void Chara_CharacterViewer___CreateMainMenuElementList_b__51_1 (Chara_CharacterViewer_o* __this, int32_t i, const MethodInfo* method);
void Chara_CharacterViewer___CreateMainMenuElementList_b__51_2 (Chara_CharacterViewer_o* __this, int32_t i, const MethodInfo* method);
void Chara_CharacterViewer___AfterReload_b__94_0 (Chara_CharacterViewer_o* __this, Combat_Character_o* chr, const MethodInfo* method);
void Chara_CharacterViewer___AfterReload_b__94_2 (Chara_CharacterViewer_o* __this, Combat_Character_o* chr, const MethodInfo* method);
void Chara_CharacterViewer___AfterReload_b__94_3 (Chara_CharacterViewer_o* __this, Combat_Character_o* chr, const MethodInfo* method);
void Chara_CharacterViewer___AfterReload_b__94_4 (Chara_CharacterViewer_o* __this, Combat_Character_o* __, const MethodInfo* method);
void Chara_CharacterViewer___AfterReload_b__94_5 (Chara_CharacterViewer_o* __this, Combat_Character_o* chr, const MethodInfo* method);
void Chara_CharacterViewer___AfterReload_b__94_6 (Chara_CharacterViewer_o* __this, Combat_Character_o* __, const MethodInfo* method);
void Chara_CharacterViewer___PlayFacial_g__SetLip_114_0 (System_String_o* chr, Chara_CharacterViewer___c__DisplayClass114_0_o* , Chara_CharacterViewer___c__DisplayClass114_1_o* , const MethodInfo* method);