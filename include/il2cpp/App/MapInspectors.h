#pragma once

#include "il2cpp.h"

System_Collections_Generic_List_MapInspector__o* App_MapInspectors__get_Inspectors (const MethodInfo* method);
System_Collections_Generic_List_MapInspector__o* App_MapInspectors__GetKindInspectors (int32_t kind, const MethodInfo* method);
void App_MapInspectors___ctor (App_MapInspectors_o* __this, const MethodInfo* method);
void App_MapInspectors__ClearImpl (App_MapInspectors_o* __this, const MethodInfo* method);
void App_MapInspectors__AddImpl (App_MapInspectors_o* __this, App_MapInspector_o* inspector, const MethodInfo* method);
App_MapInspector_o* App_MapInspectors__Add (App_MapInspector_o* inspector, const MethodInfo* method);
void App_MapInspectors__Clear (const MethodInfo* method);
System_Collections_Generic_Stack_MapInspector__o* App_MapInspectors__GetEnableInspectors (int32_t kind, App_Unit_o* unit, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const MethodInfo* method);
App_MapInspector_o* App_MapInspectors__GetEnableInspector (int32_t kind, App_Unit_o* unit, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, const MethodInfo* method);
App_PokeInspector_o* App_MapInspectors__GetPokeInspector (int32_t x, int32_t z, const MethodInfo* method);
App_PokeInspector_o* App_MapInspectors__GetPokeInspector (int32_t kind, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapInspectors__IsEnable (int32_t kind, int32_t x, int32_t z, const MethodInfo* method);
bool App_MapInspectors__IsEnable (int32_t kind, App_Unit_o* unit, const MethodInfo* method);
bool App_MapInspectors__IsEnable (int32_t kind, int32_t x, int32_t z, App_Unit_o* unit, const MethodInfo* method);
bool App_MapInspectors__IsEnable (int32_t kind, App_Unit_o* from, App_Unit_o* to, const MethodInfo* method);
App_PokeInspector_o* App_MapInspectors__FindBreakable (int32_t x, int32_t z, const MethodInfo* method);
bool App_MapInspectors__IsBreakable (int32_t x, int32_t z, const MethodInfo* method);
App_CannonInspector_o* App_MapInspectors__FindCannon (int32_t x, int32_t z, const MethodInfo* method);
App_DestroyInspector_o* App_MapInspectors__TryCreateInspector_DestroyInspector_ (int32_t x, int32_t z, int32_t w, int32_t h, const MethodInfo_299C180* method);
App_DoorInspector_o* App_MapInspectors__TryCreateInspector_DoorInspector_ (int32_t x, int32_t z, int32_t w, int32_t h, const MethodInfo_299C180* method);
App_HelpSpotInspector_o* App_MapInspectors__TryCreateInspector_HelpSpotInspector_ (int32_t x, int32_t z, int32_t w, int32_t h, const MethodInfo_299C180* method);
Il2CppObject* App_MapInspectors__TryCreateInspector_object_ (int32_t x, int32_t z, int32_t w, int32_t h, const MethodInfo_299C180* method);
App_TboxInspector_o* App_MapInspectors__TryCreateInspector_TboxInspector_ (int32_t x, int32_t z, int32_t w, int32_t h, const MethodInfo_299C180* method);
App_TorchInspector_o* App_MapInspectors__TryCreateInspector_TorchInspector_ (int32_t x, int32_t z, int32_t w, int32_t h, const MethodInfo_299C180* method);
App_VisitInspector_o* App_MapInspectors__TryCreateInspector_VisitInspector_ (int32_t x, int32_t z, int32_t w, int32_t h, const MethodInfo_299C180* method);
App_CannonInspector_o* App_MapInspectors__TryCreateCannonInspector (int32_t x, int32_t z, int32_t maxShells, const MethodInfo* method);
void App_MapInspectors__CalcLayerSize (int32_t* x, int32_t* z, int32_t* w, int32_t* h, const MethodInfo* method);
void App_MapInspectors__Regist (const MethodInfo* method);
int32_t App_MapInspectors__get_Version (App_MapInspectors_o* __this, const MethodInfo* method);
void App_MapInspectors__OnSerialize (App_MapInspectors_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_MapInspectors__OnDeserialize (App_MapInspectors_o* __this, App_Stream_o* stream, int32_t version, const MethodInfo* method);
void App_MapInspectors___cctor (const MethodInfo* method);
