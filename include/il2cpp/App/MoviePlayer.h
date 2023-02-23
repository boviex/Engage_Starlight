#pragma once

#include "il2cpp.h"

void App_MoviePlayer___ctor (App_MoviePlayer_o* __this, System_String_o* movieFileName, bool isMovieFileNameDirect, const MethodInfo* method);
void App_MoviePlayer__ErrorCallback (App_MoviePlayer_o* __this, UnityEngine_Video_VideoPlayer_o* player, System_String_o* mess, const MethodInfo* method);
void App_MoviePlayer__LoopPointReached (App_MoviePlayer_o* __this, UnityEngine_Video_VideoPlayer_o* player, const MethodInfo* method);
void App_MoviePlayer__FrameReady (App_MoviePlayer_o* __this, UnityEngine_Video_VideoPlayer_o* player, int64_t frameIdx, const MethodInfo* method);
bool App_MoviePlayer__SetupAfterLoadScene (App_MoviePlayer_o* __this, const MethodInfo* method);
bool App_MoviePlayer__SetupByMovieCanvasPrefab (App_MoviePlayer_o* __this, UnityEngine_GameObject_o* canvasPrefab, const MethodInfo* method);
bool App_MoviePlayer__SetMovieFilePathToVideoPlayer (App_MoviePlayer_o* __this, const MethodInfo* method);
void App_MoviePlayer__EnableSoundEvent (App_MoviePlayer_o* __this, const MethodInfo* method);
void App_MoviePlayer__DisableSoundEvent (App_MoviePlayer_o* __this, const MethodInfo* method);
bool App_MoviePlayer__IsTruePlayEnd (App_MoviePlayer_o* __this, const MethodInfo* method);
System_String_o* App_MoviePlayer__GetScreenObjectName (App_MoviePlayer_o* __this, const MethodInfo* method);
bool App_MoviePlayer__IsPaused (App_MoviePlayer_o* __this, const MethodInfo* method);
bool App_MoviePlayer__IsPlaying (App_MoviePlayer_o* __this, const MethodInfo* method);
bool App_MoviePlayer__IsPlayEnd (App_MoviePlayer_o* __this, const MethodInfo* method);
float App_MoviePlayer__GetMovieLength (App_MoviePlayer_o* __this, const MethodInfo* method);
float App_MoviePlayer__GetPlayingPosition (App_MoviePlayer_o* __this, const MethodInfo* method);
void App_MoviePlayer__Tick (App_MoviePlayer_o* __this, const MethodInfo* method);
void App_MoviePlayer__Prepare (App_MoviePlayer_o* __this, const MethodInfo* method);
bool App_MoviePlayer__IsPrepared (App_MoviePlayer_o* __this, const MethodInfo* method);
void App_MoviePlayer__Play (App_MoviePlayer_o* __this, const MethodInfo* method);
void App_MoviePlayer__Stop (App_MoviePlayer_o* __this, const MethodInfo* method);
void App_MoviePlayer__SuspendOn (App_MoviePlayer_o* __this, const MethodInfo* method);
void App_MoviePlayer__SuspendOff (App_MoviePlayer_o* __this, const MethodInfo* method);
