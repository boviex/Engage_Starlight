#pragma once

#include "il2cpp.h"

void App_AmiiboSequence__FinalizeSystem (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__AmiiboReadingMenu (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__InitializeSystem (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__Setup (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__ShowError (App_AmiiboSequence_o* __this, nn_Result_o result, const MethodInfo* method);
bool App_AmiiboSequence__SetupOnGameErrorHandling (App_AmiiboSequence_o* __this, nn_Result_o result, const MethodInfo* method);
void App_AmiiboSequence__Read (App_AmiiboSequence_o* __this, const MethodInfo* method);
bool App_AmiiboSequence__ReadOnGameErrorHandling (App_AmiiboSequence_o* __this, nn_Result_o result, const MethodInfo* method);
bool App_AmiiboSequence__CommonErrorHandling (App_AmiiboSequence_o* __this, nn_Result_o result, const MethodInfo* method);
bool App_AmiiboSequence__CheckPassedDay (int32_t seconds, int32_t oldSeconds, const MethodInfo* method);
void App_AmiiboSequence__ReceiveRelayTicket (App_AmiiboSequence_o* __this, int32_t num, const MethodInfo* method);
void App_AmiiboSequence__ReceiveFirstItem (App_AmiiboSequence_o* __this, App_AmiiboData_o* data, int32_t numberingId, const MethodInfo* method);
void App_AmiiboSequence__ReceiveOtherAmiiboItem (App_AmiiboSequence_o* __this, App_AmiiboData_o* data, int32_t seedOffset, int32_t numberingId, const MethodInfo* method);
void App_AmiiboSequence__Mount (App_AmiiboSequence_o* __this, const MethodInfo* method);
bool App_AmiiboSequence__MountOnGameErrorHandling (App_AmiiboSequence_o* __this, nn_Result_o result, const MethodInfo* method);
void App_AmiiboSequence__GetItem (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__AlreadyGetItem (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__JumpToMount (App_AmiiboSequence_o* __this, const MethodInfo* method);
bool App_AmiiboSequence__SearchAmiibo (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__TagLostStandbyReady (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__AmiiboGameUserDataReset (const MethodInfo* method);
bool App_AmiiboSequence__CheckPassedDay (const MethodInfo* method);
int32_t App_AmiiboSequence__GetCanReceiveCount (const MethodInfo* method);
int32_t App_AmiiboSequence__GetReceiveCountResetTime (const MethodInfo* method);
System_String_o* App_AmiiboSequence__GetReceiveCountResetTimeString (const MethodInfo* method);
void App_AmiiboSequence__CreateBind (App_ProcInst_o* super, const MethodInfo* method);
App_ProcDesc_array* App_AmiiboSequence__CreateDesc (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__LoadRes (App_AmiiboSequence_o* __this, const MethodInfo* method);
bool App_AmiiboSequence__IsLoadingRes (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence__UnloadRes (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence___ctor (App_AmiiboSequence_o* __this, const MethodInfo* method);
void App_AmiiboSequence___cctor (const MethodInfo* method);
