#pragma once

#include "il2cpp.h"

void App_UnitInfo_Window___ctor (App_UnitInfo_Window_o* __this, System_Collections_Generic_Stack_UnitInfo_Mode__o* modeStack, App_Unit_o* unit, bool isDuplicateRenderTexture, bool isReverse, bool isHideStatus, const MethodInfo* method);
void App_UnitInfo_Window__Destroy (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__PrepareCharaModel (App_UnitInfo_Window_o* __this, const MethodInfo* method);
bool App_UnitInfo_Window__IsPreparingCharaModel (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__PrepareWindow (App_UnitInfo_Window_o* __this, const MethodInfo* method);
bool App_UnitInfo_Window__IsPreparingWindow (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__Postprepare (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__Tick (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__SetUnit (App_UnitInfo_Window_o* __this, App_Unit_o* unit, bool bUpdateStatus, bool bRelax, bool bReverseRotation, bool isDelayLoad, System_Action_o* onSetupDoneCallback, const MethodInfo* method);
void App_UnitInfo_Window__ResetUnit (App_UnitInfo_Window_o* __this, bool bRelax, bool bReverseRotation, bool isDelayLoad, const MethodInfo* method);
void App_UnitInfo_Window__SetUnitHub (App_UnitInfo_Window_o* __this, App_Unit_o* unit, bool bRelax, bool bReverseRotation, bool isDelayLoad, const MethodInfo* method);
void App_UnitInfo_Window__SetUnitRelay (App_UnitInfo_Window_o* __this, App_PersonData_o* person, App_JobData_o* job, App_UnitEdit_o* edit, const MethodInfo* method);
void App_UnitInfo_Window__PlayCharaVoice (App_UnitInfo_Window_o* __this, System_String_o* personSwitchName, System_String_o* engageSwitchName, System_String_o* eventName, const MethodInfo* method);
void App_UnitInfo_Window__ReserveCharaVoice (App_UnitInfo_Window_o* __this, System_String_o* personSwitchName, System_String_o* engageSwitchName, System_String_o* eventName, const MethodInfo* method);
void App_UnitInfo_Window__PlayReservedCharaVoice (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__AddCharaRot (App_UnitInfo_Window_o* __this, UnityEngine_Quaternion_o quaternion, const MethodInfo* method);
void App_UnitInfo_Window__SetLeftCameraAdjustY (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__SetWeaponShopChara (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__SetSummonChara (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__SetGod (App_UnitInfo_Window_o* __this, App_GodUnit_o* god, bool bRelax, bool bReverseRotation, System_Action_o* onSetupDoneCallback, const MethodInfo* method);
void App_UnitInfo_Window__SetEfficacyAttack (App_UnitInfo_Window_o* __this, bool isEfficacy, const MethodInfo* method);
void App_UnitInfo_Window__SetRelaxAnime (App_UnitInfo_Window_o* __this, float transitionDuration, const MethodInfo* method);
void App_UnitInfo_Window__SetStatusAnime (App_UnitInfo_Window_o* __this, float transitionDuration, const MethodInfo* method);
void App_UnitInfo_Window__SetFortuneTellingGoodAnime (App_UnitInfo_Window_o* __this, bool isAllowUnitNull, const MethodInfo* method);
void App_UnitInfo_Window__SetFortuneTellingBadAnime (App_UnitInfo_Window_o* __this, bool isAllowUnitNull, const MethodInfo* method);
void App_UnitInfo_Window__SetSelectGodNormalFace (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__UpdateCurrentUnit (App_UnitInfo_Window_o* __this, const MethodInfo* method);
App_Unit_o* App_UnitInfo_Window__GetUnit (App_UnitInfo_Window_o* __this, const MethodInfo* method);
App_GodUnit_o* App_UnitInfo_Window__GetGod (App_UnitInfo_Window_o* __this, const MethodInfo* method);
UnityEngine_RenderTexture_o* App_UnitInfo_Window__GetRenderTexture (App_UnitInfo_Window_o* __this, const MethodInfo* method);
UnityEngine_Camera_o* App_UnitInfo_Window__GetFaceCameraComponent (App_UnitInfo_Window_o* __this, const MethodInfo* method);
App_UnitInfoCharaImageMaskOffset_o* App_UnitInfo_Window__GetCharaImageMask (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__SetVisible (App_UnitInfo_Window_o* __this, bool isVisible, const MethodInfo* method);
void App_UnitInfo_Window__ToggleVisible (App_UnitInfo_Window_o* __this, const MethodInfo* method);
bool App_UnitInfo_Window__IsVisible (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__SetVisibleOfStatus (App_UnitInfo_Window_o* __this, int32_t mode, bool isVisible, const MethodInfo* method);
bool App_UnitInfo_Window__IsVisibleStatus (App_UnitInfo_Window_o* __this, int32_t mode, const MethodInfo* method);
void App_UnitInfo_Window__CharaOnlyOn (App_UnitInfo_Window_o* __this, bool isChangeCharaModelAnim, const MethodInfo* method);
void App_UnitInfo_Window__CharaOnlyOff (App_UnitInfo_Window_o* __this, const MethodInfo* method);
bool App_UnitInfo_Window__IsCharaOnlyTransition (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__UpdateStandByAnime (App_UnitInfo_Window_o* __this, App_UnitItem_o* unitItem, bool isWeaponShop, const MethodInfo* method);
void App_UnitInfo_Window__SetCreateReserveUnitItem (App_UnitInfo_Window_o* __this, App_UnitItem_o* unitItem, bool isOverride, const MethodInfo* method);
void App_UnitInfo_Window__HideWeapon (App_UnitInfo_Window_o* __this, const MethodInfo* method);
bool App_UnitInfo_Window__IsLoadingCharaModel (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__TransparentOn (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__TransparentOff (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__UpdateVisible (App_UnitInfo_Window_o* __this, const MethodInfo* method);
UnityEngine_GameObject_o* App_UnitInfo_Window__GetCurrentWindowObject (App_UnitInfo_Window_o* __this, const MethodInfo* method);
UnityEngine_Transform_o* App_UnitInfo_Window__GetHeadLocator (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__SetHeadLocator (App_UnitInfo_Window_o* __this, UnityEngine_Transform_o* loc, float weight, bool isWeightInterpolated, const MethodInfo* method);
void App_UnitInfo_Window__SetHeadLocator (App_UnitInfo_Window_o* __this, UnityEngine_Vector3_o pos, const MethodInfo* method);
void App_UnitInfo_Window__SetLookAt (App_UnitInfo_Window_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
void App_UnitInfo_Window__SetLookAtCamera (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__SetEyesWeight (App_UnitInfo_Window_o* __this, float eyesWeight, const MethodInfo* method);
bool App_UnitInfo_Window__IsCharaVisible (App_UnitInfo_Window_o* __this, const MethodInfo* method);
void App_UnitInfo_Window__SetUnitStatusWindow (App_UnitInfo_Window_o* __this, const MethodInfo* method);
