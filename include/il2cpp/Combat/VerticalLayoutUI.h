#pragma once

#include "il2cpp.h"

void Combat_VerticalLayoutUI___ctor (Combat_VerticalLayoutUI_o* __this, UnityEngine_Canvas_o* canvas, UnityEngine_Vector3_o anchor, const MethodInfo* method);
void Combat_VerticalLayoutUI__Dispose (Combat_VerticalLayoutUI_o* __this, const MethodInfo* method);
UnityEngine_UI_Text_o* Combat_VerticalLayoutUI__Text (Combat_VerticalLayoutUI_o* __this, System_String_o* text, const MethodInfo* method);
UnityEngine_UI_Button_o* Combat_VerticalLayoutUI__Button (Combat_VerticalLayoutUI_o* __this, System_String_o* text, System_Action_o* OnPressed, const MethodInfo* method);
UnityEngine_UI_Button_o* Combat_VerticalLayoutUI__MinimizeLeft (UnityEngine_UI_Button_o* button, const MethodInfo* method);
UnityEngine_UI_Slider_o* Combat_VerticalLayoutUI__Slider (Combat_VerticalLayoutUI_o* __this, UniRx_ReactiveProperty_float__o* property, float minValue, float maxValue, System_Action_float__o* OnValueChanged, const MethodInfo* method);
void Combat_VerticalLayoutUI__Slider (Combat_VerticalLayoutUI_o* __this, System_String_o* text, float textRatio, UniRx_ReactiveProperty_float__o* property, float minValue, float maxValue, System_Action_float__o* OnValueChanged, const MethodInfo* method);
System_String_o* Combat_VerticalLayoutUI__MakeStr (System_String_o* label, float value, const MethodInfo* method);
UnityEngine_UI_Dropdown_o* Combat_VerticalLayoutUI__Dropdown (Combat_VerticalLayoutUI_o* __this, System_String_o* headline, System_Collections_Generic_List_string__o* items, System_Action_string__o* OnValueChanged, const MethodInfo* method);
UnityEngine_UI_Toggle_o* Combat_VerticalLayoutUI__Toggle (Combat_VerticalLayoutUI_o* __this, System_String_o* text, const MethodInfo* method);
void Combat_VerticalLayoutUI__Space (Combat_VerticalLayoutUI_o* __this, float space, const MethodInfo* method);
void Combat_VerticalLayoutUI__SetRectTransformXW (UnityEngine_Component_o* com, float w, float x, const MethodInfo* method);
void Combat_VerticalLayoutUI__SetColors (Combat_VerticalLayoutUI_o* __this, UnityEngine_UI_Selectable_o* widget, const MethodInfo* method);
void Combat_VerticalLayoutUI__SetColors (Combat_VerticalLayoutUI_o* __this, UnityEngine_UI_Slider_o* widget, const MethodInfo* method);
void Combat_VerticalLayoutUI__SetTextColorAndOutline (UnityEngine_UI_Text_o* text, UnityEngine_Color_o color, bool outline, const MethodInfo* method);
void Combat_VerticalLayoutUI__SetPosition (UnityEngine_Component_o* c, UnityEngine_Vector2_o v, const MethodInfo* method);
void Combat_VerticalLayoutUI__SetSize (UnityEngine_Component_o* c, float width, float height, const MethodInfo* method);
void Combat_VerticalLayoutUI__SetFontSize (UnityEngine_UI_Text_o* widget, int32_t size, const MethodInfo* method);
