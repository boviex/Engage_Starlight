#pragma once

#include "il2cpp.h"

App_ObjectEnumerator_o* App_ObjectEnumerator__FindByName (System_String_o* name, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
void App_ObjectEnumerator__FindByNameImpl (App_ObjectEnumerator_o* __this, System_String_o* name, UnityEngine_SceneManagement_Scene_o scene, const MethodInfo* method);
void App_ObjectEnumerator__FindByNameImpl (App_ObjectEnumerator_o* __this, System_String_o* name, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
App_ObjectEnumerator_o* App_ObjectEnumerator__FindByLayer (int32_t layer, UnityEngine_GameObject_o* root, const MethodInfo* method);
App_ObjectEnumerator_o* App_ObjectEnumerator__FindByLayer (System_String_o* layer, UnityEngine_GameObject_o* root, const MethodInfo* method);
void App_ObjectEnumerator__FindByLayerImpl (App_ObjectEnumerator_o* __this, int32_t layer, UnityEngine_SceneManagement_Scene_o scene, const MethodInfo* method);
void App_ObjectEnumerator__FindByLayerImpl (App_ObjectEnumerator_o* __this, int32_t layer, UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
App_ObjectEnumerator_o* App_ObjectEnumerator__FindParent (UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
void App_ObjectEnumerator__FindParentImpl (App_ObjectEnumerator_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
App_ObjectEnumerator_o* App_ObjectEnumerator__FindChild (UnityEngine_GameObject_o* gameObject, const MethodInfo* method);
void App_ObjectEnumerator__FindChildImpl (App_ObjectEnumerator_o* __this, UnityEngine_Transform_o* transform, const MethodInfo* method);
App_ObjectEnumerator_o* App_ObjectEnumerator__SetActive (App_ObjectEnumerator_o* __this, bool enabled, const MethodInfo* method);
App_ObjectEnumerator_o* App_ObjectEnumerator__SetEnable_object_ (App_ObjectEnumerator_o* __this, bool enabled, const MethodInfo_29A9B20* method);
bool App_ObjectEnumerator__IsComponent_object_ (App_ObjectEnumerator_o* __this, const MethodInfo_29A98C0* method);
App_ObjectEnumerator_o* App_ObjectEnumerator__Dump (App_ObjectEnumerator_o* __this, const MethodInfo* method);
void App_ObjectEnumerator___ctor (App_ObjectEnumerator_o* __this, const MethodInfo* method);
