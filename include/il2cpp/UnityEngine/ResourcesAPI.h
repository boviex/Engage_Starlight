#pragma once

#include "il2cpp.h"

UnityEngine_ResourcesAPI_o* UnityEngine_ResourcesAPI__get_ActiveAPI (const MethodInfo* method);
UnityEngine_ResourcesAPI_o* UnityEngine_ResourcesAPI__get_overrideAPI (const MethodInfo* method);
void UnityEngine_ResourcesAPI___ctor (UnityEngine_ResourcesAPI_o* __this, const MethodInfo* method);
UnityEngine_Object_array* UnityEngine_ResourcesAPI__FindObjectsOfTypeAll (UnityEngine_ResourcesAPI_o* __this, System_Type_o* systemTypeInstance, const MethodInfo* method);
UnityEngine_Shader_o* UnityEngine_ResourcesAPI__FindShaderByName (UnityEngine_ResourcesAPI_o* __this, System_String_o* name, const MethodInfo* method);
UnityEngine_Object_o* UnityEngine_ResourcesAPI__Load (UnityEngine_ResourcesAPI_o* __this, System_String_o* path, System_Type_o* systemTypeInstance, const MethodInfo* method);
UnityEngine_Object_array* UnityEngine_ResourcesAPI__LoadAll (UnityEngine_ResourcesAPI_o* __this, System_String_o* path, System_Type_o* systemTypeInstance, const MethodInfo* method);
UnityEngine_ResourceRequest_o* UnityEngine_ResourcesAPI__LoadAsync (UnityEngine_ResourcesAPI_o* __this, System_String_o* path, System_Type_o* systemTypeInstance, const MethodInfo* method);
void UnityEngine_ResourcesAPI__UnloadAsset (UnityEngine_ResourcesAPI_o* __this, UnityEngine_Object_o* assetToUnload, const MethodInfo* method);
void UnityEngine_ResourcesAPI___cctor (const MethodInfo* method);
