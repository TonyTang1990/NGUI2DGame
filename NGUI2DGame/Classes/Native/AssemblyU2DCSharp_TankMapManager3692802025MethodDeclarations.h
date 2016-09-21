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

// TankMapManager
struct TankMapManager_t3692802025;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// TankMap
struct TankMap_t1120032466;
// MapEditor
struct MapEditor_t1120091431;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_MapEditor1120091431.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_String2029220233.h"

// System.Void TankMapManager::.ctor()
extern "C"  void TankMapManager__ctor_m3761019032 (TankMapManager_t3692802025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject TankMapManager::get_MapContainer()
extern "C"  GameObject_t1756533147 * TankMapManager_get_MapContainer_m2460322545 (TankMapManager_t3692802025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMapManager::set_MapContainer(UnityEngine.GameObject)
extern "C"  void TankMapManager_set_MapContainer_m2643543988 (TankMapManager_t3692802025 * __this, GameObject_t1756533147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TankMap TankMapManager::get_CurrentMap()
extern "C"  TankMap_t1120032466 * TankMapManager_get_CurrentMap_m3658240791 (TankMapManager_t3692802025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MapEditor TankMapManager::get_CurrentMapEditor()
extern "C"  MapEditor_t1120091431 * TankMapManager_get_CurrentMapEditor_m791254219 (TankMapManager_t3692802025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMapManager::set_CurrentMapEditor(MapEditor)
extern "C"  void TankMapManager_set_CurrentMapEditor_m2054754258 (TankMapManager_t3692802025 * __this, MapEditor_t1120091431 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TankMapManager::ConvertPositionToRC(UnityEngine.Vector3,UnityEngine.Vector2&)
extern "C"  bool TankMapManager_ConvertPositionToRC_m3969556063 (TankMapManager_t3692802025 * __this, Vector3_t2243707580  ___position0, Vector2_t2243707579 * ___rc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TankMapManager::ConvertRCToPosition(UnityEngine.Vector2,UnityEngine.Vector3&)
extern "C"  bool TankMapManager_ConvertRCToPosition_m3709476895 (TankMapManager_t3692802025 * __this, Vector2_t2243707579  ___rc0, Vector3_t2243707580 * ___position1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMapManager::Awake()
extern "C"  void TankMapManager_Awake_m1349445605 (TankMapManager_t3692802025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMapManager::Start()
extern "C"  void TankMapManager_Start_m1270690728 (TankMapManager_t3692802025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMapManager::SaveMap(System.String)
extern "C"  void TankMapManager_SaveMap_m3006956507 (TankMapManager_t3692802025 * __this, String_t* ___mapname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TankMapManager::LoadMap(System.String)
extern "C"  bool TankMapManager_LoadMap_m1202517434 (TankMapManager_t3692802025 * __this, String_t* ___mapname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TankMapManager::ClearMap(System.String)
extern "C"  bool TankMapManager_ClearMap_m1819520907 (TankMapManager_t3692802025 * __this, String_t* ___mapname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMapManager::MapLoadSetup()
extern "C"  void TankMapManager_MapLoadSetup_m3199658021 (TankMapManager_t3692802025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TankMapManager::Update()
extern "C"  void TankMapManager_Update_m2655608177 (TankMapManager_t3692802025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
