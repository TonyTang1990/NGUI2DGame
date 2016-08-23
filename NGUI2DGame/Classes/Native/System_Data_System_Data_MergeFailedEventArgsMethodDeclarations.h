#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t950;
// System.String
struct String_t;
// System.Data.DataTable
struct DataTable_t296;

// System.Void System.Data.MergeFailedEventArgs::.ctor(System.Data.DataTable,System.String)
extern "C" void MergeFailedEventArgs__ctor_m4144 (MergeFailedEventArgs_t950 * __this, DataTable_t296 * ___table, String_t* ___conflict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.MergeFailedEventArgs::get_Conflict()
extern "C" String_t* MergeFailedEventArgs_get_Conflict_m4145 (MergeFailedEventArgs_t950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
