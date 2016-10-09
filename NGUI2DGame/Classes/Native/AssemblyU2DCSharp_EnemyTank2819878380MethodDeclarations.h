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

// EnemyTank
struct EnemyTank_t2819878380;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MoveAction868615717.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void EnemyTank::.ctor()
extern "C"  void EnemyTank__ctor_m2369350097 (EnemyTank_t2819878380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyTank::Awake()
extern "C"  void EnemyTank_Awake_m3252339256 (EnemyTank_t2819878380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyTank::Start()
extern "C"  void EnemyTank_Start_m3107023537 (EnemyTank_t2819878380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyTank::Update()
extern "C"  void EnemyTank_Update_m69816086 (EnemyTank_t2819878380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyTank::OnDestroy()
extern "C"  void EnemyTank_OnDestroy_m1198924850 (EnemyTank_t2819878380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EnemyTank::CanMoveForward()
extern "C"  bool EnemyTank_CanMoveForward_m2644624451 (EnemyTank_t2819878380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MoveAction EnemyTank::RandomChangeMoveAction()
extern "C"  int32_t EnemyTank_RandomChangeMoveAction_m2783081615 (EnemyTank_t2819878380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyTank::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void EnemyTank_OnTriggerEnter2D_m1821377321 (EnemyTank_t2819878380 * __this, Collider2D_t646061738 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnemyTank::MoveCoroutine()
extern "C"  Il2CppObject * EnemyTank_MoveCoroutine_m2447926902 (EnemyTank_t2819878380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EnemyTank::ShootCoroutine()
extern "C"  Il2CppObject * EnemyTank_ShootCoroutine_m3828524524 (EnemyTank_t2819878380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
