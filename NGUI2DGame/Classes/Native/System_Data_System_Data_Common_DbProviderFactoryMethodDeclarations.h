#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t970;
// System.NotImplementedException
struct NotImplementedException_t333;
// System.Data.Common.DbCommand
struct DbCommand_t967;
// System.Data.Common.DbConnection
struct DbConnection_t972;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_t971;
// System.Data.Common.DbParameter
struct DbParameter_t1019;

// System.NotImplementedException System.Data.Common.DbProviderFactory::CreateNotImplementedException()
extern "C" NotImplementedException_t333 * DbProviderFactory_CreateNotImplementedException_m4469 (DbProviderFactory_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbCommand System.Data.Common.DbProviderFactory::CreateCommand()
extern "C" DbCommand_t967 * DbProviderFactory_CreateCommand_m4470 (DbProviderFactory_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbConnection System.Data.Common.DbProviderFactory::CreateConnection()
extern "C" DbConnection_t972 * DbProviderFactory_CreateConnection_m4471 (DbProviderFactory_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbDataAdapter System.Data.Common.DbProviderFactory::CreateDataAdapter()
extern "C" DbDataAdapter_t971 * DbProviderFactory_CreateDataAdapter_m4472 (DbProviderFactory_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbParameter System.Data.Common.DbProviderFactory::CreateParameter()
extern "C" DbParameter_t1019 * DbProviderFactory_CreateParameter_m4473 (DbProviderFactory_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
