#pragma once

#include "il2cpp.h"

void App_BasicMenuContent___ctor (App_BasicMenuContent_o* __this, const MethodInfo* method);
int32_t App_BasicMenuContent__GetMenuItemContentMax (App_BasicMenuContent_o* __this, const MethodInfo* method);
UnityEngine_RectTransform_o* App_BasicMenuContent__GetRectTransform (App_BasicMenuContent_o* __this, const MethodInfo* method);
App_BasicMenu_o* App_BasicMenuContent__GetMenu (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetMenu (App_BasicMenuContent_o* __this, App_BasicMenu_o* menu, const MethodInfo* method);
bool App_BasicMenuContent__IsOpening (App_BasicMenuContent_o* __this, const MethodInfo* method);
bool App_BasicMenuContent__IsClosing (App_BasicMenuContent_o* __this, const MethodInfo* method);
bool App_BasicMenuContent__IsClosed (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetAnimator (App_BasicMenuContent_o* __this, UnityEngine_Animator_o* anim, const MethodInfo* method);
float App_BasicMenuContent__CalcCursorMovedPosX (App_BasicMenuContent_o* __this, int32_t menuItemIndex, const MethodInfo* method);
float App_BasicMenuContent__CalcCursorMovedPosY (App_BasicMenuContent_o* __this, int32_t menuItemIndex, const MethodInfo* method);
float App_BasicMenuContent__CalcCursorWidth (App_BasicMenuContent_o* __this, int32_t menuItemIndex, const MethodInfo* method);
float App_BasicMenuContent__CalcCursorHeight (App_BasicMenuContent_o* __this, int32_t menuItemIndex, const MethodInfo* method);
float App_BasicMenuContent__NowCursorWidth (App_BasicMenuContent_o* __this, const MethodInfo* method);
float App_BasicMenuContent__NowCursorHeight (App_BasicMenuContent_o* __this, const MethodInfo* method);
float App_BasicMenuContent__GetScreenScale (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__InitObjReference (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__Delete (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetCursorMoveFrame (App_BasicMenuContent_o* __this, float frame, const MethodInfo* method);
void App_BasicMenuContent__CursorMoveInstant (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetScrollFrame (App_BasicMenuContent_o* __this, float frame, const MethodInfo* method);
void App_BasicMenuContent__SetScrollBarHandleSize (App_BasicMenuContent_o* __this, float size, const MethodInfo* method);
bool App_BasicMenuContent__IsScrollBusy (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__ScrollInstant (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__ResetScroll (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetCursorColor (App_BasicMenuContent_o* __this, UnityEngine_Color_o c, const MethodInfo* method);
void App_BasicMenuContent__PutCursorInFront (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__PutCursorInBack (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetCursorToKeepAnimatorState (App_BasicMenuContent_o* __this, bool keep, const MethodInfo* method);
void App_BasicMenuContent__MoveFrontCursorFrom (App_BasicMenuContent_o* __this, float fromX, float fromY, float frame, const MethodInfo* method);
void App_BasicMenuContent__MoveFrontCursorFrom (App_BasicMenuContent_o* __this, App_BasicMenuItem_o* fromMenuItem, float frame, const MethodInfo* method);
void App_BasicMenuContent__SetFrontCursorVisibility (App_BasicMenuContent_o* __this, bool visibility, const MethodInfo* method);
void App_BasicMenuContent__RestartCursorAnim (App_BasicMenuContent_o* __this, const MethodInfo* method);
UnityEngine_RectTransform_o* App_BasicMenuContent__GetSubMenuBaseTransform (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__Suspend (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__UnSuspend (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetColor (App_BasicMenuContent_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
void App_BasicMenuContent__BuildMenuItemContent (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__BuildMaterial (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__BuildWH (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__BuildContentPos (App_BasicMenuContent_o* __this, const MethodInfo* method);
float App_BasicMenuContent__CalcW (App_BasicMenuContent_o* __this, const MethodInfo* method);
float App_BasicMenuContent__CalcH (App_BasicMenuContent_o* __this, const MethodInfo* method);
float App_BasicMenuContent__GetCursorOffsetX (App_BasicMenuContent_o* __this, const MethodInfo* method);
float App_BasicMenuContent__GetCursorOffsetY (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__OpenAnime (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__CloseAnime (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__AfterBuild (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetPivot (App_BasicMenuContent_o* __this, float x, float y, const MethodInfo* method);
int32_t App_BasicMenuContent__GetAnchorType (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetAnchorType (App_BasicMenuContent_o* __this, int32_t anchorType, float x, float y, const MethodInfo* method);
void App_BasicMenuContent__SetAnchorTypeFromScreenCoord (App_BasicMenuContent_o* __this, int32_t anchorType, float x, float y, const MethodInfo* method);
int32_t App_BasicMenuContent__AnchorPositionToAnchorType (float x, float y, const MethodInfo* method);
UnityEngine_Vector2_o App_BasicMenuContent__ScreenPointToLocalPoint (App_BasicMenuContent_o* __this, float x, float y, const MethodInfo* method);
float App_BasicMenuContent__GetX (App_BasicMenuContent_o* __this, const MethodInfo* method);
float App_BasicMenuContent__GetY (App_BasicMenuContent_o* __this, const MethodInfo* method);
UnityEngine_Vector2_o App_BasicMenuContent__GetPos (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__SetX (App_BasicMenuContent_o* __this, float x, const MethodInfo* method);
void App_BasicMenuContent__SetY (App_BasicMenuContent_o* __this, float y, const MethodInfo* method);
void App_BasicMenuContent__SetPos (App_BasicMenuContent_o* __this, float x, float y, const MethodInfo* method);
void App_BasicMenuContent__SetTransformAsSubMenu (App_BasicMenuContent_o* __this, App_BasicMenu_o* parentMenu, App_BasicMenuItem_o* parentMenuItem, const MethodInfo* method);
void App_BasicMenuContent__UpdateX (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__UpdateY (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__UpdatePos (App_BasicMenuContent_o* __this, const MethodInfo* method);
float App_BasicMenuContent__GetW (App_BasicMenuContent_o* __this, const MethodInfo* method);
float App_BasicMenuContent__GetH (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__UpdateAfterScroll (App_BasicMenuContent_o* __this, bool isForceUpdate, const MethodInfo* method);
void App_BasicMenuContent__ForceRebuildLayout (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__CycleMenuItemContent (App_BasicMenuContent_o* __this, bool isForward, int32_t cycleCount, const MethodInfo* method);
float App_BasicMenuContent__GetLineHeightForScroll (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__Awake (App_BasicMenuContent_o* __this, const MethodInfo* method);
System_String_o* App_BasicMenuContent__CalcName (System_String_o* menuName, System_String_o* assetName, const MethodInfo* method);
void App_BasicMenuContent__Start (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__Update (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__OnDestroy (App_BasicMenuContent_o* __this, const MethodInfo* method);
void App_BasicMenuContent__LoadPrefabAsync (const MethodInfo* method);
App_BasicMenuContent_o* App_BasicMenuContent__Create (const MethodInfo* method);
void App_BasicMenuContent__LoadPrefabAsync (System_String_o* path, const MethodInfo* method);
void App_BasicMenuContent__UnloadPrefab (System_String_o* path, const MethodInfo* method);
bool App_BasicMenuContent__IsLoadingPrefab (System_String_o* path, const MethodInfo* method);
App_BasicDialogContent_o* App_BasicMenuContent__Create_BasicDialogContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_BasicItemMenuContent_o* App_BasicMenuContent__Create_BasicItemMenuContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_BasicMenuContent_o* App_BasicMenuContent__Create_BasicMenuContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_ExchangeDialogContent_o* App_BasicMenuContent__Create_ExchangeDialogContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_GameMessageContent_o* App_BasicMenuContent__Create_GameMessageContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_GridMenuContent_o* App_BasicMenuContent__Create_GridMenuContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_ItemListDialogContent_o* App_BasicMenuContent__Create_ItemListDialogContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_MapUnitCommandMenuContent_o* App_BasicMenuContent__Create_MapUnitCommandMenuContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_NameCheckDialogContent_o* App_BasicMenuContent__Create_NameCheckDialogContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
Il2CppObject* App_BasicMenuContent__Create_object_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_SortieSubMenuContent_o* App_BasicMenuContent__Create_SortieSubMenuContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_SortieTopMenuContent_o* App_BasicMenuContent__Create_SortieTopMenuContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
App_TradeMenuContent_o* App_BasicMenuContent__Create_TradeMenuContent_ (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo_22C0840* method);
Il2CppObject* App_BasicMenuContent__Create_object_ (UnityEngine_GameObject_o* srcObjMenu, UnityEngine_GameObject_o* parent, const MethodInfo_22C0990* method);
App_RingListSkillMenu_MenuContent_o* App_BasicMenuContent__Create_RingListSkillMenu_MenuContent_ (UnityEngine_GameObject_o* srcObjMenu, UnityEngine_GameObject_o* parent, const MethodInfo_22C0990* method);
UnityEngine_GameObject_o* App_BasicMenuContent__GetCanvas (const MethodInfo* method);
void App_BasicMenuContent___cctor (const MethodInfo* method);