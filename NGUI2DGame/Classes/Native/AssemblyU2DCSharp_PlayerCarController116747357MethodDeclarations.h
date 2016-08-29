#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayerCarController
struct PlayerCarController_t116747357;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void PlayerCarController::.ctor()
extern "C"  void PlayerCarController__ctor_m3941186136 (PlayerCarController_t116747357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::Awake()
extern "C"  void PlayerCarController_Awake_m2021496921 (PlayerCarController_t116747357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::Start()
extern "C"  void PlayerCarController_Start_m3079385016 (PlayerCarController_t116747357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::Update()
extern "C"  void PlayerCarController_Update_m484703677 (PlayerCarController_t116747357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::MoveRight(UnityEngine.GameObject)
extern "C"  void PlayerCarController_MoveRight_m2971198157 (PlayerCarController_t116747357 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::MoveLeft(UnityEngine.GameObject)
extern "C"  void PlayerCarController_MoveLeft_m3565104488 (PlayerCarController_t116747357 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::MoveUp(UnityEngine.GameObject)
extern "C"  void PlayerCarController_MoveUp_m2824957612 (PlayerCarController_t116747357 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::KeepMoveUp(UnityEngine.GameObject,System.Boolean)
extern "C"  void PlayerCarController_KeepMoveUp_m1331347744 (PlayerCarController_t116747357 * __this, GameObject_t1756533147 * ___go0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerCarController::MoveUpCoroutine()
extern "C"  Il2CppObject * PlayerCarController_MoveUpCoroutine_m2693190894 (PlayerCarController_t116747357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::MoveDown(UnityEngine.GameObject)
extern "C"  void PlayerCarController_MoveDown_m254707483 (PlayerCarController_t116747357 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::KeepMoveDown(UnityEngine.GameObject,System.Boolean)
extern "C"  void PlayerCarController_KeepMoveDown_m1247487731 (PlayerCarController_t116747357 * __this, GameObject_t1756533147 * ___go0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerCarController::MoveDownCoroutine()
extern "C"  Il2CppObject * PlayerCarController_MoveDownCoroutine_m3523165399 (PlayerCarController_t116747357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::Jump(UnityEngine.GameObject)
extern "C"  void PlayerCarController_Jump_m3808470432 (PlayerCarController_t116747357 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::CrashCallBack()
extern "C"  void PlayerCarController_CrashCallBack_m3159760084 (PlayerCarController_t116747357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerCarController_OnTriggerEnter2D_m3876316192 (PlayerCarController_t116747357 * __this, Collider2D_t646061738 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCarController::OnTweenComplete()
extern "C"  void PlayerCarController_OnTweenComplete_m3857909345 (PlayerCarController_t116747357 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
