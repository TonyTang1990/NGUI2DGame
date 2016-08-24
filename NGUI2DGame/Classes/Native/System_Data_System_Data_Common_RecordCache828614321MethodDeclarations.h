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

// System.Data.Common.RecordCache
struct RecordCache_t828614321;
// System.Data.DataTable
struct DataTable_t3267612424;
// System.Data.DataRow
struct DataRow_t321465356;

#include "codegen/il2cpp-codegen.h"
#include "System_Data_System_Data_DataTable3267612424.h"
#include "System_Data_System_Data_DataRow321465356.h"

// System.Void System.Data.Common.RecordCache::.ctor(System.Data.DataTable)
extern "C"  void RecordCache__ctor_m281223042 (RecordCache_t828614321 * __this, DataTable_t3267612424 * ___table0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::get_CurrentCapacity()
extern "C"  int32_t RecordCache_get_CurrentCapacity_m2748187685 (RecordCache_t828614321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRow System.Data.Common.RecordCache::get_Item(System.Int32)
extern "C"  DataRow_t321465356 * RecordCache_get_Item_m2088520144 (RecordCache_t828614321 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RecordCache::set_Item(System.Int32,System.Data.DataRow)
extern "C"  void RecordCache_set_Item_m468541925 (RecordCache_t828614321 * __this, int32_t ___index0, DataRow_t321465356 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::NewRecord()
extern "C"  int32_t RecordCache_NewRecord_m3706137616 (RecordCache_t828614321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.RecordCache::DisposeRecord(System.Int32)
extern "C"  void RecordCache_DisposeRecord_m198041094 (RecordCache_t828614321 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.RecordCache::CopyRecord(System.Data.DataTable,System.Int32,System.Int32)
extern "C"  int32_t RecordCache_CopyRecord_m3760812872 (RecordCache_t828614321 * __this, DataTable_t3267612424 * ___fromTable0, int32_t ___fromRecordIndex1, int32_t ___toRecordIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
