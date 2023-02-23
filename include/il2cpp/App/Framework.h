#pragma once

#include "il2cpp.h"

bool App_Framework__IsBoostMode (const MethodInfo* method);
void App_Framework__OnBeforeSceneLoadRuntimeMethod (const MethodInfo* method);
void App_Framework__OnAfterSceneLoadRuntimeMethod (const MethodInfo* method);
void App_Framework__OnRuntimeMethodLoad (const MethodInfo* method);
void App_Framework__UpdateResolution (const MethodInfo* method);
void App_Framework__NotificationMessageReceived (int32_t message, const MethodInfo* method);
void App_Framework__ResetSetting (const MethodInfo* method);
void App_Framework__InitTotalMemory (const MethodInfo* method);
int64_t App_Framework__GetTotalMemory (const MethodInfo* method);
int64_t App_Framework__GetAllocatableMemory (const MethodInfo* method);
void App_Framework__Awake (App_Framework_o* __this, const MethodInfo* method);
void App_Framework__OnDestroy (App_Framework_o* __this, const MethodInfo* method);
void App_Framework__Start (App_Framework_o* __this, const MethodInfo* method);
void App_Framework__UpdatePause (App_Framework_o* __this, const MethodInfo* method);
void App_Framework__CpuBoostOn (const MethodInfo* method);
void App_Framework__CpuBoostOff (const MethodInfo* method);
void App_Framework__CpuBoostOnForLoading (const MethodInfo* method);
void App_Framework__CpuBoostOffForLoading (const MethodInfo* method);
void App_Framework__Update (App_Framework_o* __this, const MethodInfo* method);
void App_Framework__LateUpdate (App_Framework_o* __this, const MethodInfo* method);
bool App_Framework__IsPausing (const MethodInfo* method);
void App_Framework__Shoutdown (const MethodInfo* method);
void App_Framework__GCBegin (const MethodInfo* method);
void App_Framework__GCEnd (const MethodInfo* method);
void App_Framework__GCCollect (const MethodInfo* method);
void App_Framework__GCCollectLow (const MethodInfo* method);
void App_Framework__GCCommit (const MethodInfo* method);
void App_Framework__GCBind (const MethodInfo* method);
void App_Framework__GCUnbind (const MethodInfo* method);
System_Collections_IEnumerator_o* App_Framework__CollectCoroutine (float time, const MethodInfo* method);
void App_Framework__AddDestroy (UnityEngine_Object_o* obj, const MethodInfo* method);
void App_Framework__UpdateDestroy (const MethodInfo* method);
void App_Framework___ctor (App_Framework_o* __this, const MethodInfo* method);
void App_Framework___cctor (const MethodInfo* method);
