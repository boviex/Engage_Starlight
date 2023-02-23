#pragma once

#include "il2cpp.h"

void App_MoviePlayerBase___ctor (App_MoviePlayerBase_o* __this, System_String_o* movieFileName, bool isMovieFileNameDirect, const MethodInfo* method);
void App_MoviePlayerBase__Load (App_MoviePlayerBase_o* __this, System_String_o* movieFileName, bool isMovieFileNameDirect, const MethodInfo* method);
void App_MoviePlayerBase__Unload (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__ResolveMovieFileName (System_String_o** baseMovieFileName, System_String_o** movieFileName, bool isMovieFileNameDirect, const MethodInfo* method);
System_String_o* App_MoviePlayerBase__GetMovieFilePath (App_MoviePlayerBase_o* __this, const MethodInfo* method);
System_String_o* App_MoviePlayerBase__GetMovieFilePath (System_String_o* baseMovieFileName, System_String_o* movieFileName, const MethodInfo* method);
void App_MoviePlayerBase__LoadSceneBind (App_MoviePlayerBase_o* __this, App_ProcInst_o* super, const MethodInfo* method);
void App_MoviePlayerBase__UnloadSceneBind (App_MoviePlayerBase_o* __this, App_ProcInst_o* super, const MethodInfo* method);
bool App_MoviePlayerBase__SetupAfterLoadScene (App_MoviePlayerBase_o* __this, const MethodInfo* method);
bool App_MoviePlayerBase__SetupByMovieCanvasPrefab (App_MoviePlayerBase_o* __this, UnityEngine_GameObject_o* canvasPrefab, const MethodInfo* method);
bool App_MoviePlayerBase__SetupCommon (App_MoviePlayerBase_o* __this, const MethodInfo* method);
bool App_MoviePlayerBase__SetMovieFilePathToVideoPlayer (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__EnableScene (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__DisableScene (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__SetSceneActive (App_MoviePlayerBase_o* __this, bool isActive, const MethodInfo* method);
void App_MoviePlayerBase__EnableCanvas (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__DisableCanvas (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__ShowHelp (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__HideHelp (App_MoviePlayerBase_o* __this, const MethodInfo* method);
bool App_MoviePlayerBase__IsShowCaption (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__SetCaption (App_MoviePlayerBase_o* __this, System_String_o* mid, int32_t msec, const MethodInfo* method);
void App_MoviePlayerBase__SwitchCaptionOnOff (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__ShowTitleLogo (App_MoviePlayerBase_o* __this, int32_t msec, const MethodInfo* method);
void App_MoviePlayerBase__PostSoundEventOnStartViewer (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__PostSoundEventOnEnd (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__PostSoundEventOnEnd (System_String_o* movieFileName, const MethodInfo* method);
void App_MoviePlayerBase__PostSoundEvent (System_String_o* soundEventName, const MethodInfo* method);
System_String_o* App_MoviePlayerBase__GetSoundEventNameOnStart (System_String_o* movieFileName, const MethodInfo* method);
System_String_o* App_MoviePlayerBase__GetScreenObjectName (App_MoviePlayerBase_o* __this, const MethodInfo* method);
bool App_MoviePlayerBase__IsPaused (App_MoviePlayerBase_o* __this, const MethodInfo* method);
bool App_MoviePlayerBase__IsPlaying (App_MoviePlayerBase_o* __this, const MethodInfo* method);
bool App_MoviePlayerBase__IsPlayEnd (App_MoviePlayerBase_o* __this, const MethodInfo* method);
bool App_MoviePlayerBase__IsErrorOccured (App_MoviePlayerBase_o* __this, const MethodInfo* method);
float App_MoviePlayerBase__GetMovieLength (App_MoviePlayerBase_o* __this, const MethodInfo* method);
float App_MoviePlayerBase__GetPlayingPosition (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__Persistent (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__Tick (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__Prepare (App_MoviePlayerBase_o* __this, const MethodInfo* method);
bool App_MoviePlayerBase__IsPrepared (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__Play (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__Stop (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__SuspendOn (App_MoviePlayerBase_o* __this, const MethodInfo* method);
void App_MoviePlayerBase__SuspendOff (App_MoviePlayerBase_o* __this, const MethodInfo* method);
