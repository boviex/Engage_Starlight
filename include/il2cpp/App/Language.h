#pragma once

#include "il2cpp.h"

void App_Language__add_s_LangChanged (System_Action_o* value, const MethodInfo* method);
void App_Language__remove_s_LangChanged (System_Action_o* value, const MethodInfo* method);
void App_Language__Initialize (const MethodInfo* method);
void App_Language__SetLangAndVoiceFirst (int32_t lang, int32_t voice, const MethodInfo* method);
int32_t App_Language__GetLang (const MethodInfo* method);
void App_Language__add_LangChanged (System_Action_o* value, const MethodInfo* method);
void App_Language__remove_LangChanged (System_Action_o* value, const MethodInfo* method);
int32_t App_Language__GetSortKey (int32_t lang, TMPro_TMP_FontAsset_o* font, const MethodInfo* method);
void App_Language__SetLang (int32_t lang, const MethodInfo* method);
int32_t App_Language__GetVoice (const MethodInfo* method);
void App_Language__SetVoice (int32_t voice, const MethodInfo* method);
void App_Language__ReflectSetting (const MethodInfo* method);
void App_Language__SaveSetting (App_ProcInst_o* parent, const MethodInfo* method);
System_String_o* App_Language__GetLangName (int32_t lang, const MethodInfo* method);
System_String_o* App_Language__GetVoiceName (int32_t voice, const MethodInfo* method);
bool App_Language__IsTalkLayout2Lines (int32_t lang, const MethodInfo* method);
System_String_o* App_Language__GetLangDesired (const MethodInfo* method);
System_Globalization_CultureInfo_o* App_Language__GetCultureInfo (int32_t lang, const MethodInfo* method);
System_Globalization_CultureInfo_o* App_Language__GetCultureInfo (const MethodInfo* method);
void App_Language___ctor (App_Language_o* __this, const MethodInfo* method);
void App_Language___cctor (const MethodInfo* method);
