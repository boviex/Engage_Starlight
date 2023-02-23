#pragma once

#include "il2cpp.h"

void App_Talk3D_TalkTagParser___ctor (App_Talk3D_TalkTagParser_o* __this, const MethodInfo* method);
App_Talk3D_TalkTag_o* App_Talk3D_TalkTagParser__Parse (App_Talk3D_TalkTagParser_o* __this, App_Talk3D_TalkPtr_o* talkPtr, const MethodInfo* method);
App_Talk3D_TalkTag_o* App_Talk3D_TalkTagParser__GetAddLetterTagForReplace (App_Talk3D_TalkTagParser_o* __this, uint16_t chr, const MethodInfo* method);
void App_Talk3D_TalkTagParser__ResetLineFeedEnable (App_Talk3D_TalkTagParser_o* __this, const MethodInfo* method);
System_String_o* App_Talk3D_TalkTagParser__GetHeadText (System_String_o* mid, int32_t num, const MethodInfo* method);
bool App_Talk3D_TalkTagParser__AddCharToHeadText (uint16_t chr, System_String_o** head, int32_t* num, bool* strToLowerTrigger, bool* isLatestStrPatchim1, bool* isLatestStrPatchim2, const MethodInfo* method);
