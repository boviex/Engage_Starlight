#pragma once

#include "il2cpp.h"

System_String_o* App_HubAccessData__get_MID (App_HubAccessData_o* __this, const MethodInfo* method);
App_HubDisposData_o* App_HubAccessData__get_DisposData (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_DisposData (App_HubAccessData_o* __this, App_HubDisposData_o* value, const MethodInfo* method);
bool App_HubAccessData__get_IsStory (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_IsStory (App_HubAccessData_o* __this, bool value, const MethodInfo* method);
bool App_HubAccessData__get_IsReliance (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_IsReliance (App_HubAccessData_o* __this, bool value, const MethodInfo* method);
bool App_HubAccessData__get_IsGod (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_IsGod (App_HubAccessData_o* __this, bool value, const MethodInfo* method);
bool App_HubAccessData__get_IsUnit (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_IsUnit (App_HubAccessData_o* __this, bool value, const MethodInfo* method);
bool App_HubAccessData__get_IsAnimal (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_IsAnimal (App_HubAccessData_o* __this, bool value, const MethodInfo* method);
bool App_HubAccessData__get_IsPerson (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_IsPerson (App_HubAccessData_o* __this, bool value, const MethodInfo* method);
bool App_HubAccessData__get_IsDone (App_HubAccessData_o* __this, const MethodInfo* method);
bool App_HubAccessData__get_IsAccessed (App_HubAccessData_o* __this, const MethodInfo* method);
int32_t App_HubAccessData__get_AccessCount (App_HubAccessData_o* __this, const MethodInfo* method);
System_String_o* App_HubAccessData__get_AccessCountFlagName (App_HubAccessData_o* __this, const MethodInfo* method);
bool App_HubAccessData__get_IsAccessEnabled (App_HubAccessData_o* __this, const MethodInfo* method);
int32_t App_HubAccessData__get_ResultTalkIndex (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_ResultTalkIndex (App_HubAccessData_o* __this, int32_t value, const MethodInfo* method);
bool App_HubAccessData__get_IsHeroBirthday (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_IsHeroBirthday (App_HubAccessData_o* __this, bool value, const MethodInfo* method);
System_String_o* App_HubAccessData__get_TalkItem (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_TalkItem (App_HubAccessData_o* __this, System_String_o* value, const MethodInfo* method);
int32_t App_HubAccessData__get_ItemCount (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__set_ItemCount (App_HubAccessData_o* __this, int32_t value, const MethodInfo* method);
int32_t App_HubAccessData__GetMessageCount (App_HubAccessData_o* __this, const MethodInfo* method);
System_String_o* App_HubAccessData__GetMessage (App_HubAccessData_o* __this, int32_t index, const MethodInfo* method);
void App_HubAccessData__UpdateAccessCount (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__PreLocate (App_HubAccessData_o* __this, const MethodInfo* method);
bool App_HubAccessData__DoneAccess (App_HubAccessData_o* __this, const MethodInfo* method);
bool App_HubAccessData__ConfirmMessage (App_HubAccessData_o* __this, System_String_o* label, bool newAdd, const MethodInfo* method);
void App_HubAccessData__ConfirmContent (App_HubAccessData_o* __this, App_HubAccessManager_o* manager, const MethodInfo* method);
void App_HubAccessData__ConfirmContentHub (App_HubAccessData_o* __this, App_HubAccessManager_o* manager, const MethodInfo* method);
bool App_HubAccessData__ConfirmResult (App_HubAccessData_o* __this, App_HubAccessManager_o* manager, System_String_o* baseName, System_String_o* talkType, System_Func_int__int__bool__o* func, const MethodInfo* method);
bool App_HubAccessData__ConfirmStoryResult (App_HubAccessData_o* __this, System_String_o* storyLabel, const MethodInfo* method);
void App_HubAccessData__ConfirmContentKizuna (App_HubAccessData_o* __this, App_HubAccessManager_o* manager, const MethodInfo* method);
System_String_o* App_HubAccessData__TryGetPID (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData__ChangeTalk (App_HubAccessData_o* __this, System_String_o* mid, const MethodInfo* method);
void App_HubAccessData___ctor (App_HubAccessData_o* __this, const MethodInfo* method);
void App_HubAccessData___cctor (const MethodInfo* method);
