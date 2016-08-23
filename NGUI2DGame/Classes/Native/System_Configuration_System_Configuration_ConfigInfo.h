#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Configuration.ConfigInfo
struct ConfigInfo_t1402;
// System.Configuration.Internal.IInternalConfigHost
struct IInternalConfigHost_t1403;
// System.Object
#include "mscorlib_System_Object.h"
// System.Configuration.ConfigInfo
struct  ConfigInfo_t1402  : public Object_t
{
	// System.String System.Configuration.ConfigInfo::Name
	String_t* ___Name_0;
	// System.String System.Configuration.ConfigInfo::TypeName
	String_t* ___TypeName_1;
	// System.Type System.Configuration.ConfigInfo::Type
	Type_t * ___Type_2;
	// System.String System.Configuration.ConfigInfo::streamName
	String_t* ___streamName_3;
	// System.Configuration.ConfigInfo System.Configuration.ConfigInfo::Parent
	ConfigInfo_t1402 * ___Parent_4;
	// System.Configuration.Internal.IInternalConfigHost System.Configuration.ConfigInfo::ConfigHost
	Object_t * ___ConfigHost_5;
};
