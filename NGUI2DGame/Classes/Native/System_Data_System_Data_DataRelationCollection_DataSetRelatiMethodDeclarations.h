#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataRelationCollection/DataSetRelationCollection
struct DataSetRelationCollection_t922;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.DataRelation
struct DataRelation_t921;
// System.String
struct String_t;
// System.Data.DataSet
struct DataSet_t346;

// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::.ctor(System.Data.DataSet)
extern "C" void DataSetRelationCollection__ctor_m3804 (DataSetRelationCollection_t922 * __this, DataSet_t346 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::GetDataSet()
extern "C" DataSet_t346 * DataSetRelationCollection_GetDataSet_m3805 (DataSetRelationCollection_t922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection/DataSetRelationCollection::AddCore(System.Data.DataRelation)
extern "C" void DataSetRelationCollection_AddCore_m3806 (DataSetRelationCollection_t922 * __this, DataRelation_t921 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataRelationCollection/DataSetRelationCollection::get_List()
extern "C" ArrayList_t913 * DataSetRelationCollection_get_List_m3807 (DataSetRelationCollection_t922 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataSetRelationCollection::get_Item(System.String)
extern "C" DataRelation_t921 * DataSetRelationCollection_get_Item_m3808 (DataSetRelationCollection_t922 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection/DataSetRelationCollection::get_Item(System.Int32)
extern "C" DataRelation_t921 * DataSetRelationCollection_get_Item_m3809 (DataSetRelationCollection_t922 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
