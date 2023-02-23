#pragma once

#include "il2cpp.h"

UnityEngine_GameObject_o* App_UnitInfoWindow__get_gameObject (App_UnitInfoWindow_o* __this, const MethodInfo* method);
App_UnitInfoCharaImageMaskOffset_o* App_UnitInfoWindow__get_CharaImageMask (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow___ctor (App_UnitInfoWindow_o* __this, UnityEngine_RenderTexture_o* renderTexture, bool isReverse, bool isHideStatus, const MethodInfo* method);
void App_UnitInfoWindow__CreateAsync (App_UnitInfoWindow_o* __this, UnityEngine_RenderTexture_o* renderTexture, bool isReverse, bool isHideStatus, const MethodInfo* method);
bool App_UnitInfoWindow__IsCreating (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__Destroy (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__SetActive (App_UnitInfoWindow_o* __this, bool isActive, const MethodInfo* method);
bool App_UnitInfoWindow__IsActive (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__SetUnit (App_UnitInfoWindow_o* __this, App_Unit_o* unit, int32_t x, int32_t z, const MethodInfo* method);
void App_UnitInfoWindow__SetUnit (App_UnitInfoWindow_o* __this, App_Unit_o* unit, int32_t x, int32_t z, App_GodUnit_o* god, const MethodInfo* method);
void App_UnitInfoWindow__CharaMaskOn (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__CharaMaskOff (App_UnitInfoWindow_o* __this, const MethodInfo* method);
bool App_UnitInfoWindow__TryPlayAnimation (App_UnitInfoWindow_o* __this, UnityEngine_Animator_o* animator, System_String_o* name, const MethodInfo* method);
void App_UnitInfoWindow__CharaOnlyOn (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__CharaOnlyOff (App_UnitInfoWindow_o* __this, const MethodInfo* method);
bool App_UnitInfoWindow__IsCharaOnlyTransition (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__TransparentOn (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__TransparentOff (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__Activate (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__Deactivate (App_UnitInfoWindow_o* __this, const MethodInfo* method);
UnityEngine_UI_Image_o* App_UnitInfoWindow__GetCharaImage (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__ActiveStatus (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__DeactiveStatus (App_UnitInfoWindow_o* __this, const MethodInfo* method);
bool App_UnitInfoWindow__IsActiveStatus (App_UnitInfoWindow_o* __this, const MethodInfo* method);
void App_UnitInfoWindow__CreateImpl (App_UnitInfoWindow_o* __this, UnityEngine_RenderTexture_o* renderTexture, bool isReverse, bool isHideStatus, const MethodInfo* method);
bool App_UnitInfoWindow__Setup (App_UnitInfoWindow_o* __this, UnityEngine_RenderTexture_o* renderTexture, bool isReverse, bool isHideStatus, const MethodInfo* method);
UnityEngine_UI_Image_o* App_UnitInfoWindow__GetCharaImage (App_UnitInfoWindow_o* __this, UnityEngine_GameObject_o** charaImageObj, UnityEngine_GameObject_o** charaImageImageObj, const MethodInfo* method);
void App_UnitInfoWindow___cctor (const MethodInfo* method);
