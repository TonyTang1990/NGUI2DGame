#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.TableMapping
struct TableMapping_t977;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataColumn
struct DataColumn_t858;

// System.Void System.Data.TableMapping::.ctor(System.String,System.String)
extern "C" void TableMapping__ctor_m4213 (TableMapping_t977 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.TableMapping::.ctor(System.Data.DataTable)
extern "C" void TableMapping__ctor_m4214 (TableMapping_t977 * __this, DataTable_t296 * ___dt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.TableMapping::get_ExistsInDataSet()
extern "C" bool TableMapping_get_ExistsInDataSet_m4215 (TableMapping_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.TableMapping::GetColumn(System.String)
extern "C" DataColumn_t858 * TableMapping_GetColumn_m4216 (TableMapping_t977 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.TableMapping::RemoveElementColumn(System.String)
extern "C" void TableMapping_RemoveElementColumn_m4217 (TableMapping_t977 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
