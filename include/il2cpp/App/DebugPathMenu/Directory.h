#pragma once

#include "il2cpp.h"

App_DebugPathMenu_Directory_EnumResult_o* App_DebugPathMenu_Directory__EnumEntries (App_DebugPathMenu_Setting_o* setting, System_String_o* path, const MethodInfo* method);
bool App_DebugPathMenu_Directory__IsExists (System_String_o* path, const MethodInfo* method);
App_DebugPathMenu_Directory_EnumResult_o* App_DebugPathMenu_Directory__EnumEntriesNX (App_DebugPathMenu_Setting_o* setting, System_String_o* path, const MethodInfo* method);
App_DebugPathMenu_EntryData_o* App_DebugPathMenu_Directory__MakeEntryDataNX (bool isDirectory, System_String_o* entryName, const MethodInfo* method);
bool App_DebugPathMenu_Directory__IsExistsNX (System_String_o* path, const MethodInfo* method);
App_DebugPathMenu_Directory_EnumResult_o* App_DebugPathMenu_Directory__EnumEntriesWin (App_DebugPathMenu_Setting_o* setting, System_String_o* path, const MethodInfo* method);
App_DebugPathMenu_EntryData_o* App_DebugPathMenu_Directory__MakeEntryDataWin (bool isDirectory, System_String_o* fullPath, const MethodInfo* method);
bool App_DebugPathMenu_Directory__IsExistsWin (System_String_o* path, const MethodInfo* method);
void App_DebugPathMenu_Directory___ctor (App_DebugPathMenu_Directory_o* __this, const MethodInfo* method);
