#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t919;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.DataTable
struct DataTable_t296;
// System.String
struct String_t;
// System.Data.ConstraintCollection
struct ConstraintCollection_t899;
// System.Object
struct Object_t;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.AcceptRejectRule
#include "System_Data_System_Data_AcceptRejectRule.h"
// System.Data.Rule
#include "System_Data_System_Data_Rule.h"

// System.Void System.Data.ForeignKeyConstraint::.ctor(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C" void ForeignKeyConstraint__ctor_m4106 (ForeignKeyConstraint_t919 * __this, String_t* ___constraintName, DataColumnU5BU5D_t920* ___parentColumns, DataColumnU5BU5D_t920* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::_foreignKeyConstraint(System.String,System.Data.DataColumn[],System.Data.DataColumn[])
extern "C" void ForeignKeyConstraint__foreignKeyConstraint_m4107 (ForeignKeyConstraint_t919 * __this, String_t* ___constraintName, DataColumnU5BU5D_t920* ___parentColumns, DataColumnU5BU5D_t920* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::_validateColumns(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C" void ForeignKeyConstraint__validateColumns_m4108 (ForeignKeyConstraint_t919 * __this, DataColumnU5BU5D_t920* ___parentColumns, DataColumnU5BU5D_t920* ___childColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::_ensureUniqueConstraintExists(System.Data.ConstraintCollection,System.Data.DataColumn[])
extern "C" void ForeignKeyConstraint__ensureUniqueConstraintExists_m4109 (ForeignKeyConstraint_t919 * __this, ConstraintCollection_t899 * ___collection, DataColumnU5BU5D_t920* ___parentColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::get_AcceptRejectRule()
extern "C" int32_t ForeignKeyConstraint_get_AcceptRejectRule_m4110 (ForeignKeyConstraint_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::set_AcceptRejectRule(System.Data.AcceptRejectRule)
extern "C" void ForeignKeyConstraint_set_AcceptRejectRule_m4111 (ForeignKeyConstraint_t919 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::get_Columns()
extern "C" DataColumnU5BU5D_t920* ForeignKeyConstraint_get_Columns_m4112 (ForeignKeyConstraint_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Rule System.Data.ForeignKeyConstraint::get_DeleteRule()
extern "C" int32_t ForeignKeyConstraint_get_DeleteRule_m4113 (ForeignKeyConstraint_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::set_DeleteRule(System.Data.Rule)
extern "C" void ForeignKeyConstraint_set_DeleteRule_m4114 (ForeignKeyConstraint_t919 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Rule System.Data.ForeignKeyConstraint::get_UpdateRule()
extern "C" int32_t ForeignKeyConstraint_get_UpdateRule_m4115 (ForeignKeyConstraint_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::set_UpdateRule(System.Data.Rule)
extern "C" void ForeignKeyConstraint_set_UpdateRule_m4116 (ForeignKeyConstraint_t919 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::get_RelatedColumns()
extern "C" DataColumnU5BU5D_t920* ForeignKeyConstraint_get_RelatedColumns_m4117 (ForeignKeyConstraint_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.ForeignKeyConstraint::get_RelatedTable()
extern "C" DataTable_t296 * ForeignKeyConstraint_get_RelatedTable_m4118 (ForeignKeyConstraint_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.ForeignKeyConstraint::get_Table()
extern "C" DataTable_t296 * ForeignKeyConstraint_get_Table_m4119 (ForeignKeyConstraint_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::Equals(System.Object)
extern "C" bool ForeignKeyConstraint_Equals_m4120 (ForeignKeyConstraint_t919 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.ForeignKeyConstraint::GetHashCode()
extern "C" int32_t ForeignKeyConstraint_GetHashCode_m4121 (ForeignKeyConstraint_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::AddToConstraintCollectionSetup(System.Data.ConstraintCollection)
extern "C" void ForeignKeyConstraint_AddToConstraintCollectionSetup_m4122 (ForeignKeyConstraint_t919 * __this, ConstraintCollection_t899 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::RemoveFromConstraintCollectionCleanup(System.Data.ConstraintCollection)
extern "C" void ForeignKeyConstraint_RemoveFromConstraintCollectionCleanup_m4123 (ForeignKeyConstraint_t919 * __this, ConstraintCollection_t899 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::IsConstraintViolated()
extern "C" bool ForeignKeyConstraint_IsConstraintViolated_m4124 (ForeignKeyConstraint_t919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ForeignKeyConstraint::AssertConstraint(System.Data.DataRow)
extern "C" void ForeignKeyConstraint_AssertConstraint_m4125 (ForeignKeyConstraint_t919 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::IsColumnContained(System.Data.DataColumn)
extern "C" bool ForeignKeyConstraint_IsColumnContained_m4126 (ForeignKeyConstraint_t919 * __this, DataColumn_t858 * ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ForeignKeyConstraint::CanRemoveFromCollection(System.Data.ConstraintCollection,System.Boolean)
extern "C" bool ForeignKeyConstraint_CanRemoveFromCollection_m4127 (ForeignKeyConstraint_t919 * __this, ConstraintCollection_t899 * ___col, bool ___shouldThrow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.ForeignKeyConstraint::GetErrorMessage(System.Data.DataRow)
extern "C" String_t* ForeignKeyConstraint_GetErrorMessage_m4128 (ForeignKeyConstraint_t919 * __this, DataRow_t352 * ___row, const MethodInfo* method) IL2CPP_METHOD_ATTR;
