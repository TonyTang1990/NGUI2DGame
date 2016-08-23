#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameConfigurationManager/GameSettings
struct GameSettings_t271;
// GameConfigurationManager/GameSettings/SoundSetting
struct SoundSetting_t270;
// GameConfigurationManager/GameSettings/GameDifficulty
#include "AssemblyU2DCSharp_GameConfigurationManager_GameSettings_Game.h"

// System.Void GameConfigurationManager/GameSettings::.ctor()
extern "C" void GameSettings__ctor_m1157 (GameSettings_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager/GameSettings::LogOutGameSettings()
extern "C" void GameSettings_LogOutGameSettings_m1158 (GameSettings_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameConfigurationManager/GameSettings/GameDifficulty GameConfigurationManager/GameSettings::get_InGameDifficulty()
extern "C" int32_t GameSettings_get_InGameDifficulty_m1159 (GameSettings_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager/GameSettings::set_InGameDifficulty(GameConfigurationManager/GameSettings/GameDifficulty)
extern "C" void GameSettings_set_InGameDifficulty_m1160 (GameSettings_t271 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameConfigurationManager/GameSettings/SoundSetting GameConfigurationManager/GameSettings::get_InGameSoundSetting()
extern "C" SoundSetting_t270 * GameSettings_get_InGameSoundSetting_m1161 (GameSettings_t271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameConfigurationManager/GameSettings::set_InGameSoundSetting(GameConfigurationManager/GameSettings/SoundSetting)
extern "C" void GameSettings_set_InGameSoundSetting_m1162 (GameSettings_t271 * __this, SoundSetting_t270 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
