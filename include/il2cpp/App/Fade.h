#pragma once

#include "il2cpp.h"

void App_Fade__Initialize (const MethodInfo* method);
UnityEngine_Color_o App_Fade__GetImageColor (int32_t layer, const MethodInfo* method);
void App_Fade__SetImageColor (int32_t layer, UnityEngine_Color_o color, const MethodInfo* method);
void App_Fade__FadeIn (float duration, const MethodInfo* method);
void App_Fade__FadeOut (float duration, const MethodInfo* method);
void App_Fade__FadeOut (UnityEngine_Color_o color, float duration, const MethodInfo* method);
void App_Fade__FadeIn (int32_t layer, float duration, const MethodInfo* method);
void App_Fade__FadeOut (int32_t layer, float duration, const MethodInfo* method);
void App_Fade__FadeOut (int32_t layer, UnityEngine_Color_o color, float duration, const MethodInfo* method);
void App_Fade__PushLayer (int32_t layer, const MethodInfo* method);
void App_Fade__PopLayer (const MethodInfo* method);
bool App_Fade__IsActive (const MethodInfo* method);
bool App_Fade__IsActive (int32_t layer, const MethodInfo* method);
bool App_Fade__IsFadeOut (const MethodInfo* method);
bool App_Fade__IsFadeOut (int32_t layer, const MethodInfo* method);
float App_Fade__GetAlpha (const MethodInfo* method);
bool App_Fade__WaitBind (App_ProcInst_o* super, int32_t layer, const MethodInfo* method);
App_ProcDesc_o* App_Fade__BlackIn (float duration, int32_t layer, const MethodInfo* method);
App_ProcDesc_o* App_Fade__BlackOut (float duration, int32_t layer, const MethodInfo* method);
App_ProcDesc_o* App_Fade__WhiteIn (float duration, int32_t layer, const MethodInfo* method);
App_ProcDesc_o* App_Fade__WhiteOut (float duration, int32_t layer, const MethodInfo* method);
App_ProcDesc_o* App_Fade__FadeIn (UnityEngine_Color_o color, float duration, int32_t layer, const MethodInfo* method);
App_ProcDesc_o* App_Fade__FadeOut (UnityEngine_Color_o color, float duration, int32_t layer, const MethodInfo* method);
App_ProcDesc_o* App_Fade__FadeWait (int32_t layer, const MethodInfo* method);
void App_Fade___ctor (App_Fade_o* __this, const MethodInfo* method);
void App_Fade___cctor (const MethodInfo* method);
