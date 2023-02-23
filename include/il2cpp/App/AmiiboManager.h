#pragma once

#include "il2cpp.h"

int32_t App_AmiiboManager__get_ReceiveCountMax (const MethodInfo* method);
void App_AmiiboManager__set_ReceiveCountMax (int32_t value, const MethodInfo* method);
int32_t App_AmiiboManager__get_ReceiveFEAmiiboCountMax (const MethodInfo* method);
void App_AmiiboManager__set_ReceiveFEAmiiboCountMax (int32_t value, const MethodInfo* method);
void App_AmiiboManager__InitializeSystem (App_AmiiboManager_o* __this, const MethodInfo* method);
void App_AmiiboManager__FinalizeSystem (App_AmiiboManager_o* __this, const MethodInfo* method);
nn_Result_o App_AmiiboManager__ListNfcDevices (App_AmiiboManager_o* __this, const MethodInfo* method);
nn_Result_o App_AmiiboManager__AttachEvent (App_AmiiboManager_o* __this, const MethodInfo* method);
void App_AmiiboManager__DestroyEvent (App_AmiiboManager_o* __this, const MethodInfo* method);
nn_Result_o App_AmiiboManager__StartDetection (App_AmiiboManager_o* __this, const MethodInfo* method);
nn_Result_o App_AmiiboManager__StopDetection (App_AmiiboManager_o* __this, const MethodInfo* method);
nn_Result_o App_AmiiboManager__Mount (App_AmiiboManager_o* __this, const MethodInfo* method);
nn_Result_o App_AmiiboManager__Unmount (App_AmiiboManager_o* __this, const MethodInfo* method);
nn_Result_o App_AmiiboManager__ReadTagInfo (App_AmiiboManager_o* __this, nn_nfp_TagInfo_o* outTagInfo, const MethodInfo* method);
nn_Result_o App_AmiiboManager__ReadAmiiboInfo (App_AmiiboManager_o* __this, App_AmiiboManager_AmiiboInfo_o** outAmiiboInfo, const MethodInfo* method);
bool App_AmiiboManager__IsAvailabilityChanged (App_AmiiboManager_o* __this, const MethodInfo* method);
bool App_AmiiboManager__IsActivatedDevice (App_AmiiboManager_o* __this, const MethodInfo* method);
bool App_AmiiboManager__IsDeactivatedDevice (App_AmiiboManager_o* __this, const MethodInfo* method);
bool App_AmiiboManager__SelectDevice (App_AmiiboManager_o* __this, int32_t index, const MethodInfo* method);
nn_Result_o App_AmiiboManager__SelectDevice (App_AmiiboManager_o* __this, int32_t id, const MethodInfo* method);
nn_Result_o App_AmiiboManager__SelectControlDevice (App_AmiiboManager_o* __this, const MethodInfo* method);
int32_t App_AmiiboManager__GetSelectDeviceIndex (App_AmiiboManager_o* __this, const MethodInfo* method);
int32_t App_AmiiboManager__GetDeviceCount (App_AmiiboManager_o* __this, const MethodInfo* method);
int32_t App_AmiiboManager__GetNfpState (App_AmiiboManager_o* __this, const MethodInfo* method);
int32_t App_AmiiboManager__GetSelectDeviceState (App_AmiiboManager_o* __this, const MethodInfo* method);
nn_nfp_DeviceHandle_o App_AmiiboManager__GetSelectDeviceHandle (App_AmiiboManager_o* __this, const MethodInfo* method);
void App_AmiiboManager__SetupPad (App_AmiiboManager_o* __this, int32_t npadId, const MethodInfo* method);
void App_AmiiboManager__Dump (App_AmiiboManager_o* __this, const MethodInfo* method);
void App_AmiiboManager___ctor (App_AmiiboManager_o* __this, const MethodInfo* method);
void App_AmiiboManager___cctor (const MethodInfo* method);
