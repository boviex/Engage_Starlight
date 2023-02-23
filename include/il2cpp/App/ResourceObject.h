#pragma once

#include "il2cpp.h"

void App_ResourceObject__Update (App_ResourceObject_o* __this, const MethodInfo* method);
void App_ResourceObject__OnDestroy (App_ResourceObject_o* __this, const MethodInfo* method);
void App_ResourceObject__Create (App_ResourceObject_o* __this, const MethodInfo* method);
void App_ResourceObject__Release (App_ResourceObject_o* __this, const MethodInfo* method);
bool App_ResourceObject__CanSkip (App_ResourceObject_o* __this, const MethodInfo* method);
bool App_ResourceObject__Tick (App_ResourceObject_o* __this, const MethodInfo* method);
void App_ResourceObject__TickBind (App_ResourceObject_o* __this, const MethodInfo* method);
bool App_ResourceObject__IsTerminated (App_ResourceObject_o* __this, const MethodInfo* method);
void App_ResourceObject__LoadAsync_GameObject_ (App_ResourceObject_o* __this, System_String_o* path, const MethodInfo_205BF00* method);
void App_ResourceObject__LoadAsync_object_ (App_ResourceObject_o* __this, System_String_o* path, const MethodInfo_205BF00* method);
App_ResourceObject_o* App_ResourceObject__SetStartCallback (App_ResourceObject_o* __this, App_ResourceObject_Callback_o* callback, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetTickCallback (App_ResourceObject_o* __this, App_ResourceObject_Callback_o* callback, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetEndCallback (App_ResourceObject_o* __this, App_ResourceObject_Callback_o* callback, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetCoroutine (App_ResourceObject_o* __this, App_ResourceObject_Coroutine_o* coroutine, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetPosition (App_ResourceObject_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetPosition (App_ResourceObject_o* __this, float x, float y, float z, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetRotation (App_ResourceObject_o* __this, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetRotation (App_ResourceObject_o* __this, float x, float y, float z, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetScale (App_ResourceObject_o* __this, UnityEngine_Vector3_o scale, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetScale (App_ResourceObject_o* __this, float scale, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetScale (App_ResourceObject_o* __this, float x, float y, float z, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetSound (App_ResourceObject_o* __this, System_String_o* soundLabel, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetEndless (App_ResourceObject_o* __this, bool enable, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetCanSkip (App_ResourceObject_o* __this, bool enable, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetLife (App_ResourceObject_o* __this, float time, const MethodInfo* method);
bool App_ResourceObject__IsEndless (App_ResourceObject_o* __this, const MethodInfo* method);
void App_ResourceObject__Destroy (App_ResourceObject_o* __this, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__SetDelayTime (App_ResourceObject_o* __this, float time, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__TryStartCallback (App_ResourceObject_o* __this, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__TryEndCallback (App_ResourceObject_o* __this, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__TryBind (App_ResourceObject_o* __this, App_ProcInst_o* super, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__TryBind (App_ResourceObject_o* __this, App_BindHolder_o* binder, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__TryBind (App_ResourceObject_o* __this, App_ProcInst_o* super, float time, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__TryBind (App_ResourceObject_o* __this, App_BindHolder_o* binder, float time, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__TryUnbind (App_ResourceObject_o* __this, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__CreateObjectImpl (UnityEngine_Transform_o* parent, System_String_o* name, App_ProcInst_o* super, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__CreateAsync (System_String_o* path, UnityEngine_GameObject_o* parent, App_ProcInst_o* super, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__CreateAsync (System_String_o* path, UnityEngine_Transform_o* parent, App_ProcInst_o* super, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__CreateAsync (System_String_o* path, App_ProcInst_o* super, const MethodInfo* method);
App_ResourceObject_o* App_ResourceObject__CreateAsync (System_String_o* path, const MethodInfo* method);
UnityEngine_GameObject_o* App_ResourceObject__op_Implicit (App_ResourceObject_o* res, const MethodInfo* method);
void App_ResourceObject___ctor (App_ResourceObject_o* __this, const MethodInfo* method);
