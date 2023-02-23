#pragma once

#include "il2cpp.h"

void App_NexRanking__OnCreate (App_NexRanking_o* __this, const MethodInfo* method);
bool App_NexRanking__Download (App_NexRanking_o* __this, App_ProcInst_o* super, System_String_o* cid, App_NexRanking_Data_array* ranking, const MethodInfo* method);
bool App_NexRanking__Upload (App_NexRanking_o* __this, App_ProcInst_o* super, System_String_o* cid, App_NexRanking_Data_array* pairs, const MethodInfo* method);
void App_NexRanking__ClearSucceeded (App_NexRanking_o* __this, const MethodInfo* method);
bool App_NexRanking__get_IsSucceeded (App_NexRanking_o* __this, const MethodInfo* method);
bool App_NexRanking__GetIdAndSlot (int32_t chapterIndex, App_NexRanking_Data_o* data, uint64_t* dataId, int32_t* slot, const MethodInfo* method);
bool App_NexRanking__GetIdAndSlot (int32_t chapterIndex, int32_t personIndex, int32_t godIndex, uint64_t* dataId, int32_t* slot, const MethodInfo* method);
bool App_NexRanking__GetPersonAndGodIndex (uint64_t dataId, int32_t slot, int32_t chapterIndex, int32_t* personIndex, int32_t* godIndex, const MethodInfo* method);
void App_NexRanking___ctor (App_NexRanking_o* __this, const MethodInfo* method);
