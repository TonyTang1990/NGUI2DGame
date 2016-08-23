#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataRelationCollection
struct DataRelationCollection_t923;
// System.Data.DataRelation
struct DataRelation_t921;
// System.String
struct String_t;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t901;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.DataSet
struct DataSet_t346;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1097;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;

// System.Void System.Data.DataRelationCollection::.ctor()
extern "C" void DataRelationCollection__ctor_m3816 (DataRelationCollection_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::add_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C" void DataRelationCollection_add_CollectionChanged_m3817 (DataRelationCollection_t923 * __this, CollectionChangeEventHandler_t901 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::remove_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C" void DataRelationCollection_remove_CollectionChanged_m3818 (DataRelationCollection_t923 * __this, CollectionChangeEventHandler_t901 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection::get_Item(System.String)
// System.Data.DataRelation System.Data.DataRelationCollection::get_Item(System.Int32)
// System.String System.Data.DataRelationCollection::GetNextDefaultRelationName()
extern "C" String_t* DataRelationCollection_GetNextDefaultRelationName_m3819 (DataRelationCollection_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::Add(System.Data.DataRelation)
extern "C" void DataRelationCollection_Add_m3820 (DataRelationCollection_t923 * __this, DataRelation_t921 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelationCollection::GenerateRelationName()
extern "C" String_t* DataRelationCollection_GenerateRelationName_m3821 (DataRelationCollection_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataRelationCollection::Add(System.String,System.Data.DataColumn[],System.Data.DataColumn[],System.Boolean)
extern "C" DataRelation_t921 * DataRelationCollection_Add_m3822 (DataRelationCollection_t923 * __this, String_t* ___name, DataColumnU5BU5D_t920* ___parentColumns, DataColumnU5BU5D_t920* ___childColumns, bool ___createConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::AddCore(System.Data.DataRelation)
extern "C" void DataRelationCollection_AddCore_m3823 (DataRelationCollection_t923 * __this, DataRelation_t921 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelationCollection::Contains(System.String)
extern "C" bool DataRelationCollection_Contains_m3824 (DataRelationCollection_t923 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelationCollection::GetDataSet()
// System.Int32 System.Data.DataRelationCollection::IndexOf(System.Data.DataRelation)
extern "C" int32_t DataRelationCollection_IndexOf_m3825 (DataRelationCollection_t923 * __this, DataRelation_t921 * ___relation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRelationCollection::IndexOf(System.String)
extern "C" int32_t DataRelationCollection_IndexOf_m3826 (DataRelationCollection_t923 * __this, String_t* ___relationName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataRelationCollection::IndexOf(System.String,System.Boolean)
extern "C" int32_t DataRelationCollection_IndexOf_m3827 (DataRelationCollection_t923 * __this, String_t* ___name, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C" void DataRelationCollection_OnCollectionChanged_m3828 (DataRelationCollection_t923 * __this, CollectionChangeEventArgs_t1097 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::OnCollectionChanging(System.ComponentModel.CollectionChangeEventArgs)
extern "C" void DataRelationCollection_OnCollectionChanging_m3829 (DataRelationCollection_t923 * __this, CollectionChangeEventArgs_t1097 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelationCollection::BinarySerialize(System.Runtime.Serialization.SerializationInfo)
extern "C" void DataRelationCollection_BinarySerialize_m3830 (DataRelationCollection_t923 * __this, SerializationInfo_t669 * ___si, const MethodInfo* method) IL2CPP_METHOD_ATTR;
