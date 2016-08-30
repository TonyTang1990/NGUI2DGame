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

// GameConfigurationManager
struct GameConfigurationManager_t1548987031;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GameConfigurationManager/Account>
struct List_1_t2431734405;
// GameConfigurationManager/GameSettings
struct GameSettings_t213610147;
// System.Data.DataTable
struct DataTable_t3267612424;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_GameConfigurationManager_GameSett213610147.h"
#include "System_Data_System_Data_DataTable3267612424.h"

// System.Void GameConfigurationManager::.ctor()
extern "C"  void GameConfigurationManager__ctor_m945031690 (GameConfigurationManager_t1548987031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::.cctor()
extern "C"  void GameConfigurationManager__cctor_m4058450217 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::set_ConfigurationPath(System.String)
extern "C"  void GameConfigurationManager_set_ConfigurationPath_m1043148946 (GameConfigurationManager_t1548987031 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GameConfigurationManager/Account> GameConfigurationManager::get_ValideAccountList()
extern "C"  List_1_t2431734405 * GameConfigurationManager_get_ValideAccountList_m2719772273 (GameConfigurationManager_t1548987031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameConfigurationManager::getValideAccountNumber()
extern "C"  int32_t GameConfigurationManager_getValideAccountNumber_m3002104731 (GameConfigurationManager_t1548987031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameConfigurationManager/GameSettings GameConfigurationManager::get_InGameSettings()
extern "C"  GameSettings_t213610147 * GameConfigurationManager_get_InGameSettings_m1773262621 (GameConfigurationManager_t1548987031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::set_InGameSettings(GameConfigurationManager/GameSettings)
extern "C"  void GameConfigurationManager_set_InGameSettings_m2082188740 (GameConfigurationManager_t1548987031 * __this, GameSettings_t213610147 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::Init()
extern "C"  void GameConfigurationManager_Init_m472125798 (GameConfigurationManager_t1548987031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::ReadConfiguration()
extern "C"  void GameConfigurationManager_ReadConfiguration_m2238328344 (GameConfigurationManager_t1548987031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::ReadAccountInfo(System.Data.DataTable)
extern "C"  void GameConfigurationManager_ReadAccountInfo_m320921492 (GameConfigurationManager_t1548987031 * __this, DataTable_t3267612424 * ___dt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::ReadGameSetting()
extern "C"  void GameConfigurationManager_ReadGameSetting_m1228648688 (GameConfigurationManager_t1548987031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::ApplyGameSettings()
extern "C"  void GameConfigurationManager_ApplyGameSettings_m952506225 (GameConfigurationManager_t1548987031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
