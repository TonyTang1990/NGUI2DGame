#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.RecordCache
struct RecordCache_t935;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataTable
struct DataTable_t296;

// System.Void System.Data.Common.RecordCache::.ctor(System.Data.DataTable)
extern "C" void RecordCache__ctor_m4519 (RecordCache_t935 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::get_CurrentCapacity()
extern "C" int32_t RecordCache_get_CurrentCapacity_m4520 (RecordCache_t935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.Common.RecordCache::get_Item(System.Int32)
extern "C" DataRow_t352 * RecordCache_get_Item_m4521 (RecordCache_t935 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RecordCache::set_Item(System.Int32,System.Data.DataRow)
extern "C" void RecordCache_set_Item_m4522 (RecordCache_t935 * __this, int32_t ___index, DataRow_t352 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::NewRecord()
extern "C" int32_t RecordCache_NewRecord_m4523 (RecordCache_t935 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RecordCache::DisposeRecord(System.Int32)
extern "C" void RecordCache_DisposeRecord_m4524 (RecordCache_t935 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::CopyRecord(System.Data.DataTable,System.Int32,System.Int32)
extern "C" int32_t RecordCache_CopyRecord_m4525 (RecordCache_t935 * __this, DataTable_t296 * ___fromTable, int32_t ___fromRecordIndex, int32_t ___toRecordIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
