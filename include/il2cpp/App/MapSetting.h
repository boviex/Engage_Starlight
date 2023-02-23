#pragma once

#include "il2cpp.h"

void App_MapSetting__Awake (App_MapSetting_o* __this, const MethodInfo* method);
void App_MapSetting__Start (App_MapSetting_o* __this, const MethodInfo* method);
void App_MapSetting__Update (App_MapSetting_o* __this, const MethodInfo* method);
App_MapObject_o* App_MapSetting__FindMapObjectFromName (App_MapSetting_o* __this, System_String_o* name, const MethodInfo* method);
App_MapObject_o* App_MapSetting__FindMapObjectFromKey (App_MapSetting_o* __this, System_String_o* key, const MethodInfo* method);
void App_MapSetting__Activate (App_MapSetting_o* __this, const MethodInfo* method);
void App_MapSetting__Inactive (App_MapSetting_o* __this, const MethodInfo* method);
void App_MapSetting__ChangedActiveScene (App_MapSetting_o* __this, UnityEngine_SceneManagement_Scene_o current, UnityEngine_SceneManagement_Scene_o next, const MethodInfo* method);
void App_MapSetting__OnEnable (App_MapSetting_o* __this, const MethodInfo* method);
void App_MapSetting__OnDisable (App_MapSetting_o* __this, const MethodInfo* method);
void App_MapSetting__CommitMapObject (App_MapSetting_o* __this, const MethodInfo* method);
void App_MapSetting__Serialize (App_Stream_o* stream, const MethodInfo* method);
void App_MapSetting__Deserialize (App_Stream_o* stream, const MethodInfo* method);
void App_MapSetting__Resume (const MethodInfo* method);
System_Collections_Generic_List_MapObject__o* App_MapSetting__GetObjectList (App_MapSetting_o* __this, const MethodInfo* method);
void App_MapSetting__UpdateLODGroup (App_MapSetting_o* __this, const MethodInfo* method);
App_MapTerrain_o* App_MapSetting__get_MapTerrain (const MethodInfo* method);
int32_t App_MapSetting__get_Width (const MethodInfo* method);
int32_t App_MapSetting__get_Height (const MethodInfo* method);
void App_MapSetting___ctor (App_MapSetting_o* __this, const MethodInfo* method);
void App_MapSetting___cctor (const MethodInfo* method);
