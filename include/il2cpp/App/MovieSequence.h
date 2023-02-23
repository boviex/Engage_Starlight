#pragma once

#include "il2cpp.h"

void App_MovieSequence___ctor (App_MovieSequence_o* __this, System_String_o* movieFileName, bool isMovieFileNameDirect, const MethodInfo* method);
void App_MovieSequence__OnCreate (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__OnDispose (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__PushFade (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__PopFade (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__LoadScene (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__SetupAfterLoadScene (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__UnloadScene (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__Prepare (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__WaitPrepare (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__PlayMovie (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__StopMovie (App_MovieSequence_o* __this, const MethodInfo* method);
bool App_MovieSequence__IsTruePlayEnd (App_MovieSequence_o* __this, const MethodInfo* method);
bool App_MovieSequence__IsShowCaption (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__SetCaption (App_MovieSequence_o* __this, System_String_o* mid, int32_t msec, const MethodInfo* method);
void App_MovieSequence__ShowTitleLogo (App_MovieSequence_o* __this, int32_t msec, const MethodInfo* method);
void App_MovieSequence__EnableControllerSupport (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__DisableControllerSupport (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__WaitPlayMovie (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__EnableScene (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__DisableScene (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__Persistent (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__Tick (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__PostSoundEventOnEnd (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__OnShutdown (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__StartCaption (System_String_o* mid, int32_t msec, const MethodInfo* method);
void App_MovieSequence__StartTitleLogo (int32_t msec, const MethodInfo* method);
void App_MovieSequence__Init (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__End (App_MovieSequence_o* __this, const MethodInfo* method);
bool App_MovieSequence__IsSkip (const MethodInfo* method);
void App_MovieSequence__CreateBind (App_ProcInst_o* super, System_String_o* movieFileName, bool isMovieFileNameDirect, const MethodInfo* method);
void App_MovieSequence__SetupByTitleMovieCanvasPrefab (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__InitLoopGOP (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__EnableCanvas (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__DisableCanvas (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__SwitchGenderGOP (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__InitWaitForPlayGOP (App_MovieSequence_o* __this, const MethodInfo* method);
bool App_MovieSequence__WaitForPlayGOP (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__PlayMovieGOP (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__TickGOP (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__FadeOutGOP (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__SetPlayGOPFromTitle (App_MovieSequence_o* __this, bool isFromTitle, const MethodInfo* method);
void App_MovieSequence__WaitEndForPlayGOP (App_MovieSequence_o* __this, const MethodInfo* method);
void App_MovieSequence__CreateBindGOPForTitleLoop (App_ProcInst_o* super, bool isHeroFemale, const MethodInfo* method);
void App_MovieSequence___cctor (const MethodInfo* method);
