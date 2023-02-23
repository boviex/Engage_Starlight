#pragma once

#include "il2cpp.h"

void App_ChapterRecord___ctor (App_ChapterRecord_o* __this, const MethodInfo* method);
int32_t App_ChapterRecord__get_Count (App_ChapterRecord_o* __this, const MethodInfo* method);
App_ChapterRecord_Record_o* App_ChapterRecord__get_Item (App_ChapterRecord_o* __this, int32_t index, const MethodInfo* method);
App_ChapterRecord_Record_o* App_ChapterRecord__Find (App_ChapterRecord_o* __this, System_String_o* cid, const MethodInfo* method);
App_ChapterRecord_Record_o* App_ChapterRecord__Find (App_ChapterRecord_o* __this, App_ChapterData_o* chapter, const MethodInfo* method);
void App_ChapterRecord__Clear (App_ChapterRecord_o* __this, const MethodInfo* method);
App_ChapterRecord_Record_o* App_ChapterRecord__TryAdd (App_ChapterRecord_o* __this, App_ChapterRecord_Record_o* record, const MethodInfo* method);
App_ChapterRecord_Record_o* App_ChapterRecord__TryAdd (App_ChapterRecord_o* __this, System_String_o* cid, const MethodInfo* method);
App_ChapterRecord_Record_o* App_ChapterRecord__TryAdd (App_ChapterRecord_o* __this, App_ChapterData_o* chapter, const MethodInfo* method);
void App_ChapterRecord__Serialize (App_ChapterRecord_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_ChapterRecord__Deserialize (App_ChapterRecord_o* __this, App_Stream_o* stream, const MethodInfo* method);
