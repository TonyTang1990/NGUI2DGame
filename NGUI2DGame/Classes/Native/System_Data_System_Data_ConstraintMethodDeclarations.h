#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Constraint
struct Constraint_t900;
// System.String
struct String_t;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.ConstraintCollection
struct ConstraintCollection_t899;
// System.Data.Common.Index
struct Index_t898;
// System.Data.DelegateConstraintNameChange
struct DelegateConstraintNameChange_t1088;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataColumn
struct DataColumn_t858;

// System.Void System.Data.Constraint::.ctor()
extern "C" void Constraint__ctor_m3648 (Constraint_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::.cctor()
extern "C" void Constraint__cctor_m3649 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::add_BeforeConstraintNameChange(System.Data.DelegateConstraintNameChange)
extern "C" void Constraint_add_BeforeConstraintNameChange_m3650 (Constraint_t900 * __this, DelegateConstraintNameChange_t1088 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::remove_BeforeConstraintNameChange(System.Data.DelegateConstraintNameChange)
extern "C" void Constraint_remove_BeforeConstraintNameChange_m3651 (Constraint_t900 * __this, DelegateConstraintNameChange_t1088 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Constraint::get_ConstraintName()
extern "C" String_t* Constraint_get_ConstraintName_m3652 (Constraint_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::set_ConstraintName(System.String)
extern "C" void Constraint_set_ConstraintName_m3653 (Constraint_t900 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.Constraint::get_ExtendedProperties()
extern "C" PropertyCollection_t897 * Constraint_get_ExtendedProperties_m3654 (Constraint_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.Constraint::get_Table()
// System.Data.ConstraintCollection System.Data.Constraint::get_ConstraintCollection()
extern "C" ConstraintCollection_t899 * Constraint_get_ConstraintCollection_m3655 (Constraint_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::set_ConstraintCollection(System.Data.ConstraintCollection)
extern "C" void Constraint_set_ConstraintCollection_m3656 (Constraint_t900 * __this, ConstraintCollection_t899 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::_onConstraintNameChange(System.String)
extern "C" void Constraint__onConstraintNameChange_m3657 (Constraint_t900 * __this, String_t* ___newName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::AddToConstraintCollectionSetup(System.Data.ConstraintCollection)
// System.Boolean System.Data.Constraint::IsConstraintViolated()
// System.Void System.Data.Constraint::ThrowConstraintException()
extern "C" void Constraint_ThrowConstraintException_m3658 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Constraint::get_InitInProgress()
extern "C" bool Constraint_get_InitInProgress_m3659 (Constraint_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::AssertConstraint()
extern "C" void Constraint_AssertConstraint_m3660 (Constraint_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::AssertConstraint(System.Data.DataRow)
// System.Void System.Data.Constraint::RemoveFromConstraintCollectionCleanup(System.Data.ConstraintCollection)
// System.Void System.Data.Constraint::SetExtendedProperties(System.Data.PropertyCollection)
extern "C" void Constraint_SetExtendedProperties_m3661 (Constraint_t900 * __this, PropertyCollection_t897 * ___properties, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.Index System.Data.Constraint::get_Index()
extern "C" Index_t898 * Constraint_get_Index_m3662 (Constraint_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.Constraint::set_Index(System.Data.Common.Index)
extern "C" void Constraint_set_Index_m3663 (Constraint_t900 * __this, Index_t898 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.Constraint::IsColumnContained(System.Data.DataColumn)
// System.Boolean System.Data.Constraint::CanRemoveFromCollection(System.Data.ConstraintCollection,System.Boolean)
// System.String System.Data.Constraint::ToString()
extern "C" String_t* Constraint_ToString_m3664 (Constraint_t900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
