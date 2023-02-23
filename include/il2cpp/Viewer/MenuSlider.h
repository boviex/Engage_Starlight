#pragma once

#include "il2cpp.h"

float Viewer_MenuSlider__get_Height (Viewer_MenuSlider_o* __this, const MethodInfo* method);
bool Viewer_MenuSlider__get_HasCallback (Viewer_MenuSlider_o* __this, const MethodInfo* method);
System_Action_string__float__o* Viewer_MenuSlider__get_Callback (Viewer_MenuSlider_o* __this, const MethodInfo* method);
int32_t Viewer_MenuSlider__get_DispType (Viewer_MenuSlider_o* __this, const MethodInfo* method);
System_String_o* Viewer_MenuSlider__get_Value (Viewer_MenuSlider_o* __this, const MethodInfo* method);
void Viewer_MenuSlider__set_Value (Viewer_MenuSlider_o* __this, System_String_o* value, const MethodInfo* method);
float Viewer_MenuSlider__get_InnerValue (Viewer_MenuSlider_o* __this, const MethodInfo* method);
void Viewer_MenuSlider__set_InnerValue (Viewer_MenuSlider_o* __this, float value, const MethodInfo* method);
float Viewer_MenuSlider__get_IncrementValue (Viewer_MenuSlider_o* __this, const MethodInfo* method);
void Viewer_MenuSlider__set_IncrementValue (Viewer_MenuSlider_o* __this, float value, const MethodInfo* method);
float Viewer_MenuSlider__get_SliderMin (Viewer_MenuSlider_o* __this, const MethodInfo* method);
float Viewer_MenuSlider__get_SliderMax (Viewer_MenuSlider_o* __this, const MethodInfo* method);
bool Viewer_MenuSlider__get_IsLoop (Viewer_MenuSlider_o* __this, const MethodInfo* method);
void Viewer_MenuSlider___ctor (Viewer_MenuSlider_o* __this, System_String_o* name, float inc, float min, float max, System_Action_string__float__o* callback, bool isLoop, const MethodInfo* method);
void Viewer_MenuSlider__Tick (Viewer_MenuSlider_o* __this, const MethodInfo* method);
bool Viewer_MenuSlider__Right (Viewer_MenuSlider_o* __this, const MethodInfo* method);
bool Viewer_MenuSlider__Left (Viewer_MenuSlider_o* __this, const MethodInfo* method);
