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

// Game
struct Game_t1600141214;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_GameMode1861898983.h"

// System.Void Game::.ctor()
extern "C"  void Game__ctor_m1512360653 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::PauseGame()
extern "C"  void Game_PauseGame_m1309253533 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::ResumeGame()
extern "C"  void Game_ResumeGame_m3939228312 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Game::IsGameOver()
extern "C"  bool Game_IsGameOver_m454619747 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::GameOver()
extern "C"  void Game_GameOver_m1293948253 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::UpdateLeftMouseClickEvent(UnityEngine.Vector3)
extern "C"  void Game_UpdateLeftMouseClickEvent_m3208658201 (Game_t1600141214 * __this, Vector3_t2243707580  ___mouseposition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::UpdateOneFingerTouchEvent(UnityEngine.Vector2)
extern "C"  void Game_UpdateOneFingerTouchEvent_m1831890554 (Game_t1600141214 * __this, Vector2_t2243707579  ___screentouchposition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::SavePlayerData()
extern "C"  void Game_SavePlayerData_m2051946443 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::LoadPlayerData()
extern "C"  void Game_LoadPlayerData_m4266154824 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::Start()
extern "C"  void Game_Start_m3679318685 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::Update()
extern "C"  void Game_Update_m3455215516 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameMode Game::get_CurrentGameMode()
extern "C"  int32_t Game_get_CurrentGameMode_m4229502770 (Game_t1600141214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Game::set_CurrentGameMode(GameMode)
extern "C"  void Game_set_CurrentGameMode_m3029955401 (Game_t1600141214 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
