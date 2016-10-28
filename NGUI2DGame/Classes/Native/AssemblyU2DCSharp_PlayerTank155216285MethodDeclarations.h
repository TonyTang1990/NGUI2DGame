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

// PlayerTank
struct PlayerTank_t155216285;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void PlayerTank::.ctor()
extern "C"  void PlayerTank__ctor_m2195027908 (PlayerTank_t155216285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerTank::Awake()
extern "C"  void PlayerTank_Awake_m2826192185 (PlayerTank_t155216285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerTank::Start()
extern "C"  void PlayerTank_Start_m747621468 (PlayerTank_t155216285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerTank::OnDestroy()
extern "C"  void PlayerTank_OnDestroy_m2404851883 (PlayerTank_t155216285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerTank::CanMoveForward()
extern "C"  bool PlayerTank_CanMoveForward_m1869593364 (PlayerTank_t155216285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerTank::KeepMoveUp(UnityEngine.GameObject,System.Boolean)
extern "C"  void PlayerTank_KeepMoveUp_m2835207764 (PlayerTank_t155216285 * __this, GameObject_t1756533147 * ___go0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerTank::KeepMoveDown(UnityEngine.GameObject,System.Boolean)
extern "C"  void PlayerTank_KeepMoveDown_m1769796715 (PlayerTank_t155216285 * __this, GameObject_t1756533147 * ___go0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerTank::KeepMoveLeft(UnityEngine.GameObject,System.Boolean)
extern "C"  void PlayerTank_KeepMoveLeft_m3595834356 (PlayerTank_t155216285 * __this, GameObject_t1756533147 * ___go0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerTank::KeepMoveRight(UnityEngine.GameObject,System.Boolean)
extern "C"  void PlayerTank_KeepMoveRight_m1033982049 (PlayerTank_t155216285 * __this, GameObject_t1756533147 * ___go0, bool ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerTank::KeepMoveCoroutine()
extern "C"  Il2CppObject * PlayerTank_KeepMoveCoroutine_m3360348034 (PlayerTank_t155216285 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerTank::ShootClick(UnityEngine.GameObject)
extern "C"  void PlayerTank_ShootClick_m1688059429 (PlayerTank_t155216285 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
