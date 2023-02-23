#pragma once

#include "il2cpp.h"

System_String_o* App_SoftwareKeyboard__get_ResultText (const MethodInfo* method);
void App_SoftwareKeyboard___ctor (App_SoftwareKeyboard_o* __this, int32_t maxLength, System_String_o* initialText, System_String_o* headerText, System_String_o* subText, int32_t preset, System_Action_string__o* callback, const MethodInfo* method);
App_ProcDesc_array* App_SoftwareKeyboard__CreateDesc (App_SoftwareKeyboard_o* __this, const MethodInfo* method);
void App_SoftwareKeyboard__Create (App_SoftwareKeyboard_o* __this, const MethodInfo* method);
void App_SoftwareKeyboard__Destroy (App_SoftwareKeyboard_o* __this, const MethodInfo* method);
void App_SoftwareKeyboard__Callback (App_SoftwareKeyboard_o* __this, const MethodInfo* method);
int32_t App_SoftwareKeyboard__GetKeyboradMode (App_SoftwareKeyboard_o* __this, const MethodInfo* method);
void App_SoftwareKeyboard__ShowKeyboard (App_SoftwareKeyboard_o* __this, const MethodInfo* method);
void App_SoftwareKeyboard__NetKeepAliveOn (App_SoftwareKeyboard_o* __this, const MethodInfo* method);
void App_SoftwareKeyboard__NetKeepAliveOff (App_SoftwareKeyboard_o* __this, const MethodInfo* method);
void App_SoftwareKeyboard__CreateBind (App_ProcInst_o* super, int32_t maxLength, System_String_o* initialText, System_String_o* headerText, System_String_o* subText, int32_t preset, System_Action_string__o* callback, const MethodInfo* method);
void App_SoftwareKeyboard__CreateBindByPlayerNameInput (App_ProcInst_o* super, System_String_o* name, System_Action_string__o* callback, const MethodInfo* method);
System_String_o* App_SoftwareKeyboard__GetResult (const MethodInfo* method);
int32_t App_SoftwareKeyboard__GetNnPreset (App_SoftwareKeyboard_o* __this, const MethodInfo* method);
void App_SoftwareKeyboard___cctor (const MethodInfo* method);
