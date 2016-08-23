#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.DataTableMapping
struct DataTableMapping_t1016;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t991;
// System.String
struct String_t;
// System.Data.Common.DataColumnMapping[]
struct DataColumnMappingU5BU5D_t1104;
// System.Object
struct Object_t;

// System.Void System.Data.Common.DataTableMapping::.ctor()
extern "C" void DataTableMapping__ctor_m4428 (DataTableMapping_t1016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::.ctor(System.String,System.String)
extern "C" void DataTableMapping__ctor_m4429 (DataTableMapping_t1016 * __this, String_t* ___sourceTable, String_t* ___dataSetTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::.ctor(System.String,System.String,System.Data.Common.DataColumnMapping[])
extern "C" void DataTableMapping__ctor_m4430 (DataTableMapping_t1016 * __this, String_t* ___sourceTable, String_t* ___dataSetTable, DataColumnMappingU5BU5D_t1104* ___columnMappings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataTableMapping::System.ICloneable.Clone()
extern "C" Object_t * DataTableMapping_System_ICloneable_Clone_m4431 (DataTableMapping_t1016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::get_ColumnMappings()
extern "C" DataColumnMappingCollection_t991 * DataTableMapping_get_ColumnMappings_m4432 (DataTableMapping_t1016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataTableMapping::get_DataSetTable()
extern "C" String_t* DataTableMapping_get_DataSetTable_m4433 (DataTableMapping_t1016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::set_DataSetTable(System.String)
extern "C" void DataTableMapping_set_DataSetTable_m4434 (DataTableMapping_t1016 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataTableMapping::get_SourceTable()
extern "C" String_t* DataTableMapping_get_SourceTable_m4435 (DataTableMapping_t1016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Common.DataTableMapping::set_SourceTable(System.String)
extern "C" void DataTableMapping_set_SourceTable_m4436 (DataTableMapping_t1016 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataTableMapping::ToString()
extern "C" String_t* DataTableMapping_ToString_m4437 (DataTableMapping_t1016 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
