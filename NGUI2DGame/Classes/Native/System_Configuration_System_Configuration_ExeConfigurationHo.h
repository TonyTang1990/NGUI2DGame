#pragma once
#include <stdint.h>
// System.Configuration.ExeConfigurationFileMap
struct ExeConfigurationFileMap_t1448;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t60;
// System.Configuration.InternalConfigurationHost
#include "System_Configuration_System_Configuration_InternalConfigurat_1.h"
// System.Configuration.ConfigurationUserLevel
#include "System_Configuration_System_Configuration_ConfigurationUserL.h"
// System.Configuration.ExeConfigurationHost
struct  ExeConfigurationHost_t1453  : public InternalConfigurationHost_t1452
{
	// System.Configuration.ExeConfigurationFileMap System.Configuration.ExeConfigurationHost::map
	ExeConfigurationFileMap_t1448 * ___map_0;
	// System.Configuration.ConfigurationUserLevel System.Configuration.ExeConfigurationHost::level
	int32_t ___level_1;
};
struct ExeConfigurationHost_t1453_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Configuration.ExeConfigurationHost::<>f__switch$map0
	Dictionary_2_t60 * ___U3CU3Ef__switchU24map0_2;
};
