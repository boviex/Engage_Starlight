#pragma once

#include "il2cpp.h"

void HC_UI_UICreator__PreloadResources (const MethodInfo* method);
void HC_UI_UICreator__LoadSpriteResource (System_String_o* propertyName, System_String_o* resourcePath, const MethodInfo* method);
bool HC_UI_UICreator__IsLoaded (const MethodInfo* method);
HC_UI_UICreator_UIResources_o* HC_UI_UICreator__GetStandardResources (const MethodInfo* method);
UnityEngine_GameObject_o* HC_UI_UICreator__CreateUIElementRoot (System_String_o* name, UnityEngine_Vector2_o size, const MethodInfo* method);
UnityEngine_GameObject_o* HC_UI_UICreator__CreateUIObject (System_String_o* name, UnityEngine_GameObject_o* parent, const MethodInfo* method);
void HC_UI_UICreator__SetDefaultTextValues (UnityEngine_UI_Text_o* lbl, const MethodInfo* method);
void HC_UI_UICreator__SetDefaultColorTransitionValues (UnityEngine_UI_Selectable_o* slider, const MethodInfo* method);
void HC_UI_UICreator__SetParentAndAlign (UnityEngine_GameObject_o* child, UnityEngine_GameObject_o* parent, const MethodInfo* method);
void HC_UI_UICreator__SetLayerRecursively (UnityEngine_GameObject_o* go, int32_t layer, const MethodInfo* method);
UnityEngine_Canvas_o* HC_UI_UICreator__CreateCanvas (UnityEngine_GameObject_o* parent, System_String_o* name, System_String_o* eventSystemName, const MethodInfo* method);
UnityEngine_EventSystems_EventSystem_o* HC_UI_UICreator__CreateEventSystem (UnityEngine_GameObject_o* parent, System_String_o* name, const MethodInfo* method);
UnityEngine_UI_Image_o* HC_UI_UICreator__CreatePanel (UnityEngine_GameObject_o* parent, System_String_o* name, const MethodInfo* method);
UnityEngine_UI_Button_o* HC_UI_UICreator__CreateButton (UnityEngine_GameObject_o* parent, System_String_o* name, System_String_o* defaultLabel, const MethodInfo* method);
UnityEngine_UI_Text_o* HC_UI_UICreator__CreateText (UnityEngine_GameObject_o* parent, System_String_o* name, System_String_o* defaultLabel, const MethodInfo* method);
UnityEngine_UI_Image_o* HC_UI_UICreator__CreateImage (UnityEngine_GameObject_o* parent, System_String_o* name, const MethodInfo* method);
UnityEngine_UI_RawImage_o* HC_UI_UICreator__CreateRawImage (UnityEngine_GameObject_o* parent, System_String_o* name, const MethodInfo* method);
UnityEngine_UI_Slider_o* HC_UI_UICreator__CreateSlider (UnityEngine_GameObject_o* parent, System_String_o* name, const MethodInfo* method);
UnityEngine_UI_Scrollbar_o* HC_UI_UICreator__CreateScrollbar (UnityEngine_GameObject_o* parent, System_String_o* name, const MethodInfo* method);
UnityEngine_UI_Toggle_o* HC_UI_UICreator__CreateToggle (UnityEngine_GameObject_o* parent, System_String_o* name, System_String_o* defaultLabel, bool isOn, const MethodInfo* method);
UnityEngine_UI_InputField_o* HC_UI_UICreator__CreateInputField (UnityEngine_GameObject_o* parent, System_String_o* name, System_String_o* defaultPlaceholder, const MethodInfo* method);
UnityEngine_UI_Dropdown_o* HC_UI_UICreator__CreateDropdown (UnityEngine_GameObject_o* parent, System_String_o* name, System_String_o* defaultLabel, const MethodInfo* method);
UnityEngine_UI_ScrollRect_o* HC_UI_UICreator__CreateScrollView (UnityEngine_GameObject_o* parent, System_String_o* name, int32_t layoutGroupType, const MethodInfo* method);
void HC_UI_UICreator___cctor (const MethodInfo* method);
