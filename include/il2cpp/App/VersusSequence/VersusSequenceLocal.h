#pragma once

#include "il2cpp.h"

void App_VersusSequence_VersusSequenceLocal__InitImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__FinalImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
bool App_VersusSequence_VersusSequenceLocal__IsFailedJumpToTopImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
bool App_VersusSequence_VersusSequenceLocal__IsReportedEditMapImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__UploadReportDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__CreateBind (App_ProcInst_o* super, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__CreateBindUploadEditData (App_ProcInst_o* super, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__CreateBindUploadCasualData (App_ProcInst_o* super, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__InitializeLanRootPath (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
System_String_array* App_VersusSequence_VersusSequenceLocal__GetRateDirectoriesPaths (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetRateDirPath (App_VersusSequence_VersusSequenceLocal_o* __this, int32_t rate, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__AppendRate (int32_t rate, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetDataFileName (App_VersusServerRankedMetaData_o* metaData, int32_t rate, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetDataFileName (System_String_o* playerName, int32_t rate, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetDataFileName (App_VersusServerRankedMetaData_o* metaData, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetDataFileName (System_String_o* ownerName, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetMetaDataFileName (App_VersusServerRankedMetaData_o* metaData, int32_t rate, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetMetaDataFileName (System_String_o* ownerName, int32_t rate, const MethodInfo* method);
bool App_VersusSequence_VersusSequenceLocal__MoveFiles (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* playerName, int32_t fromRate, int32_t toRate, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetReplayDataPath (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* playerName, uint16_t slotId, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetReplayMetaPath (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* playerName, uint16_t slotId, const MethodInfo* method);
System_String_array* App_VersusSequence_VersusSequenceLocal__GetReplayMetaPaths (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* playerName, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetCasualDirectoryPath (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetCasualDataPath (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* playerName, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetCasualMetaPath (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* playerName, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__FindCasualMetaPath (App_VersusSequence_VersusSequenceLocal_o* __this, uint64_t principalID, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetPath (App_VersusSequence_VersusSequenceLocal_o* __this, App_VersusServerRankedMetaData_o* metaData, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__FindRankedMetaPath (App_VersusSequence_VersusSequenceLocal_o* __this, uint64_t principalID, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetPlayerName (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* path, const MethodInfo* method);
bool App_VersusSequence_VersusSequenceLocal__TryGetPrincipalId (App_VersusSequence_VersusSequenceLocal_o* __this, uint64_t* principalId, const MethodInfo* method);
System_String_o* App_VersusSequence_VersusSequenceLocal__GetLocalNickName (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__GetMyCasualMetaDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__PostGetMyCasualMetaDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__GetEditMetaDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__PostGetEditMetaDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__UpdateRateImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__SetRankedInfoImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__UploadEditDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__LocalUpload (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* playerName, App_VersusServerRankedMetaData_o* metaData, App_VersusServerRankedData_o* data, uint16_t rateDataType, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__PostUploadEditDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__DownloadMetaCasualFromDataCodeImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__DownloadMetaRankedFromDataCodeImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__CheckAccessibleProfileImpl (App_VersusSequence_VersusSequenceLocal_o* __this, int32_t mode, App_NexVersus_TargetSlotList_o* targetSlotList, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__DownloadMetaProfileImpl (App_VersusSequence_VersusSequenceLocal_o* __this, int32_t mode, App_ProfileCard_o* profile, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__DownloadCasualImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__UploadReplayImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
uint16_t App_VersusSequence_VersusSequenceLocal__GetUploadReplaySlot (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* opponentName, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__UploadCasualImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__ChangeCasualImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__SearchSameRateImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__ExcludeMySearchRankedData (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__SearchCasualImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__SearchCasualLocal (App_VersusSequence_VersusSequenceLocal_o* __this, System_Collections_Generic_List_VersusServerCasualMetaData__o* resultList, bool isMyself, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__SearchCasualFriendImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__SearchRankedFriendImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__ExcludeMySearchCasualData (App_VersusSequence_VersusSequenceLocal_o* __this, System_Collections_Generic_List_VersusServerCasualMetaData__o* dataList, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__DownloadImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__DownloadMyEditImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__SelectReplayImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__MostOldestReplayMetaData (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_array* paths, App_VersusServerReplayMetaData_o** metaData, System_String_o** metaPath, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__DownloadReplayImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__ChangeReplayMetaImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
uint64_t App_VersusSequence_VersusSequenceLocal__SearchMyDataToDataId (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
bool App_VersusSequence_VersusSequenceLocal__GetLastUploadedResultImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
App_VersusServerRankedMetaData_o* App_VersusSequence_VersusSequenceLocal__GetDownloadedEditMetaDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__ChangeRankedMetaDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, App_VersusServerRankedMetaData_o* metaData, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__ChangeDataTypeImpl (App_VersusSequence_VersusSequenceLocal_o* __this, uint64_t dataId, uint16_t dataType, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__InitEditDataImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__CheckParentalControlImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
bool App_VersusSequence_VersusSequenceLocal__IsParentalControlAvailableImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__EndParentalControlImpl (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal__CreateSelectReplayMetaMenu (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_array* metaPaths, App_VersusSequence_VersusSequenceLocal_SelectReplayMetaMenuItem_ACallback_o* callback, const MethodInfo* method);
App_VersusServerReplayMetaData_o* App_VersusSequence_VersusSequenceLocal__Deserialize (App_VersusSequence_VersusSequenceLocal_o* __this, System_String_o* path, const MethodInfo* method);
void App_VersusSequence_VersusSequenceLocal___ctor (App_VersusSequence_VersusSequenceLocal_o* __this, const MethodInfo* method);