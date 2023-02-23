#pragma once

#include "il2cpp.h"

void App_GameSaveDataHeader___ctor (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
void App_GameSaveDataHeader__Update (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
void App_GameSaveDataHeader__Reset (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
void App_GameSaveDataHeader__Serialize (App_GameSaveDataHeader_o* __this, App_Stream_o* stream, const MethodInfo* method);
bool App_GameSaveDataHeader__Deserialize (App_GameSaveDataHeader_o* __this, App_Stream_o* stream, const MethodInfo* method);
int32_t App_GameSaveDataHeader__get_GameVersion (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
App_GameUserData_StatusField_o* App_GameSaveDataHeader__get_Status (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
App_ChapterData_o* App_GameSaveDataHeader__get_Chapter (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
int32_t App_GameSaveDataHeader__get_Sequence (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
int32_t App_GameSaveDataHeader__get_Difficulty (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
int32_t App_GameSaveDataHeader__get_GameMode (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
int32_t App_GameSaveDataHeader__get_Turn (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
float App_GameSaveDataHeader__get_PlayTime (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
int32_t App_GameSaveDataHeader__get_ContentsIndex (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
uint64_t App_GameSaveDataHeader__get_Identifier (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
App_ChapterData_o* App_GameSaveDataHeader__get_NextChapter (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
System_String_o* App_GameSaveDataHeader__GetChapterPrefix (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
System_String_o* App_GameSaveDataHeader__GetChapterName (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
System_String_o* App_GameSaveDataHeader__GetPlaceName (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
App_ChapterData_o* App_GameSaveDataHeader__GetChapterForDisplay (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
System_String_o* App_GameSaveDataHeader__GetHeroName (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
int32_t App_GameSaveDataHeader__GetHeroGender (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
bool App_GameSaveDataHeader__IsEncountMap (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
bool App_GameSaveDataHeader__IsChallengeMap (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
bool App_GameSaveDataHeader__IsTemporary (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
bool App_GameSaveDataHeader__IsCompleted (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
bool App_GameSaveDataHeader__IsEvilCompleted (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
int32_t App_GameSaveDataHeader__get_EvilDifficulty (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
bool App_GameSaveDataHeader__IsEvilMap (App_GameSaveDataHeader_o* __this, const MethodInfo* method);
