#pragma once

#include "il2cpp.h"

System_Collections_Generic_Dictionary_string__Stack_ResourceHandle___o* App_ResourceManager__get_s_Globals (const MethodInfo* method);
System_Collections_Generic_Dictionary_string__AsyncOperationHandle__o* App_ResourceManager__get_s_Entries (const MethodInfo* method);
System_Collections_Generic_Dictionary_string__int__o* App_ResourceManager__get_s_Counters (const MethodInfo* method);
System_Collections_Generic_Queue_AsyncOperationHandle__o* App_ResourceManager__get_s_Releases (const MethodInfo* method);
System_Collections_Generic_Dictionary_string__bool__o* App_ResourceManager__get_s_Files (const MethodInfo* method);
bool App_ResourceManager__IsInitialized (const MethodInfo* method);
void App_ResourceManager__LogException (UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o op, System_Exception_o* ex, const MethodInfo* method);
bool App_ResourceManager__TryAddFile (System_String_o* key, bool isScene, const MethodInfo* method);
void App_ResourceManager__EntryFileTable (const MethodInfo* method);
void App_ResourceManager__Initialize (const MethodInfo* method);
void App_ResourceManager__Release (const MethodInfo* method);
void App_ResourceManager__Add (System_String_o* path, UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o handle, const MethodInfo* method);
void App_ResourceManager__Remove (System_String_o* path, const MethodInfo* method);
void App_ResourceManager__Release (UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o handle, const MethodInfo* method);
void App_ResourceManager__Update (const MethodInfo* method);
bool App_ResourceManager__IsLoading (const MethodInfo* method);
bool App_ResourceManager__IsLoading (System_String_o* path, const MethodInfo* method);
void App_ResourceManager__LoadGlobalAsync_AnimatorOverrideController_ (System_String_o* path, System_Action_T__o* completed, const MethodInfo_2059150* method);
void App_ResourceManager__LoadGlobalAsync_GameObject_ (System_String_o* path, System_Action_T__o* completed, const MethodInfo_2059150* method);
void App_ResourceManager__LoadGlobalAsync_object_ (System_String_o* path, System_Action_T__o* completed, const MethodInfo_2059150* method);
void App_ResourceManager__LoadGlobalAsync_Sprite_ (System_String_o* path, System_Action_T__o* completed, const MethodInfo_2059150* method);
void App_ResourceManager__LoadGlobalAsync_SpriteAtlas_ (System_String_o* path, System_Action_T__o* completed, const MethodInfo_2059150* method);
void App_ResourceManager__LoadGlobalAsync_Texture2D_ (System_String_o* path, System_Action_T__o* completed, const MethodInfo_2059150* method);
void App_ResourceManager__ReleaseGlobal (System_String_o* path, const MethodInfo* method);
bool App_ResourceManager__TryLoadGlobalAsync_GameObject_ (System_String_o* path, System_Action_T__o* completed, const MethodInfo_2059410* method);
bool App_ResourceManager__TryLoadGlobalAsync_object_ (System_String_o* path, System_Action_T__o* completed, const MethodInfo_2059410* method);
bool App_ResourceManager__TryLoadGlobalAsync_Sprite_ (System_String_o* path, System_Action_T__o* completed, const MethodInfo_2059410* method);
bool App_ResourceManager__TryReleaseGlobal (System_String_o* path, const MethodInfo* method);
UnityEngine_AnimatorOverrideController_o* App_ResourceManager__GetAsset_AnimatorOverrideController_ (System_String_o* path, const MethodInfo_2058EE0* method);
UnityEngine_GameObject_o* App_ResourceManager__GetAsset_GameObject_ (System_String_o* path, const MethodInfo_2058EE0* method);
Il2CppObject* App_ResourceManager__GetAsset_object_ (System_String_o* path, const MethodInfo_2058EE0* method);
UnityEngine_Playables_PlayableAsset_o* App_ResourceManager__GetAsset_PlayableAsset_ (System_String_o* path, const MethodInfo_2058EE0* method);
UnityEngine_Sprite_o* App_ResourceManager__GetAsset_Sprite_ (System_String_o* path, const MethodInfo_2058EE0* method);
UnityEngine_U2D_SpriteAtlas_o* App_ResourceManager__GetAsset_SpriteAtlas_ (System_String_o* path, const MethodInfo_2058EE0* method);
UnityEngine_Texture2D_o* App_ResourceManager__GetAsset_Texture2D_ (System_String_o* path, const MethodInfo_2058EE0* method);
UnityEngine_GameObject_o* App_ResourceManager__Instantiate (System_String_o* path, UnityEngine_GameObject_o* parent, const MethodInfo* method);
UnityEngine_GameObject_o* App_ResourceManager__Instantiate (System_String_o* path, UnityEngine_Transform_o* parent, const MethodInfo* method);
bool App_ResourceManager__FileExists (System_String_o* path, const MethodInfo* method);
void App_ResourceManager___ctor (App_ResourceManager_o* __this, const MethodInfo* method);
void App_ResourceManager___cctor (const MethodInfo* method);
