#pragma once

#include "il2cpp.h"

void PiaPluginSession_UpdateSessionSetting__SetApplicationData (PiaPluginSession_UpdateSessionSetting_o* __this, System_Byte_array* applicationData, int32_t applicationDataSize, const MethodInfo* method_info);
System_Byte_array* PiaPluginSession_UpdateSessionSetting__GetApplicationData (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
int32_t PiaPluginSession_UpdateSessionSetting__GetApplicationDataSize (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
void PiaPluginSession_UpdateSessionSetting__SetSelectionPriority (PiaPluginSession_UpdateSessionSetting_o* __this, uint8_t selectionPriority, const MethodInfo* method_info);
uint8_t PiaPluginSession_UpdateSessionSetting__GetSelectionPriority (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
void PiaPluginSession_UpdateSessionSetting__SetParticipantNumMin (PiaPluginSession_UpdateSessionSetting_o* __this, uint16_t participantNumMin, const MethodInfo* method_info);
uint16_t PiaPluginSession_UpdateSessionSetting__GetParticipantNumMin (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
void PiaPluginSession_UpdateSessionSetting__SetParticipantNumMax (PiaPluginSession_UpdateSessionSetting_o* __this, uint16_t participantNumMax, const MethodInfo* method_info);
uint16_t PiaPluginSession_UpdateSessionSetting__GetParticipantNumMax (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
void PiaPluginSession_UpdateSessionSetting__SetCountryCode (PiaPluginSession_UpdateSessionSetting_o* __this, System_String_o* countryCode, const MethodInfo* method_info);
System_String_o* PiaPluginSession_UpdateSessionSetting__GetCountryCode (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
void PiaPluginSession_UpdateSessionSetting__SetRatingValue (PiaPluginSession_UpdateSessionSetting_o* __this, uint32_t ratingValue, const MethodInfo* method_info);
uint32_t PiaPluginSession_UpdateSessionSetting__GetRatingValue (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
void PiaPluginSession_UpdateSessionSetting__SetDisconnectionRate (PiaPluginSession_UpdateSessionSetting_o* __this, uint32_t disconnectionRate, const MethodInfo* method_info);
uint32_t PiaPluginSession_UpdateSessionSetting__GetDisconnectionRate (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
void PiaPluginSession_UpdateSessionSetting__SetViolationRate (PiaPluginSession_UpdateSessionSetting_o* __this, uint32_t violationRate, const MethodInfo* method_info);
uint32_t PiaPluginSession_UpdateSessionSetting__GetViolationRate (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
void PiaPluginSession_UpdateSessionSetting__SetUpdateGeoIp (PiaPluginSession_UpdateSessionSetting_o* __this, bool isUpdateGeoIp, const MethodInfo* method_info);
bool PiaPluginSession_UpdateSessionSetting__IsUpdateGeoIp (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSession_UpdateSessionSetting__SetAttributeList (PiaPluginSession_UpdateSessionSetting_o* __this, System_Collections_Generic_List_PiaPluginSession_UpdateSessionSetting_Attribute__o* attributeList, const MethodInfo* method_info);
System_Collections_Generic_List_PiaPluginSession_UpdateSessionSetting_Attribute__o* PiaPluginSession_UpdateSessionSetting__GetAttributeList (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSession_UpdateSessionSetting__SetSessionUserPassword (PiaPluginSession_UpdateSessionSetting_o* __this, System_String_o* userPassword, const MethodInfo* method_info);
System_String_o* PiaPluginSession_UpdateSessionSetting__GetSessionUserPassword (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSession_UpdateSessionSetting__SetSessionMatchmakeKeyword (PiaPluginSession_UpdateSessionSetting_o* __this, System_String_o* keyword, const MethodInfo* method_info);
System_String_o* PiaPluginSession_UpdateSessionSetting__GetSessionMatchmakeKeyword (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
PiaPlugin_Result_o PiaPluginSession_UpdateSessionSetting__SetStartedTime (PiaPluginSession_UpdateSessionSetting_o* __this, PiaPlugin_DateTime_o dateTime, const MethodInfo* method_info);
PiaPlugin_DateTime_o PiaPluginSession_UpdateSessionSetting__GetStartedTime (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);
void PiaPluginSession_UpdateSessionSetting___ctor (PiaPluginSession_UpdateSessionSetting_o* __this, const MethodInfo* method_info);