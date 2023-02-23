#pragma once

#include "il2cpp.h"

void App_GameMessage___ctor (App_GameMessage_o* __this, System_String_o* mess, App_GameMessageContent_o* content, int32_t status, const MethodInfo* method);
App_ProcDesc_array* App_GameMessage__CreateDefaultDesc (App_GameMessage_o* __this, const MethodInfo* method);
void App_GameMessage__OnCreate (App_GameMessage_o* __this, const MethodInfo* method);
void App_GameMessage__OnDispose (App_GameMessage_o* __this, const MethodInfo* method);
App_GameMessage_Status_o* App_GameMessage__GetStatus (App_GameMessage_o* __this, const MethodInfo* method);
System_String_o* App_GameMessage__GetMess (App_GameMessage_o* __this, const MethodInfo* method);
System_String_o* App_GameMessage__GetExpandedMess (App_GameMessage_o* __this, const MethodInfo* method);
void App_GameMessage__Build (App_GameMessage_o* __this, const MethodInfo* method);
void App_GameMessage__OpenWindow (App_GameMessage_o* __this, const MethodInfo* method);
void App_GameMessage__WaitOpenWindow (App_GameMessage_o* __this, const MethodInfo* method);
void App_GameMessage__CloseWindow (App_GameMessage_o* __this, const MethodInfo* method);
void App_GameMessage__WaitCloseWindow (App_GameMessage_o* __this, const MethodInfo* method);
void App_GameMessage__Tick (App_GameMessage_o* __this, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateCommon (App_ProcInst_o* super, System_String_o* mess, bool isBind, int32_t status, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateNoBind (App_ProcInst_o* super, System_String_o* mess, int32_t status, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateBind (App_ProcInst_o* super, System_String_o* mess, int32_t status, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateKeyWait (App_ProcInst_o* super, System_String_o* mess, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateSystem (App_ProcInst_o* super, System_String_o* mess, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateWarning (App_ProcInst_o* super, System_String_o* mess, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateItemGetImpl (App_ProcInst_o* super, App_ItemData_o* item, System_String_o* name, System_String_o* label, int32_t count, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateItemGet (App_ProcInst_o* super, App_ItemData_o* itemData, System_String_o* label, int32_t count, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateUnitItemGet (App_ProcInst_o* super, App_UnitItem_o* unitItem, System_String_o* label, int32_t count, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateGoldGain (App_ProcInst_o* super, int32_t gold, System_String_o* label, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateGrowUpItemUse (App_ProcInst_o* super, App_ItemData_o* item, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__CreateEnhanceItemUse (App_ProcInst_o* super, App_ItemData_o* item, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__SetShadowOff (App_GameMessage_o* __this, const MethodInfo* method);
App_GameMessage_o* App_GameMessage__SetPosition (App_GameMessage_o* __this, float x, float y, const MethodInfo* method);
