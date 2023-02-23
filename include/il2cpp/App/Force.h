#pragma once

#include "il2cpp.h"

App_Force_o* App_Force__Get (int32_t type, const MethodInfo* method);
App_Unit_o* App_Force__GetUnitFromEmpty (const MethodInfo* method);
UnityEngine_Color_o App_Force__GetColor (int32_t type, const MethodInfo* method);
System_String_o* App_Force__GetName (int32_t type, const MethodInfo* method);
void App_Force__Initialize (App_Force_o* __this, int32_t type, const MethodInfo* method);
void App_Force__JoinFirst (App_Force_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_Force__JoinLast (App_Force_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_Force__Insert (App_Force_o* __this, App_Unit_o* insUnit, App_Unit_o* prevUnit, const MethodInfo* method);
void App_Force__Remove (App_Force_o* __this, App_Unit_o* unit, const MethodInfo* method);
void App_Force__Transfer (App_Force_o* __this, int32_t type, bool isLast, const MethodInfo* method);
void App_Force__TransferForSortie (App_Force_o* __this, int32_t type, bool isLast, const MethodInfo* method);
bool App_Force__IsAllied (App_Force_o* __this, int32_t type, const MethodInfo* method);
int32_t App_Force__GetCount (App_Force_o* __this, const MethodInfo* method);
int32_t App_Force__GetIndex (App_Force_o* __this, App_Unit_o* target, const MethodInfo* method);
App_Unit_o* App_Force__GetHeroUnit (App_Force_o* __this, const MethodInfo* method);
App_Unit_o* App_Force__GetUnitFromPerson (App_Force_o* __this, App_PersonData_o* person, const MethodInfo* method);
App_Unit_o* App_Force__GetUnitFromPerson (App_Force_o* __this, System_String_o* pid, const MethodInfo* method);
App_Unit_o* App_Force__GetUnitFromFace (App_Force_o* __this, App_PersonData_o* person, bool considerRelay, const MethodInfo* method);
App_Unit_o* App_Force__get_First (App_Force_o* __this, const MethodInfo* method);
void App_Force__set_First (App_Force_o* __this, App_Unit_o* value, const MethodInfo* method);
App_Unit_o* App_Force__get_Last (App_Force_o* __this, const MethodInfo* method);
void App_Force__set_Last (App_Force_o* __this, App_Unit_o* value, const MethodInfo* method);
int32_t App_Force__get_ForceType (App_Force_o* __this, const MethodInfo* method);
uint32_t App_Force__get_ForceMask (App_Force_o* __this, const MethodInfo* method);
uint32_t App_Force__GetMask (int32_t type, const MethodInfo* method);
uint32_t App_Force__GetMask (int32_t type1, int32_t type2, const MethodInfo* method);
uint32_t App_Force__GetMask (int32_t type1, int32_t type2, int32_t type3, const MethodInfo* method);
uint32_t App_Force__GetMask (int32_t type1, int32_t type2, int32_t type3, int32_t type4, const MethodInfo* method);
uint32_t App_Force__GetMaskOnUsed (const MethodInfo* method);
uint32_t App_Force__GetMaskOnMap (const MethodInfo* method);
uint32_t App_Force__GetMaskOnSortie (const MethodInfo* method);
uint32_t App_Force__GetMaskOnChapterSave (const MethodInfo* method);
uint32_t App_Force__GetMaskSameForce (int32_t type, const MethodInfo* method);
bool App_Force__IsPlayer (int32_t type, const MethodInfo* method);
bool App_Force__IsOnMap (int32_t type, const MethodInfo* method);
bool App_Force__IsOnMap (App_Unit_o* unit, const MethodInfo* method);
void App_Force___ctor (App_Force_o* __this, const MethodInfo* method);
