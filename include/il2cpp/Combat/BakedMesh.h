#pragma once

#include "il2cpp.h"

Combat_BakedMesh_o* Combat_BakedMesh__Create (UnityEngine_Transform_o* parent, const MethodInfo* method);
UnityEngine_MeshFilter_o* Combat_BakedMesh__get_meshFilter (Combat_BakedMesh_o* __this, const MethodInfo* method);
UnityEngine_MeshRenderer_o* Combat_BakedMesh__get_meshRenderer (Combat_BakedMesh_o* __this, const MethodInfo* method);
void Combat_BakedMesh__OnDestroy (Combat_BakedMesh_o* __this, const MethodInfo* method);
void Combat_BakedMesh__BakeFrom (Combat_BakedMesh_o* __this, UnityEngine_SkinnedMeshRenderer_o* skmesh, bool omit2nd, const MethodInfo* method);
void Combat_BakedMesh__BakeFrom (Combat_BakedMesh_o* __this, UnityEngine_MeshFilter_o* filter, UnityEngine_MeshRenderer_o* renderer, const MethodInfo* method);
void Combat_BakedMesh___ctor (Combat_BakedMesh_o* __this, const MethodInfo* method);
