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

// CarDodgeGame
struct CarDodgeGame_t1650312537;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void CarDodgeGame::.ctor()
extern "C"  void CarDodgeGame__ctor_m3991645306 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CarDodgeGame::get_CurrentScore()
extern "C"  int32_t CarDodgeGame_get_CurrentScore_m2987445214 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CarDodgeGame::set_CurrentScore(System.Int32)
extern "C"  void CarDodgeGame_set_CurrentScore_m3706424917 (CarDodgeGame_t1650312537 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CarDodgeGame::get_GameLevel()
extern "C"  int32_t CarDodgeGame_get_GameLevel_m2225809063 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CarDodgeGame::set_GameLevel(System.Int32)
extern "C"  void CarDodgeGame_set_GameLevel_m439010188 (CarDodgeGame_t1650312537 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CarDodgeGame::Awake()
extern "C"  void CarDodgeGame_Awake_m2106247909 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CarDodgeGame::UpdateGameInfo()
extern "C"  void CarDodgeGame_UpdateGameInfo_m818519589 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CarDodgeGame::Start()
extern "C"  void CarDodgeGame_Start_m3638727482 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CarDodgeGame::Update()
extern "C"  void CarDodgeGame_Update_m3189749945 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CarDodgeGame::GameOver()
extern "C"  void CarDodgeGame_GameOver_m1088582128 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CarDodgeGame::SpawnCoroutine()
extern "C"  Il2CppObject * CarDodgeGame_SpawnCoroutine_m358620679 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CarDodgeGame::SpawnEnemyCar()
extern "C"  void CarDodgeGame_SpawnEnemyCar_m3242250389 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CarDodgeGame::ChooseRoadToSpawn(UnityEngine.GameObject)
extern "C"  int32_t CarDodgeGame_ChooseRoadToSpawn_m390485783 (CarDodgeGame_t1650312537 * __this, GameObject_t1756533147 * ___car0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CarDodgeGame::ChooseCarToSpawn()
extern "C"  GameObject_t1756533147 * CarDodgeGame_ChooseCarToSpawn_m4049764086 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CarDodgeGame::SpawnNormalCar()
extern "C"  GameObject_t1756533147 * CarDodgeGame_SpawnNormalCar_m3874395735 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CarDodgeGame::SpawnTruckCar()
extern "C"  GameObject_t1756533147 * CarDodgeGame_SpawnTruckCar_m37508511 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject CarDodgeGame::SpawnFastCar()
extern "C"  GameObject_t1756533147 * CarDodgeGame_SpawnFastCar_m2911604860 (CarDodgeGame_t1650312537 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
