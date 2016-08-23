#pragma once
#include <stdint.h>
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t970;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_t971;
// System.Data.Common.DbConnection
struct DbConnection_t972;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.TableAdapterSchemaInfo
struct  TableAdapterSchemaInfo_t931  : public Object_t
{
	// System.Data.Common.DbProviderFactory System.Data.TableAdapterSchemaInfo::Provider
	DbProviderFactory_t970 * ___Provider_0;
	// System.Data.Common.DbDataAdapter System.Data.TableAdapterSchemaInfo::Adapter
	DbDataAdapter_t971 * ___Adapter_1;
	// System.Data.Common.DbConnection System.Data.TableAdapterSchemaInfo::Connection
	DbConnection_t972 * ___Connection_2;
	// System.String System.Data.TableAdapterSchemaInfo::ConnectionString
	String_t* ___ConnectionString_3;
	// System.String System.Data.TableAdapterSchemaInfo::BaseClass
	String_t* ___BaseClass_4;
	// System.String System.Data.TableAdapterSchemaInfo::Name
	String_t* ___Name_5;
	// System.Boolean System.Data.TableAdapterSchemaInfo::ShortCommands
	bool ___ShortCommands_6;
	// System.Collections.ArrayList System.Data.TableAdapterSchemaInfo::Commands
	ArrayList_t913 * ___Commands_7;
};
