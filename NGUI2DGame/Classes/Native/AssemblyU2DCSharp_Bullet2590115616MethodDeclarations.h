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

// Bullet
struct Bullet_t2590115616;
// Tank
struct Tank_t2050480468;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_MoveAction868615717.h"
#include "AssemblyU2DCSharp_Tank2050480468.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void Bullet::.ctor()
extern "C"  void Bullet__ctor_m2895089121 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::set_MoveDir(UnityEngine.Vector3)
extern "C"  void Bullet_set_MoveDir_m2632362119 (Bullet_t2590115616 * __this, Vector3_t2243707580  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MoveAction Bullet::get_BulletMoveAction()
extern "C"  int32_t Bullet_get_BulletMoveAction_m4191045889 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Tank Bullet::get_Owner()
extern "C"  Tank_t2050480468 * Bullet_get_Owner_m2655960690 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::set_Owner(Tank)
extern "C"  void Bullet_set_Owner_m3778620813 (Bullet_t2590115616 * __this, Tank_t2050480468 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::set_OwnerTag(System.String)
extern "C"  void Bullet_set_OwnerTag_m1128187073 (Bullet_t2590115616 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Bullet::get_OwnerTag()
extern "C"  String_t* Bullet_get_OwnerTag_m864142102 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Awake()
extern "C"  void Bullet_Awake_m3526188380 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Start()
extern "C"  void Bullet_Start_m1447617473 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Bullet::Move()
extern "C"  Il2CppObject * Bullet_Move_m541877174 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Update()
extern "C"  void Bullet_Update_m524047786 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Explosion()
extern "C"  void Bullet_Explosion_m3810804328 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::DestroyItself()
extern "C"  void Bullet_DestroyItself_m3418201334 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnDestroy()
extern "C"  void Bullet_OnDestroy_m568632134 (Bullet_t2590115616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Bullet_OnTriggerEnter2D_m2179826729 (Bullet_t2590115616 * __this, Collider2D_t646061738 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
