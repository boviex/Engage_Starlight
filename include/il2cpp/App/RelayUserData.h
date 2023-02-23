#pragma once

#include "il2cpp.h"

void App_RelayUserData___ctor (App_RelayUserData_o* __this, const MethodInfo* method);
void App_RelayUserData___ctor (App_RelayUserData_o* __this, App_RelayUserData_o* from, const MethodInfo* method);
void App_RelayUserData__AddEnteredBattle (App_RelayUserData_o* __this, App_RelayUserData_EnteredBattle_o* newBattle, const MethodInfo* method);
void App_RelayUserData__AddEnteredBattleImpl (App_RelayUserData_o* __this, App_RelayUserData_EnteredBattle_o* newBattle, const MethodInfo* method);
App_RelayUserData_EnteredBattle_o* App_RelayUserData__GetEnteredBattle (App_RelayUserData_o* __this, uint64_t dataId, const MethodInfo* method);
void App_RelayUserData__Clear (App_RelayUserData_o* __this, const MethodInfo* method);
void App_RelayUserData__Serialize (App_RelayUserData_o* __this, App_Stream_o* stream, const MethodInfo* method);
void App_RelayUserData__Deserialize (App_RelayUserData_o* __this, App_Stream_o* stream, const MethodInfo* method);
System_Collections_Generic_List_RelayUserData_EnteredBattle__o* App_RelayUserData__get_EnteredBattles (App_RelayUserData_o* __this, const MethodInfo* method);
void App_RelayUserData__DbgDump (App_RelayUserData_o* __this, const MethodInfo* method);
