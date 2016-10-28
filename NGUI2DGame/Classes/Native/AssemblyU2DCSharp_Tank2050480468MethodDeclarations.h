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

// Tank
struct Tank_t2050480468;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MoveAction868615717.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void Tank::.ctor()
extern "C"  void Tank__ctor_m750150259 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::set_MoveSpeed(System.Single)
extern "C"  void Tank_set_MoveSpeed_m3985201005 (Tank_t2050480468 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::set_CurrentMoveAction(MoveAction)
extern "C"  void Tank_set_CurrentMoveAction_m3521750979 (Tank_t2050480468 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::InitMovingIndexsOffset()
extern "C"  void Tank_InitMovingIndexsOffset_m211406749 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::InitOccupiedInfo()
extern "C"  void Tank_InitOccupiedInfo_m3183291521 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::UpdateOccupiedInfo()
extern "C"  void Tank_UpdateOccupiedInfo_m3660004542 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::Awake()
extern "C"  void Tank_Awake_m3158931696 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::Start()
extern "C"  void Tank_Start_m1332170943 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::OnDestroy()
extern "C"  void Tank_OnDestroy_m4042988626 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::RecoverTankOccupiedTile()
extern "C"  void Tank_RecoverTankOccupiedTile_m2660540363 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Tank::CanMoveForward()
extern "C"  bool Tank_CanMoveForward_m362955925 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::MoveForward()
extern "C"  void Tank_MoveForward_m327062121 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Tank::MovingCoroutine()
extern "C"  Il2CppObject * Tank_MovingCoroutine_m2540777759 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Tank_OnTriggerEnter2D_m340608615 (Tank_t2050480468 * __this, Collider2D_t646061738 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::Shoot()
extern "C"  void Tank_Shoot_m1374073324 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::TakeDamage(System.Single)
extern "C"  void Tank_TakeDamage_m3119853146 (Tank_t2050480468 * __this, float ___damage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::DestroyTankDelay()
extern "C"  void Tank_DestroyTankDelay_m3636233030 (Tank_t2050480468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tank::BulletDestroyDelegate(UnityEngine.GameObject)
extern "C"  void Tank_BulletDestroyDelegate_m1148978620 (Tank_t2050480468 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
