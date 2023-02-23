#pragma once

#include "il2cpp.h"

App_ProfileCard_o* App_ProfileList__TryGet (App_ProfileList_o* __this, int32_t index, const MethodInfo* method);
void App_ProfileList__Serialize (App_ProfileList_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_ProfileList__Deserialize (App_ProfileList_o* __this, App_Stream_o* stream, const MethodInfo* method);
bool App_ProfileList__TryGet (App_ProfileList_o* __this, uint64_t ownerID, App_ProfileCard_o** card, const MethodInfo* method);
bool App_ProfileList__TryAdd (App_ProfileList_o* __this, App_ProfileCard_o* card, const MethodInfo* method);
bool App_ProfileList__ForceAdd (App_ProfileList_o* __this, App_ProfileCard_o* card, const MethodInfo* method);
bool App_ProfileList__IsFull (App_ProfileList_o* __this, const MethodInfo* method);
bool App_ProfileList__IsOver (App_ProfileList_o* __this, const MethodInfo* method);
void App_ProfileList___ctor (App_ProfileList_o* __this, const MethodInfo* method);
