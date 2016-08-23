#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpringPosition
struct SpringPosition_t194;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void SpringPosition::.ctor()
extern "C" void SpringPosition__ctor_m725 (SpringPosition_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Start()
extern "C" void SpringPosition_Start_m726 (SpringPosition_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPosition::Update()
extern "C" void SpringPosition_Update_m727 (SpringPosition_t194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringPosition SpringPosition::Begin(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" SpringPosition_t194 * SpringPosition_Begin_m728 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, Vector3_t48  ___pos, float ___strength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
