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

// SnakeManager
struct SnakeManager_t2989862063;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void SnakeManager::.ctor()
extern "C"  void SnakeManager__ctor_m907049390 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::SavePlayerData()
extern "C"  void SnakeManager_SavePlayerData_m425722112 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::LoadPlayerData()
extern "C"  void SnakeManager_LoadPlayerData_m2050202643 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::UpdateLeftMouseClickEvent(UnityEngine.Vector3)
extern "C"  void SnakeManager_UpdateLeftMouseClickEvent_m1131655838 (SnakeManager_t2989862063 * __this, Vector3_t2243707580  ___mouseposition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::UpdateOneFingerTouchEvent(UnityEngine.Vector2)
extern "C"  void SnakeManager_UpdateOneFingerTouchEvent_m65132475 (SnakeManager_t2989862063 * __this, Vector2_t2243707579  ___screentouchposition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::Awake()
extern "C"  void SnakeManager_Awake_m275528123 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::Start()
extern "C"  void SnakeManager_Start_m1020846234 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::Update()
extern "C"  void SnakeManager_Update_m2217374967 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::GameOver()
extern "C"  void SnakeManager_GameOver_m281237456 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::SpawnSnakeHead()
extern "C"  void SnakeManager_SpawnSnakeHead_m3861690187 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SnakeManager::SnakeMove()
extern "C"  Il2CppObject * SnakeManager_SnakeMove_m1943657587 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::AddSnakeDotAtEnd()
extern "C"  void SnakeManager_AddSnakeDotAtEnd_m3032207622 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SnakeManager::SpawnSnakeFood()
extern "C"  void SnakeManager_SpawnSnakeFood_m2921307113 (SnakeManager_t2989862063 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
