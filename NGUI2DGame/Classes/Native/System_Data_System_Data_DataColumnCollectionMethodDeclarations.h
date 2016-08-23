#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataColumnCollection
struct DataColumnCollection_t350;
// System.Data.DataColumn
struct DataColumn_t858;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.DataTable
struct DataTable_t296;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t901;
// System.Type
struct Type_t;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t1097;
// System.Object
struct Object_t;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1099;

// System.Void System.Data.DataColumnCollection::.ctor(System.Data.DataTable)
extern "C" void DataColumnCollection__ctor_m3755 (DataColumnCollection_t350 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::.cctor()
extern "C" void DataColumnCollection__cctor_m3756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::add_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C" void DataColumnCollection_add_CollectionChanged_m3757 (DataColumnCollection_t350 * __this, CollectionChangeEventHandler_t901 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::remove_CollectionChanged(System.ComponentModel.CollectionChangeEventHandler)
extern "C" void DataColumnCollection_remove_CollectionChanged_m3758 (DataColumnCollection_t350 * __this, CollectionChangeEventHandler_t901 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::get_Item(System.Int32)
extern "C" DataColumn_t858 * DataColumnCollection_get_Item_m3530 (DataColumnCollection_t350 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::get_Item(System.String)
extern "C" DataColumn_t858 * DataColumnCollection_get_Item_m3538 (DataColumnCollection_t350 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataColumnCollection::get_List()
extern "C" ArrayList_t913 * DataColumnCollection_get_List_m3759 (DataColumnCollection_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Data.DataColumnCollection::get_AutoIncrmentColumns()
extern "C" ArrayList_t913 * DataColumnCollection_get_AutoIncrmentColumns_m3760 (DataColumnCollection_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::Add()
extern "C" DataColumn_t858 * DataColumnCollection_Add_m3761 (DataColumnCollection_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::RegisterName(System.String,System.Data.DataColumn)
extern "C" void DataColumnCollection_RegisterName_m3762 (DataColumnCollection_t350 * __this, String_t* ___name, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::UnregisterName(System.String)
extern "C" void DataColumnCollection_UnregisterName_m3763 (DataColumnCollection_t350 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumnCollection::GetNextDefaultColumnName()
extern "C" String_t* DataColumnCollection_GetNextDefaultColumnName_m3764 (DataColumnCollection_t350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumnCollection::MakeName(System.Int32)
extern "C" String_t* DataColumnCollection_MakeName_m3765 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::Add(System.Data.DataColumn)
extern "C" void DataColumnCollection_Add_m3766 (DataColumnCollection_t350 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumnCollection::Add(System.String,System.Type)
extern "C" DataColumn_t858 * DataColumnCollection_Add_m3540 (DataColumnCollection_t350 * __this, String_t* ___columnName, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumnCollection::Contains(System.String)
extern "C" bool DataColumnCollection_Contains_m3767 (DataColumnCollection_t350 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.Data.DataColumn)
extern "C" int32_t DataColumnCollection_IndexOf_m3768 (DataColumnCollection_t350 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.String)
extern "C" int32_t DataColumnCollection_IndexOf_m3769 (DataColumnCollection_t350 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::OnCollectionChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C" void DataColumnCollection_OnCollectionChanged_m3770 (DataColumnCollection_t350 * __this, CollectionChangeEventArgs_t1097 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::UpdateAutoIncrement(System.Data.DataColumn,System.Boolean)
extern "C" void DataColumnCollection_UpdateAutoIncrement_m3771 (DataColumnCollection_t350 * __this, DataColumn_t858 * ___col, bool ___isAutoIncrement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumnCollection::IndexOf(System.String,System.Boolean)
extern "C" int32_t DataColumnCollection_IndexOf_m3772 (DataColumnCollection_t350 * __this, String_t* ___name, bool ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::OnCollectionMetaDataChanged(System.ComponentModel.CollectionChangeEventArgs)
extern "C" void DataColumnCollection_OnCollectionMetaDataChanged_m3773 (DataColumnCollection_t350 * __this, CollectionChangeEventArgs_t1097 * ___ccevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumnCollection::ColumnPropertyChanged(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C" void DataColumnCollection_ColumnPropertyChanged_m3774 (DataColumnCollection_t350 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1099 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
