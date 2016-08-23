#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.DbProviderFactories
struct DbProviderFactories_t1020;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t970;
// System.Data.DataRow
struct DataRow_t352;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataSet
struct DataSet_t346;

// System.Void System.Data.Common.DbProviderFactories::.cctor()
extern "C" void DbProviderFactories__cctor_m4464 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbProviderFactory System.Data.Common.DbProviderFactories::GetFactory(System.Data.DataRow)
extern "C" DbProviderFactory_t970 * DbProviderFactories_GetFactory_m4465 (Object_t * __this /* static, unused */, DataRow_t352 * ___providerRow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DbProviderFactory System.Data.Common.DbProviderFactories::GetFactory(System.String)
extern "C" DbProviderFactory_t970 * DbProviderFactories_GetFactory_m4466 (Object_t * __this /* static, unused */, String_t* ___providerInvariantName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.Common.DbProviderFactories::GetFactoryClasses()
extern "C" DataTable_t296 * DbProviderFactories_GetFactoryClasses_m4467 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.Common.DbProviderFactories::GetConfigEntries()
extern "C" DataSet_t346 * DbProviderFactories_GetConfigEntries_m4468 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
