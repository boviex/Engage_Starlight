#pragma once

#include "il2cpp.h"

App_BgmPlayer_o* App_MyRoomSoundMenu__get_Player (App_MyRoomSoundMenu_o* __this, const MethodInfo* method);
System_String_o* App_MyRoomSoundMenu__get_SelectBgm (const MethodInfo* method);
void App_MyRoomSoundMenu__set_SelectBgm (System_String_o* value, const MethodInfo* method);
void App_MyRoomSoundMenu___ctor (App_MyRoomSoundMenu_o* __this, System_Collections_Generic_List_BasicMenuItem__o* menuItemList, App_BasicMenuContent_o* menuContent, int32_t menuType, System_String_o* selectBgm, const MethodInfo* method);
void App_MyRoomSoundMenu__CreateBindMusic (App_ProcInst_o* super, const MethodInfo* method);
void App_MyRoomSoundMenu__CreateBindJukebox (App_ProcInst_o* super, const MethodInfo* method);
void App_MyRoomSoundMenu__CreateBindFieldBgmSelect (App_ProcInst_o* super, System_String_o* selectBgm, System_Action_string__o* callback, const MethodInfo* method);
System_String_o* App_MyRoomSoundMenu__GetName (App_MyRoomSoundMenu_o* __this, const MethodInfo* method);
void App_MyRoomSoundMenu__OnClose (App_MyRoomSoundMenu_o* __this, const MethodInfo* method);
void App_MyRoomSoundMenu__SetMusicName (App_MyRoomSoundMenu_o* __this, System_String_o* musicName, const MethodInfo* method);
void App_MyRoomSoundMenu__SetMusicHelpText (App_MyRoomSoundMenu_o* __this, System_String_o* text, const MethodInfo* method);
void App_MyRoomSoundMenu__Play (App_MyRoomSoundMenu_o* __this, System_String_o* eventName, const MethodInfo* method);
void App_MyRoomSoundMenu__PlaySelect (App_MyRoomSoundMenu_o* __this, System_String_o* eventName, const MethodInfo* method);
void App_MyRoomSoundMenu__Stop (App_MyRoomSoundMenu_o* __this, const MethodInfo* method);
int32_t App_MyRoomSoundMenu__BuildAttribute (App_MyRoomSoundMenu_o* __this, App_MyRoomSoundMenuItem_o* item, const MethodInfo* method);
int32_t App_MyRoomSoundMenu__Decide (App_MyRoomSoundMenu_o* __this, App_MyRoomSoundMenuItem_o* item, const MethodInfo* method);
void App_MyRoomSoundMenu__Tick (App_MyRoomSoundMenu_o* __this, const MethodInfo* method);
void App_MyRoomSoundMenu___cctor (const MethodInfo* method);
