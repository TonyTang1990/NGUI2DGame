#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Data.MergeFailedEventArgs
struct MergeFailedEventArgs_t1148725902;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.Data.MergeFailedEventArgs::.ctor(System.Data.DataTable,System.String)
extern "C"  void MergeFailedEventArgs__ctor_m8967466 (MergeFailedEventArgs_t1148725902 * __this, DataTable_t3267612424 * ___table0, String_t* ___conflict1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.MergeFailedEventArgs::get_Conflict()
extern "C"  String_t* MergeFailedEventArgs_get_Conflict_m3587539311 (MergeFailedEventArgs_t1148725902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
