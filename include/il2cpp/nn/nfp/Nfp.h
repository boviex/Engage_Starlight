#pragma once

#include "il2cpp.h"

nn_Result_o nn_nfp_Nfp__AttachActivateEvent (uint32_t* outEventIndex, nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
bool nn_nfp_Nfp__IsActivatedDevice (nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
bool nn_nfp_Nfp__IsActivatedDevice (uint32_t eventIndex, const MethodInfo* method);
void nn_nfp_Nfp__DestroyActivatedEvent (nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
void nn_nfp_Nfp__DestroyActivatedEvent (uint32_t eventIndex, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__AttachDeactivateEvent (uint32_t* outEventIndex, nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
bool nn_nfp_Nfp__IsDeactivatedDevice (nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
bool nn_nfp_Nfp__IsDeactivatedDevice (uint32_t eventIndex, const MethodInfo* method);
void nn_nfp_Nfp__DestroyDeactivatedEvent (nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
void nn_nfp_Nfp__DestroyDeactivatedEvent (uint32_t eventIndex, const MethodInfo* method);
void nn_nfp_Nfp__AttachAvailabilityChangeEvent (const MethodInfo* method);
bool nn_nfp_Nfp__IsAvailabilityChanged (const MethodInfo* method);
void nn_nfp_Nfp__DestroyAvailabilityChangeEvent (const MethodInfo* method);
void nn_nfp_Nfp__InitializeSystem (const MethodInfo* method);
void nn_nfp_Nfp__FinalizeSystem (const MethodInfo* method);
int32_t nn_nfp_Nfp__GetState (const MethodInfo* method);
int32_t nn_nfp_Nfp__GetDeviceState (nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__GetNpadId (int32_t* outNpadId, nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNfcDeviceNotFound (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNfcDisabled (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNeedRetry (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNeedRestart (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNeedRegister (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNeedCreate (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNeedRestore (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNeedFormat (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultAccessIdMisMatch (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNotBroken (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultAlreadyCreated (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNotSupported (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultInvalidFormatVersion (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultMaxNfcDeviceActivated (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultConflictFunction (const MethodInfo* method);
nn_ErrorRange_o nn_nfp_Nfp__get_ResultNotUpdated (const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__ListDevices (nn_nfp_DeviceHandle_array* outBuffer, int32_t* outCount, int32_t bufferCount, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__StartDetection (nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__StopDetection (nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__Mount (nn_nfp_DeviceHandle_o deviceHandle, int32_t modelType, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__Mount (nn_nfp_DeviceHandle_o deviceHandle, int32_t modelType, int32_t mountTarget, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__Unmount (nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__Restore (nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__GetTagInfo (nn_nfp_TagInfo_o* outTagInfo, nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__GetCommonInfo (nn_nfp_CommonInfo_o* outCommonInfo, nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
nn_Result_o nn_nfp_Nfp__GetModelInfo (nn_nfp_ModelInfo_o* outModelInfo, nn_nfp_DeviceHandle_o deviceHandle, const MethodInfo* method);
