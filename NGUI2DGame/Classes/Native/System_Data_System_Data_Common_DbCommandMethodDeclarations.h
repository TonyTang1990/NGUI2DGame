#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.DbCommand
struct DbCommand_t967;
// System.String
struct String_t;
// System.Data.Common.DbParameterCollection
struct DbParameterCollection_t1018;
// System.Data.CommandType
#include "System_Data_System_Data_CommandType.h"

// System.Void System.Data.Common.DbCommand::set_CommandText(System.String)
// System.Void System.Data.Common.DbCommand::set_CommandType(System.Data.CommandType)
// System.Data.Common.DbParameterCollection System.Data.Common.DbCommand::get_DbParameterCollection()
// System.Data.Common.DbParameterCollection System.Data.Common.DbCommand::get_Parameters()
extern "C" DbParameterCollection_t1018 * DbCommand_get_Parameters_m4438 (DbCommand_t967 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
