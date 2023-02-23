#pragma once

#include "il2cpp.h"

void Net_Nex_DataStore__TryInitialize (const MethodInfo* method);
void Net_Nex_DataStore__TryCleanup (const MethodInfo* method);
NexPlugin_DataStoreSearchParam_o* Net_Nex_DataStore__GetSearchParam (const MethodInfo* method);
int32_t Net_Nex_DataStore__SearchAsync (NexPlugin_DataStoreSearchParam_o* param, NexPlugin_DataStore_SearchObjectCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_DataStore__SearchLightAsync (NexPlugin_DataStoreSearchParam_o* param, NexPlugin_DataStore_SearchObjectCB_o* callback, const MethodInfo* method);
NexPlugin_DataStorePrepareGetParam_o* Net_Nex_DataStore__GetGetParam (const MethodInfo* method);
int32_t Net_Nex_DataStore__GetAsync (NexPlugin_DataStorePrepareGetParam_o* param, uint64_t bufferSize, NexPlugin_DataStore_GetObjectCB_o* callback, const MethodInfo* method);
System_Collections_Generic_List_DataStoreGetMetaParam__o* Net_Nex_DataStore__GetGetMetaParamList (const MethodInfo* method);
NexPlugin_DataStoreGetMetaParam_o* Net_Nex_DataStore__GetGetMetaParam (const MethodInfo* method);
int32_t Net_Nex_DataStore__GetMetaAsync (NexPlugin_DataStoreGetMetaParam_o* param, NexPlugin_DataStore_GetMetaCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_DataStore__GetMetaAsync (System_Collections_Generic_List_ulong__o* dataIds, NexPlugin_DataStoreGetMetaParam_o* param, NexPlugin_DataStore_GetMetaListCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_DataStore__GetMetaAsync (System_Collections_Generic_List_DataStoreGetMetaParam__o* param, NexPlugin_DataStore_GetMetaListCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_DataStore__GetPersistenceInfoAsync (uint64_t principalId, uint16_t slot, NexPlugin_DataStore_GetPersistenceInfoCB_o* callback, const MethodInfo* method);
NexPlugin_DataStorePreparePostParam_o* Net_Nex_DataStore__GetPostParam (const MethodInfo* method);
int32_t Net_Nex_DataStore__PostAsync (NexPlugin_DataStorePreparePostParam_o* param, System_Byte_array* buffer, NexPlugin_DataStore_PostCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_DataStore__PostMetaAsync (NexPlugin_DataStorePreparePostParam_o* param, NexPlugin_DataStore_PostCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_DataStore__CompleteSuspendedPostAsync (System_Collections_Generic_List_ulong__o* dataIds, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
NexPlugin_DataStorePrepareUpdateParam_o* Net_Nex_DataStore__GetUpdateParam (const MethodInfo* method);
int32_t Net_Nex_DataStore__UpdateAsync (NexPlugin_DataStorePrepareUpdateParam_o* param, System_Byte_array* buffer, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
NexPlugin_DataStoreChangeMetaParam_o* Net_Nex_DataStore__GetChangeMetaParam (const MethodInfo* method);
int32_t Net_Nex_DataStore__ChangeMetaAsync (NexPlugin_DataStoreChangeMetaParam_o* param, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_DataStore__ChangeMetaAsync (System_Collections_Generic_List_ulong__o* dataIds, NexPlugin_DataStoreChangeMetaParam_o* param, bool isTransactional, NexPlugin_DataStore_ResultListCB_o* callback, const MethodInfo* method);
NexPlugin_DataStoreRatingInitParam_o* Net_Nex_DataStore__GetRatingInitParam (const MethodInfo* method);
System_Collections_Generic_List_DataStoreRatingTarget__o* Net_Nex_DataStore__GetRatingTargetList (const MethodInfo* method);
NexPlugin_DataStoreRatingTarget_o* Net_Nex_DataStore__GetRatingTarget (const MethodInfo* method);
NexPlugin_DataStoreRateObjectParam_o* Net_Nex_DataStore__GetRateObjectParam (const MethodInfo* method);
int32_t Net_Nex_DataStore__RateAsync (NexPlugin_DataStoreRatingTarget_o* target, NexPlugin_DataStoreRateObjectParam_o* rateParam, NexPlugin_DataStore_RatingInfoCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_DataStore__RateWithPostingAsync (System_Collections_Generic_List_DataStoreRatingTarget__o* targets, NexPlugin_DataStoreRateObjectParam_o* rateParam, NexPlugin_DataStorePreparePostParam_o* postParam, NexPlugin_DataStore_RatingInfoListCB_o* callback, const MethodInfo* method);
System_Collections_Generic_List_DataStoreDeleteParam__o* Net_Nex_DataStore__GetDeleteParamList (const MethodInfo* method);
NexPlugin_DataStoreDeleteParam_o* Net_Nex_DataStore__GetDeleteParam (const MethodInfo* method);
int32_t Net_Nex_DataStore__DeleteAsync (System_Collections_Generic_List_DataStoreDeleteParam__o* param, NexPlugin_DataStore_ResultListCB_o* callback, const MethodInfo* method);
int32_t Net_Nex_DataStore__UnperpetuateAsync (uint16_t persistenceSlotId, bool deleteLastObject, NexPlugin_AsyncResultCB_o* callback, const MethodInfo* method);
