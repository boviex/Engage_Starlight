#pragma once

#include "il2cpp.h"

void MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader___ctor (MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader_o* __this, System_String_o* assetsPath, const MethodInfo* method);
void MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader___ctor (MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader_o* __this, System_Collections_Generic_Dictionary_string__string__o* scriptToCodeMap, const MethodInfo* method);
void MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader__LoadResourcesWithReflection (MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader_o* __this, System_String_o* assetsPath, const MethodInfo* method);
System_String_o* MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader__GetFileName (MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader_o* __this, System_String_o* filename, const MethodInfo* method);
Il2CppObject* MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader__LoadFile (MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader_o* __this, System_String_o* file, MoonSharp_Interpreter_Table_o* globalContext, const MethodInfo* method);
bool MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader__ScriptFileExists (MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader_o* __this, System_String_o* file, const MethodInfo* method);
System_String_array* MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader__GetLoadedScripts (MoonSharp_Interpreter_Loaders_UnityAssetsScriptLoader_o* __this, const MethodInfo* method);
