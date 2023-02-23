#pragma once

#include "il2cpp.h"

void App_MapEditHistory__OnCreate (App_MapEditHistory_o* __this, const MethodInfo* method);
void App_MapEditHistory__OnDispose (App_MapEditHistory_o* __this, const MethodInfo* method);
bool App_MapEditHistory__Undo (App_MapEditHistory_o* __this, const MethodInfo* method);
void App_MapEditHistory__Redo (App_MapEditHistory_o* __this, const MethodInfo* method);
void App_MapEditHistory__Clear (App_MapEditHistory_o* __this, const MethodInfo* method);
void App_MapEditHistory__AddCreateObject (App_MapEditHistory_o* __this, int32_t x, int32_t z, System_String_o* objectName, const MethodInfo* method);
void App_MapEditHistory__AddDeleteObject (App_MapEditHistory_o* __this, int32_t x, int32_t z, System_String_o* deleteObjectName, int32_t rotate, const MethodInfo* method);
void App_MapEditHistory__AddReplaceObject (App_MapEditHistory_o* __this, int32_t x, int32_t z, int32_t deleteRotate, System_String_o* deleteObjName, System_String_o* createObjName, const MethodInfo* method);
void App_MapEditHistory__AddRotateObject (App_MapEditHistory_o* __this, int32_t x, int32_t z, int32_t prevRotate, int32_t nextRotate, const MethodInfo* method);
void App_MapEditHistory__AddCommand (App_MapEditHistory_o* __this, App_MapEditHistory_MapEditCommand_o* command, const MethodInfo* method);
void App_MapEditHistory__ListAddImpl (App_MapEditHistory_o* __this, App_MapEditHistory_MapEditCommand_o* command, const MethodInfo* method);
void App_MapEditHistory__ListRemoveAtImpl (App_MapEditHistory_o* __this, int32_t index, const MethodInfo* method);
void App_MapEditHistory__Dump (App_MapEditHistory_o* __this, const MethodInfo* method);
void App_MapEditHistory___ctor (App_MapEditHistory_o* __this, const MethodInfo* method);
