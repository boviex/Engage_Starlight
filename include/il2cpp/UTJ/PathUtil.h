#pragma once

#include "il2cpp.h"

System_String_o* UTJ_PathUtil__NormalizePath (System_String_o* path, const MethodInfo* method);
System_String_o* UTJ_PathUtil__CombinePath (System_String_o* parent, System_String_o* child, const MethodInfo* method);
System_String_o* UTJ_PathUtil__CombinePaths (System_Collections_Generic_IEnumerable_string__o* paths, const MethodInfo* method);
System_String_o* UTJ_PathUtil__SystemPathToAssetPath (System_String_o* inSystemPath, const MethodInfo* method);
System_String_o* UTJ_PathUtil__AssetPathToSystemPath (System_String_o* assetPath, const MethodInfo* method);
System_String_o* UTJ_PathUtil__PathToResourcePath (System_String_o* sourcePath, const MethodInfo* method);
System_Collections_Generic_IEnumerable_string__o* UTJ_PathUtil__GetUniquePaths (System_Collections_Generic_IEnumerable_string__o* inputPaths, const MethodInfo* method);
void UTJ_PathUtil___ctor (UTJ_PathUtil_o* __this, const MethodInfo* method);
