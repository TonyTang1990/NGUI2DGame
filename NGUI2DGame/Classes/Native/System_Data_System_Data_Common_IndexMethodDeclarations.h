#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.Index
struct Index_t898;
// System.Data.Common.Key
struct Key_t1022;
// System.Int32[]
struct Int32U5BU5D_t1;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataRowVersion
#include "System_Data_System_Data_DataRowVersion.h"
// System.Data.DataRowState
#include "System_Data_System_Data_DataRowState.h"

// System.Void System.Data.Common.Index::.ctor(System.Data.Common.Key)
extern "C" void Index__ctor_m4475 (Index_t898 * __this, Key_t1022 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::.cctor()
extern "C" void Index__cctor_m4476 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Key System.Data.Common.Index::get_Key()
extern "C" Key_t1022 * Index_get_Key_m4477 (Index_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::get_RefCount()
extern "C" int32_t Index_get_RefCount_m4478 (Index_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::IndexToRecord(System.Int32)
extern "C" int32_t Index_IndexToRecord_m4479 (Index_t898 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Common.Index::get_HasDuplicates()
extern "C" bool Index_get_HasDuplicates_m4480 (Index_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.Index::get_Duplicates()
extern "C" Int32U5BU5D_t1* Index_get_Duplicates_m4481 (Index_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Reset()
extern "C" void Index_Reset_m4482 (Index_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::RebuildIndex()
extern "C" void Index_RebuildIndex_m4483 (Index_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Sort()
extern "C" void Index_Sort_m4484 (Index_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::Find(System.Object[])
extern "C" int32_t Index_Find_m4485 (Index_t898 * __this, ObjectU5BU5D_t300* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::FindIndex(System.Object[])
extern "C" int32_t Index_FindIndex_m4486 (Index_t898 * __this, ObjectU5BU5D_t300* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::Find(System.Int32)
extern "C" int32_t Index_Find_m4487 (Index_t898 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.Index::FindAll(System.Int32)
extern "C" Int32U5BU5D_t1* Index_FindAll_m4488 (Index_t898 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Data.Common.Index::FindAllIndexes(System.Int32)
extern "C" Int32U5BU5D_t1* Index_FindAllIndexes_m4489 (Index_t898 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::FindIndex(System.Int32)
extern "C" int32_t Index_FindIndex_m4490 (Index_t898 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::FindIndexExact(System.Int32)
extern "C" int32_t Index_FindIndexExact_m4491 (Index_t898 * __this, int32_t ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::IndexesToRecords(System.Int32[])
extern "C" void Index_IndexesToRecords_m4492 (Index_t898 * __this, Int32U5BU5D_t1* ___indexes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Delete(System.Data.DataRow)
extern "C" void Index_Delete_m4493 (Index_t898 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Delete(System.Int32)
extern "C" void Index_Delete_m4494 (Index_t898 * __this, int32_t ___oldRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Remove(System.Int32)
extern "C" void Index_Remove_m4495 (Index_t898 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Update(System.Data.DataRow,System.Int32,System.Data.DataRowVersion,System.Data.DataRowState)
extern "C" void Index_Update_m4496 (Index_t898 * __this, DataRow_t352 * ___row, int32_t ___oldRecord, int32_t ___oldVersion, int32_t ___oldState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Add(System.Data.DataRow)
extern "C" void Index_Add_m4497 (Index_t898 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Add(System.Data.DataRow,System.Int32)
extern "C" void Index_Add_m4498 (Index_t898 * __this, DataRow_t352 * ___row, int32_t ___newRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::Insert(System.Int32,System.Int32)
extern "C" void Index_Insert_m4499 (Index_t898 * __this, int32_t ___index, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::MergeSort(System.Int32[],System.Int32)
extern "C" void Index_MergeSort_m4500 (Index_t898 * __this, Int32U5BU5D_t1* ___to, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::MergeSort(System.Int32[],System.Int32[],System.Int32,System.Int32)
extern "C" void Index_MergeSort_m4501 (Index_t898 * __this, Int32U5BU5D_t1* ___from, Int32U5BU5D_t1* ___to, int32_t ___p, int32_t ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::BinarySearch(System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C" int32_t Index_BinarySearch_m4502 (Index_t898 * __this, Int32U5BU5D_t1* ___a, int32_t ___p, int32_t ___r, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.Common.Index::LazyBinarySearch(System.Int32[],System.Int32,System.Int32,System.Int32)
extern "C" int32_t Index_LazyBinarySearch_m4503 (Index_t898 * __this, Int32U5BU5D_t1* ___a, int32_t ___p, int32_t ___r, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::AddRef()
extern "C" void Index_AddRef_m4504 (Index_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.Index::RemoveRef()
extern "C" void Index_RemoveRef_m4505 (Index_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
