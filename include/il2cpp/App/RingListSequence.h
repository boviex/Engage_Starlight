#pragma once

#include "il2cpp.h"

App_GodUnit_o* App_RingListSequence__GetGodUnit (App_GodData_o* godData, const MethodInfo* method);
bool App_RingListSequence__IsGotGod (App_GodData_o* godData, const MethodInfo* method);
bool App_RingListSequence__IsGotRing (App_RingData_o* ringData, const MethodInfo* method);
bool App_RingListSequence__IsGodAndRingRelated (App_RingListSequence_GodPageData_o* godPageData, App_RingListSequence_RingPageData_o* ringPageData, const MethodInfo* method);
System_String_o* App_RingListSequence__GetGodName (App_GodData_o* godData, const MethodInfo* method);
System_String_o* App_RingListSequence__GetGodName (App_RingListSequence_PageData_o* pageData, const MethodInfo* method);
bool App_RingListSequence__CompareGodName (App_RingListSequence_o* __this, System_String_o* godName1, System_String_o* godName2, const MethodInfo* method);
System_String_o* App_RingListSequence__GetWorldTextMid (App_GodData_o* godData, const MethodInfo* method);
void App_RingListSequence__Load (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__Unload (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__WaitLoading (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__Start (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__SetPageData (App_RingListSequence_o* __this, App_RingListSequence_PageData_o* pageData, const MethodInfo* method);
void App_RingListSequence__Open (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__WaitOpening (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__Tick (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__Close (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__WaitClosing (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__OnCreate (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__OnDispose (App_RingListSequence_o* __this, const MethodInfo* method);
App_ProcDesc_array* App_RingListSequence__GetDesc (App_RingListSequence_o* __this, const MethodInfo* method);
void App_RingListSequence__CreateBind (App_ProcInst_o* super, const MethodInfo* method);
bool App_RingListSequence__IsOpenEnable (const MethodInfo* method);
void App_RingListSequence___ctor (App_RingListSequence_o* __this, const MethodInfo* method);
