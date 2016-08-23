#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.TableStructure
struct TableStructure_t1047;
// System.Data.DataTable
struct DataTable_t296;
// System.String
struct String_t;

// System.Void System.Data.TableStructure::.ctor(System.Data.DataTable)
extern "C" void TableStructure__ctor_m4746 (TableStructure_t1047 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.TableStructure::ContainsColumn(System.String)
extern "C" bool TableStructure_ContainsColumn_m4747 (TableStructure_t1047 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
