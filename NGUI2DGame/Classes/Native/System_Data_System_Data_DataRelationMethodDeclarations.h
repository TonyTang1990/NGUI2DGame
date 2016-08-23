#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataRelation
struct DataRelation_t921;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t919;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataSet
struct DataSet_t346;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Data.UniqueConstraint
struct UniqueConstraint_t918;
// System.String
struct String_t;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.ConstraintCollection
struct ConstraintCollection_t899;

// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C" void DataRelation__ctor_m3780 (DataRelation_t921 * __this, String_t* ___relationName, DataColumnU5BU5D_t920* ___parentColumns, DataColumnU5BU5D_t920* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn,System.Data.DataColumn,System.Boolean)
extern "C" void DataRelation__ctor_m3781 (DataRelation_t921 * __this, String_t* ___relationName, DataColumn_t858 * ___parentColumn, DataColumn_t858 * ___childColumn, bool ___createConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[],System.Boolean)
extern "C" void DataRelation__ctor_m3782 (DataRelation_t921 * __this, String_t* ___relationName, DataColumnU5BU5D_t920* ___parentColumns, DataColumnU5BU5D_t920* ___childColumns, bool ___createConstraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRelation::get_ChildColumns()
extern "C" DataColumnU5BU5D_t920* DataRelation_get_ChildColumns_m3783 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ForeignKeyConstraint System.Data.DataRelation::get_ChildKeyConstraint()
extern "C" ForeignKeyConstraint_t919 * DataRelation_get_ChildKeyConstraint_m3784 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::SetChildKeyConstraint(System.Data.ForeignKeyConstraint)
extern "C" void DataRelation_SetChildKeyConstraint_m3785 (DataRelation_t921 * __this, ForeignKeyConstraint_t919 * ___foreignKeyConstraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRelation::get_ChildTable()
extern "C" DataTable_t296 * DataRelation_get_ChildTable_m3786 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSet System.Data.DataRelation::get_DataSet()
extern "C" DataSet_t346 * DataRelation_get_DataSet_m3787 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataRelation::get_ExtendedProperties()
extern "C" PropertyCollection_t897 * DataRelation_get_ExtendedProperties_m3788 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelation::get_Nested()
extern "C" bool DataRelation_get_Nested_m3789 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::set_Nested(System.Boolean)
extern "C" void DataRelation_set_Nested_m3790 (DataRelation_t921 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.DataRelation::get_ParentColumns()
extern "C" DataColumnU5BU5D_t920* DataRelation_get_ParentColumns_m3791 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.DataRelation::get_ParentKeyConstraint()
extern "C" UniqueConstraint_t918 * DataRelation_get_ParentKeyConstraint_m3792 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::SetParentKeyConstraint(System.Data.UniqueConstraint)
extern "C" void DataRelation_SetParentKeyConstraint_m3793 (DataRelation_t921 * __this, UniqueConstraint_t918 * ___uniqueConstraint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::SetDataSet(System.Data.DataSet)
extern "C" void DataRelation_SetDataSet_m3794 (DataRelation_t921 * __this, DataSet_t346 * ___ds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataRelation::get_ParentTable()
extern "C" DataTable_t296 * DataRelation_get_ParentTable_m3795 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelation::get_RelationName()
extern "C" String_t* DataRelation_get_RelationName_m3796 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::set_RelationName(System.String)
extern "C" void DataRelation_set_RelationName_m3797 (DataRelation_t921 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataRelation::ToString()
extern "C" String_t* DataRelation_ToString_m3798 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataRelation::UpdateConstraints()
extern "C" void DataRelation_UpdateConstraints_m3799 (DataRelation_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelation::CompareDataColumns(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C" bool DataRelation_CompareDataColumns_m3800 (Object_t * __this /* static, unused */, DataColumnU5BU5D_t920* ___dc1, DataColumnU5BU5D_t920* ___dc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.ForeignKeyConstraint System.Data.DataRelation::FindForeignKey(System.Data.ConstraintCollection)
extern "C" ForeignKeyConstraint_t919 * DataRelation_FindForeignKey_m3801 (DataRelation_t921 * __this, ConstraintCollection_t899 * ___cl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.UniqueConstraint System.Data.DataRelation::FindUniqueConstraint(System.Data.ConstraintCollection)
extern "C" UniqueConstraint_t918 * DataRelation_FindUniqueConstraint_m3802 (DataRelation_t921 * __this, ConstraintCollection_t899 * ___cl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataRelation::Contains(System.Data.DataColumn)
extern "C" bool DataRelation_Contains_m3803 (DataRelation_t921 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
