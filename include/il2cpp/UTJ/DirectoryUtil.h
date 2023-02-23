#pragma once

#include "il2cpp.h"

System_String_array* UTJ_DirectoryUtil__GetDirectories (System_String_o* path, System_String_o* searchPattern, const MethodInfo* method);
System_Collections_Generic_IEnumerable_string__o* UTJ_DirectoryUtil__GetFilesRecursively (System_String_o* path, System_String_o* searchPattern, const MethodInfo* method);
void UTJ_DirectoryUtil__GetFilesRecursively (System_String_o* path, System_String_o* searchPattern, System_Collections_Generic_List_string__o* files, const MethodInfo* method);
System_String_array* UTJ_DirectoryUtil__GetFiles (System_String_o* path, System_String_o* searchPattern, const MethodInfo* method);
bool UTJ_DirectoryUtil__TryToCreateDirectory (System_String_o* directoryName, const MethodInfo* method);
void UTJ_DirectoryUtil___ctor (UTJ_DirectoryUtil_o* __this, const MethodInfo* method);
