#pragma once

#include "il2cpp.h"

UnityEngine_Object_array* UnityEngine_ResourcesAPIInternal__FindObjectsOfTypeAll (System_Type_o* type, const MethodInfo* method);
UnityEngine_Shader_o* UnityEngine_ResourcesAPIInternal__FindShaderByName (System_String_o* name, const MethodInfo* method);
UnityEngine_Object_o* UnityEngine_ResourcesAPIInternal__Load (System_String_o* path, System_Type_o* systemTypeInstance, const MethodInfo* method);
UnityEngine_Object_array* UnityEngine_ResourcesAPIInternal__LoadAll (System_String_o* path, System_Type_o* systemTypeInstance, const MethodInfo* method);
UnityEngine_ResourceRequest_o* UnityEngine_ResourcesAPIInternal__LoadAsyncInternal (System_String_o* path, System_Type_o* type, const MethodInfo* method);
void UnityEngine_ResourcesAPIInternal__UnloadAsset (UnityEngine_Object_o* assetToUnload, const MethodInfo* method);
