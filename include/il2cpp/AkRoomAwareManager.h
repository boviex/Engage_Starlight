#pragma once

#include "il2cpp.h"

void AkRoomAwareManager__RegisterRoomAwareObject (AkRoomAwareObject_o* roomAwareObject, const MethodInfo* method);
void AkRoomAwareManager__UnregisterRoomAwareObject (AkRoomAwareObject_o* roomAwareObject, const MethodInfo* method);
void AkRoomAwareManager__RegisterRoomAwareObjectForUpdate (AkRoomAwareObject_o* roomAwareObject, const MethodInfo* method);
void AkRoomAwareManager__ObjectEnteredRoom (UnityEngine_Collider_o* collider, AkRoom_o* room, const MethodInfo* method);
void AkRoomAwareManager__ObjectEnteredRoom (AkRoomAwareObject_o* roomAwareObject, AkRoom_o* room, const MethodInfo* method);
void AkRoomAwareManager__ObjectExitedRoom (UnityEngine_Collider_o* collider, AkRoom_o* room, const MethodInfo* method);
void AkRoomAwareManager__ObjectExitedRoom (AkRoomAwareObject_o* roomAwareObject, AkRoom_o* room, const MethodInfo* method);
void AkRoomAwareManager__UpdateRoomAwareObjects (const MethodInfo* method);
void AkRoomAwareManager___cctor (const MethodInfo* method);
