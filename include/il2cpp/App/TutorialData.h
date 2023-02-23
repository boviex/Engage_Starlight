#pragma once

#include "il2cpp.h"

void App_TutorialData__Load (const MethodInfo* method);
System_Collections_Generic_List_TutorialData__o* App_TutorialData__TryGetFromTutid (System_String_o* tutid, const MethodInfo* method);
void App_TutorialData__LockPickUpTutorial (const MethodInfo* method);
void App_TutorialData__SetListFlag (int32_t flag, const MethodInfo* method);
App_StructArrayList_TutorialData__o* App_TutorialData__GetListFromType (int32_t type, bool isGetAllTutorial, const MethodInfo* method);
System_String_o* App_TutorialData__get_MID (App_TutorialData_o* __this, const MethodInfo* method);
void App_TutorialData__set_MID (App_TutorialData_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_TutorialData__get_Title (App_TutorialData_o* __this, const MethodInfo* method);
void App_TutorialData__set_Title (App_TutorialData_o* __this, System_String_o* value, const MethodInfo* method);
System_String_o* App_TutorialData__get_SpriteAtlas (App_TutorialData_o* __this, const MethodInfo* method);
void App_TutorialData__set_SpriteAtlas (App_TutorialData_o* __this, System_String_o* value, const MethodInfo* method);
int32_t App_TutorialData__get_Type (App_TutorialData_o* __this, const MethodInfo* method);
void App_TutorialData__set_Type (App_TutorialData_o* __this, int32_t value, const MethodInfo* method);
int32_t App_TutorialData__get_Notice (App_TutorialData_o* __this, const MethodInfo* method);
void App_TutorialData__set_Notice (App_TutorialData_o* __this, int32_t value, const MethodInfo* method);
System_String_o* App_TutorialData__get_Cid (App_TutorialData_o* __this, const MethodInfo* method);
void App_TutorialData__set_Cid (App_TutorialData_o* __this, System_String_o* value, const MethodInfo* method);
int32_t App_TutorialData__get_No (App_TutorialData_o* __this, const MethodInfo* method);
void App_TutorialData__set_No (App_TutorialData_o* __this, int32_t value, const MethodInfo* method);
int32_t App_TutorialData__get_SSType (App_TutorialData_o* __this, const MethodInfo* method);
void App_TutorialData__set_SSType (App_TutorialData_o* __this, int32_t value, const MethodInfo* method);
System_String_o* App_TutorialData__GetGlobalFlagsName (System_String_o* tutid, const MethodInfo* method);
void App_TutorialData__SetGlobalFlags (System_String_o* tutid, int32_t flag, const MethodInfo* method);
int32_t App_TutorialData__GetGlobalFlags (System_String_o* tutid, const MethodInfo* method);
bool App_TutorialData__IsGlobalFlags (System_String_o* tutid, int32_t flag, const MethodInfo* method);
bool App_TutorialData__IsLock (System_String_o* tutid, const MethodInfo* method);
void App_TutorialData__RegistGlobalFlags (const MethodInfo* method);
void App_TutorialData__CompletedChapter (App_ChapterData_o* chapter, const MethodInfo* method);
void App_TutorialData___ctor (App_TutorialData_o* __this, const MethodInfo* method);
