#pragma once

#include "il2cpp.h"

void UniRx_MainThreadDispatcher__Post (System_Action_object__o* action, Il2CppObject* state, const MethodInfo* method);
void UniRx_MainThreadDispatcher__Send (System_Action_object__o* action, Il2CppObject* state, const MethodInfo* method);
void UniRx_MainThreadDispatcher__UnsafeSend (System_Action_o* action, const MethodInfo* method);
void UniRx_MainThreadDispatcher__UnsafeSend_object_ (System_Action_T__o* action, Il2CppObject* state, const MethodInfo_299BED0* method);
void UniRx_MainThreadDispatcher__UnsafeSend_Unit_ (System_Action_T__o* action, UniRx_Unit_o state, const MethodInfo_299C020* method);
void UniRx_MainThreadDispatcher__SendStartCoroutine (System_Collections_IEnumerator_o* routine, const MethodInfo* method);
void UniRx_MainThreadDispatcher__StartUpdateMicroCoroutine (System_Collections_IEnumerator_o* routine, const MethodInfo* method);
void UniRx_MainThreadDispatcher__StartFixedUpdateMicroCoroutine (System_Collections_IEnumerator_o* routine, const MethodInfo* method);
void UniRx_MainThreadDispatcher__StartEndOfFrameMicroCoroutine (System_Collections_IEnumerator_o* routine, const MethodInfo* method);
UnityEngine_Coroutine_o* UniRx_MainThreadDispatcher__StartCoroutine (System_Collections_IEnumerator_o* routine, const MethodInfo* method);
void UniRx_MainThreadDispatcher__RegisterUnhandledExceptionCallback (System_Action_Exception__o* exceptionCallback, const MethodInfo* method);
System_String_o* UniRx_MainThreadDispatcher__get_InstanceName (const MethodInfo* method);
bool UniRx_MainThreadDispatcher__get_IsInitialized (const MethodInfo* method);
UniRx_MainThreadDispatcher_o* UniRx_MainThreadDispatcher__get_Instance (const MethodInfo* method);
void UniRx_MainThreadDispatcher__Initialize (const MethodInfo* method);
bool UniRx_MainThreadDispatcher__get_IsInMainThread (const MethodInfo* method);
void UniRx_MainThreadDispatcher__Awake (UniRx_MainThreadDispatcher_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_MainThreadDispatcher__RunUpdateMicroCoroutine (UniRx_MainThreadDispatcher_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_MainThreadDispatcher__RunFixedUpdateMicroCoroutine (UniRx_MainThreadDispatcher_o* __this, const MethodInfo* method);
System_Collections_IEnumerator_o* UniRx_MainThreadDispatcher__RunEndOfFrameMicroCoroutine (UniRx_MainThreadDispatcher_o* __this, const MethodInfo* method);
void UniRx_MainThreadDispatcher__DestroyDispatcher (UniRx_MainThreadDispatcher_o* aDispatcher, const MethodInfo* method);
void UniRx_MainThreadDispatcher__CullAllExcessDispatchers (const MethodInfo* method);
void UniRx_MainThreadDispatcher__OnDestroy (UniRx_MainThreadDispatcher_o* __this, const MethodInfo* method);
void UniRx_MainThreadDispatcher__Update (UniRx_MainThreadDispatcher_o* __this, const MethodInfo* method);
System_IObservable_Unit__o* UniRx_MainThreadDispatcher__UpdateAsObservable (const MethodInfo* method);
void UniRx_MainThreadDispatcher__LateUpdate (UniRx_MainThreadDispatcher_o* __this, const MethodInfo* method);
System_IObservable_Unit__o* UniRx_MainThreadDispatcher__LateUpdateAsObservable (const MethodInfo* method);
void UniRx_MainThreadDispatcher__OnApplicationFocus (UniRx_MainThreadDispatcher_o* __this, bool focus, const MethodInfo* method);
System_IObservable_bool__o* UniRx_MainThreadDispatcher__OnApplicationFocusAsObservable (const MethodInfo* method);
void UniRx_MainThreadDispatcher__OnApplicationPause (UniRx_MainThreadDispatcher_o* __this, bool pause, const MethodInfo* method);
System_IObservable_bool__o* UniRx_MainThreadDispatcher__OnApplicationPauseAsObservable (const MethodInfo* method);
void UniRx_MainThreadDispatcher__OnApplicationQuit (UniRx_MainThreadDispatcher_o* __this, const MethodInfo* method);
System_IObservable_Unit__o* UniRx_MainThreadDispatcher__OnApplicationQuitAsObservable (const MethodInfo* method);
void UniRx_MainThreadDispatcher___ctor (UniRx_MainThreadDispatcher_o* __this, const MethodInfo* method);
void UniRx_MainThreadDispatcher___cctor (const MethodInfo* method);
void UniRx_MainThreadDispatcher___Awake_b__30_0 (UniRx_MainThreadDispatcher_o* __this, System_Exception_o* ex, const MethodInfo* method);
void UniRx_MainThreadDispatcher___Awake_b__30_1 (UniRx_MainThreadDispatcher_o* __this, System_Exception_o* ex, const MethodInfo* method);
void UniRx_MainThreadDispatcher___Awake_b__30_2 (UniRx_MainThreadDispatcher_o* __this, System_Exception_o* ex, const MethodInfo* method);
