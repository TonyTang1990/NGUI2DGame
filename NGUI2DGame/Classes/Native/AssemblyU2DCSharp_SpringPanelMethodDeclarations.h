#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SpringPanel
struct SpringPanel_t168;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void SpringPanel::.ctor()
extern "C" void SpringPanel__ctor_m594 (SpringPanel_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::Start()
extern "C" void SpringPanel_Start_m595 (SpringPanel_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpringPanel::Update()
extern "C" void SpringPanel_Update_m596 (SpringPanel_t168 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SpringPanel SpringPanel::Begin(UnityEngine.GameObject,UnityEngine.Vector3,System.Single)
extern "C" SpringPanel_t168 * SpringPanel_Begin_m597 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, Vector3_t48  ___pos, float ___strength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
