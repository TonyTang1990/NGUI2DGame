#pragma once
#include <stdint.h>
// GameConfigurationManager
struct GameConfigurationManager_t272;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GameConfigurationManager/Account>
struct List_1_t273;
// GameConfigurationManager/GameSettings
struct GameSettings_t271;
// System.Object
#include "mscorlib_System_Object.h"
// GameConfigurationManager
struct  GameConfigurationManager_t272  : public Object_t
{
	// System.String GameConfigurationManager::mConfigurationPath
	String_t* ___mConfigurationPath_1;
	// System.Boolean GameConfigurationManager::mIsConfigurationComplete
	bool ___mIsConfigurationComplete_2;
	// System.Collections.Generic.List`1<GameConfigurationManager/Account> GameConfigurationManager::mValideAccountList
	List_1_t273 * ___mValideAccountList_3;
	// GameConfigurationManager/GameSettings GameConfigurationManager::mInGameSettings
	GameSettings_t271 * ___mInGameSettings_4;
};
struct GameConfigurationManager_t272_StaticFields{
	// GameConfigurationManager GameConfigurationManager::mLMInstance
	GameConfigurationManager_t272 * ___mLMInstance_0;
};
