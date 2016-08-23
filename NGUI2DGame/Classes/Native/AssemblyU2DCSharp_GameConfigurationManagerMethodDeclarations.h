#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameConfigurationManager
struct GameConfigurationManager_t272;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GameConfigurationManager/Account>
struct List_1_t273;
// GameConfigurationManager/GameSettings
struct GameSettings_t271;
// System.Data.DataTable
struct DataTable_t296;

// System.Void GameConfigurationManager::.ctor()
extern "C" void GameConfigurationManager__ctor_m1163 (GameConfigurationManager_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::.cctor()
extern "C" void GameConfigurationManager__cctor_m1164 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::set_ConfigurationPath(System.String)
extern "C" void GameConfigurationManager_set_ConfigurationPath_m1165 (GameConfigurationManager_t272 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GameConfigurationManager/Account> GameConfigurationManager::get_ValideAccountList()
extern "C" List_1_t273 * GameConfigurationManager_get_ValideAccountList_m1166 (GameConfigurationManager_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameConfigurationManager::getValideAccountNumber()
extern "C" int32_t GameConfigurationManager_getValideAccountNumber_m1167 (GameConfigurationManager_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameConfigurationManager/GameSettings GameConfigurationManager::get_InGameSettings()
extern "C" GameSettings_t271 * GameConfigurationManager_get_InGameSettings_m1168 (GameConfigurationManager_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::set_InGameSettings(GameConfigurationManager/GameSettings)
extern "C" void GameConfigurationManager_set_InGameSettings_m1169 (GameConfigurationManager_t272 * __this, GameSettings_t271 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::Init()
extern "C" void GameConfigurationManager_Init_m1170 (GameConfigurationManager_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::ReadConfiguration()
extern "C" void GameConfigurationManager_ReadConfiguration_m1171 (GameConfigurationManager_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::ReadAccountInfo(System.Data.DataTable)
extern "C" void GameConfigurationManager_ReadAccountInfo_m1172 (GameConfigurationManager_t272 * __this, DataTable_t296 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::ReadGameSetting()
extern "C" void GameConfigurationManager_ReadGameSetting_m1173 (GameConfigurationManager_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager::SaveGameSettings()
extern "C" void GameConfigurationManager_SaveGameSettings_m1174 (GameConfigurationManager_t272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
