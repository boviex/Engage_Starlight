#pragma once

#include "il2cpp.h"

void App_TitleSequence__PostBgmEvent (App_TitleSequence_o* __this, System_String_o* bgmEventName, const MethodInfo* method);
void App_TitleSequence__Start (App_TitleSequence_o* __this, const MethodInfo* method);
void App_TitleSequence__Tick (App_TitleSequence_o* __this, const MethodInfo* method);
void App_TitleSequence__FadeIn (App_TitleSequence_o* __this, const MethodInfo* method);
void App_TitleSequence__FadeOut (App_TitleSequence_o* __this, bool isBgmFadeOut, const MethodInfo* method);
void App_TitleSequence__End (App_TitleSequence_o* __this, const MethodInfo* method);
App_ProcDesc_array* App_TitleSequence__GetDesc (App_TitleSequence_o* __this, const MethodInfo* method);
void App_TitleSequence__CreateBind (App_ProcInst_o* super, const MethodInfo* method);
void App_TitleSequence__LoadTitleScene (App_ProcInst_o* super, const MethodInfo* method);
bool App_TitleSequence__IsLoadingTitleScene (App_ProcInst_o* super, const MethodInfo* method);
void App_TitleSequence__UnloadTitleScene (App_ProcInst_o* super, const MethodInfo* method);
void App_TitleSequence__InitAfterLoadTitleScene (const MethodInfo* method);
void App_TitleSequence__ShowTitleScene (const MethodInfo* method);
void App_TitleSequence__HideTitleScene (const MethodInfo* method);
void App_TitleSequence__SetTitleSceneVisible (System_String_o* sceneName, bool isShow, const MethodInfo* method);
UnityEngine_GameObject_o* App_TitleSequence__GetMovieCanvasPrefab (const MethodInfo* method);
void App_TitleSequence___ctor (App_TitleSequence_o* __this, const MethodInfo* method);
