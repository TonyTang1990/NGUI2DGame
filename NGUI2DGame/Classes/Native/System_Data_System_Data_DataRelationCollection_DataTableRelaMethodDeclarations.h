#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataRelationCollection/DataTableRelationCollection
struct DataTableRelationCollection_t924;
// System.Data.DataRelation
struct DataRelation_t921;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataSet
struct DataSet_t346;

// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::.ctor(System.Data.DataTable)
extern "C" void DataTableRelationCollection__ctor_m3810 (DataTableRelationCollection_t924 * __this, DataTable_t296 * ___dataTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelationCollection/DataTableRelationCollection::GetDataSet()
extern "C" DataSet_t346 * DataTableRelationCollection_GetDataSet_m3811 (DataTableRelationCollection_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.String)
extern "C" DataRelation_t921 * DataTableRelationCollection_get_Item_m3812 (DataTableRelationCollection_t924 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataTableRelationCollection::get_Item(System.Int32)
extern "C" DataRelation_t921 * DataTableRelationCollection_get_Item_m3813 (DataTableRelationCollection_t924 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection/DataTableRelationCollection::AddCore(System.Data.DataRelation)
extern "C" void DataTableRelationCollection_AddCore_m3814 (DataTableRelationCollection_t924 * __this, DataRelation_t921 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRelationCollection/DataTableRelationCollection::get_List()
extern "C" ArrayList_t913 * DataTableRelationCollection_get_List_m3815 (DataTableRelationCollection_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
