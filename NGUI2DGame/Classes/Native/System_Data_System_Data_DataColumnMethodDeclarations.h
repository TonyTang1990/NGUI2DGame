#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DataColumn
struct DataColumn_t858;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t908;
// System.Data.PropertyCollection
struct PropertyCollection_t897;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.Common.DataContainer
struct DataContainer_t909;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t1098;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1099;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.Data.DataRelation
struct DataRelation_t921;
// System.Data.DataSetDateTime
#include "System_Data_System_Data_DataSetDateTime.h"
// System.Data.MappingType
#include "System_Data_System_Data_MappingType.h"

// System.Void System.Data.DataColumn::.ctor()
extern "C" void DataColumn__ctor_m3688 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.ctor(System.String)
extern "C" void DataColumn__ctor_m3689 (DataColumn_t858 * __this, String_t* ___columnName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.ctor(System.String,System.Type)
extern "C" void DataColumn__ctor_m3690 (DataColumn_t858 * __this, String_t* ___columnName, Type_t * ___dataType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.ctor(System.String,System.Type,System.String,System.Data.MappingType)
extern "C" void DataColumn__ctor_m3691 (DataColumn_t858 * __this, String_t* ___columnName, Type_t * ___dataType, String_t* ___expr, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::.cctor()
extern "C" void DataColumn__cctor_m3692 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void DataColumn_add_PropertyChanged_m3693 (DataColumn_t858 * __this, PropertyChangedEventHandler_t1098 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void DataColumn_remove_PropertyChanged_m3694 (DataColumn_t858 * __this, PropertyChangedEventHandler_t1098 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::get_Item(System.Int32)
extern "C" Object_t * DataColumn_get_Item_m3695 (DataColumn_t858 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Item(System.Int32,System.Object)
extern "C" void DataColumn_set_Item_m3696 (DataColumn_t858 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataSetDateTime System.Data.DataColumn::get_DateTimeMode()
extern "C" int32_t DataColumn_get_DateTimeMode_m3697 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_DateTimeMode(System.Data.DataSetDateTime)
extern "C" void DataColumn_set_DateTimeMode_m3698 (DataColumn_t858 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_AllowDBNull()
extern "C" bool DataColumn_get_AllowDBNull_m3699 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AllowDBNull(System.Boolean)
extern "C" void DataColumn_set_AllowDBNull_m3700 (DataColumn_t858 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_AutoIncrement()
extern "C" bool DataColumn_get_AutoIncrement_m3701 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AutoIncrement(System.Boolean)
extern "C" void DataColumn_set_AutoIncrement_m3702 (DataColumn_t858 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::get_AutoIncrementSeed()
extern "C" int64_t DataColumn_get_AutoIncrementSeed_m3703 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AutoIncrementSeed(System.Int64)
extern "C" void DataColumn_set_AutoIncrementSeed_m3704 (DataColumn_t858 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::get_AutoIncrementStep()
extern "C" int64_t DataColumn_get_AutoIncrementStep_m3705 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_AutoIncrementStep(System.Int64)
extern "C" void DataColumn_set_AutoIncrementStep_m3706 (DataColumn_t858 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::UpdateAutoIncrementValue(System.Int64)
extern "C" void DataColumn_UpdateAutoIncrementValue_m3707 (DataColumn_t858 * __this, int64_t ___value64, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Data.DataColumn::AutoIncrementValue()
extern "C" int64_t DataColumn_AutoIncrementValue_m3708 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetDefaultValue(System.Int32)
extern "C" void DataColumn_SetDefaultValue_m3709 (DataColumn_t858 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Caption()
extern "C" String_t* DataColumn_get_Caption_m3710 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Caption(System.String)
extern "C" void DataColumn_set_Caption_m3711 (DataColumn_t858 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.MappingType System.Data.DataColumn::get_ColumnMapping()
extern "C" int32_t DataColumn_get_ColumnMapping_m3712 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ColumnMapping(System.Data.MappingType)
extern "C" void DataColumn_set_ColumnMapping_m3713 (DataColumn_t858 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_ColumnName()
extern "C" String_t* DataColumn_get_ColumnName_m3714 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ColumnName(System.String)
extern "C" void DataColumn_set_ColumnName_m3715 (DataColumn_t858 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Data.DataColumn::get_DataType()
extern "C" Type_t * DataColumn_get_DataType_m3716 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_DataType(System.Type)
extern "C" void DataColumn_set_DataType_m3531 (DataColumn_t858 * __this, Type_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::get_DefaultValue()
extern "C" Object_t * DataColumn_get_DefaultValue_m3717 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_DefaultValue(System.Object)
extern "C" void DataColumn_set_DefaultValue_m3718 (DataColumn_t858 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetDefaultValue(System.Object,System.Boolean)
extern "C" void DataColumn_SetDefaultValue_m3719 (DataColumn_t858 * __this, Object_t * ___value, bool ___forcedTypeCheck, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Expression()
extern "C" String_t* DataColumn_get_Expression_m3720 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Expression(System.String)
extern "C" void DataColumn_set_Expression_m3721 (DataColumn_t858 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Data.SqlExpressions.IExpression System.Data.DataColumn::get_CompiledExpression()
extern "C" Object_t * DataColumn_get_CompiledExpression_m3722 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.PropertyCollection System.Data.DataColumn::get_ExtendedProperties()
extern "C" PropertyCollection_t897 * DataColumn_get_ExtendedProperties_m3723 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ExtendedProperties(System.Data.PropertyCollection)
extern "C" void DataColumn_set_ExtendedProperties_m3724 (DataColumn_t858 * __this, PropertyCollection_t897 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::get_MaxLength()
extern "C" int32_t DataColumn_get_MaxLength_m3725 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_MaxLength(System.Int32)
extern "C" void DataColumn_set_MaxLength_m3726 (DataColumn_t858 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Namespace()
extern "C" String_t* DataColumn_get_Namespace_m3727 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Namespace(System.String)
extern "C" void DataColumn_set_Namespace_m3728 (DataColumn_t858 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::get_Ordinal()
extern "C" int32_t DataColumn_get_Ordinal_m3729 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Ordinal(System.Int32)
extern "C" void DataColumn_set_Ordinal_m3730 (DataColumn_t858 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::get_Prefix()
extern "C" String_t* DataColumn_get_Prefix_m3731 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Prefix(System.String)
extern "C" void DataColumn_set_Prefix_m3732 (DataColumn_t858 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_ReadOnly()
extern "C" bool DataColumn_get_ReadOnly_m3733 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_ReadOnly(System.Boolean)
extern "C" void DataColumn_set_ReadOnly_m3734 (DataColumn_t858 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataTable System.Data.DataColumn::get_Table()
extern "C" DataTable_t296 * DataColumn_get_Table_m3735 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::get_Unique()
extern "C" bool DataColumn_get_Unique_m3736 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::set_Unique(System.Boolean)
extern "C" void DataColumn_set_Unique_m3737 (DataColumn_t858 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.Common.DataContainer System.Data.DataColumn::get_DataContainer()
extern "C" DataContainer_t909 * DataColumn_get_DataContainer_m3738 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::CanAutoIncrement(System.Type)
extern "C" bool DataColumn_CanAutoIncrement_m3739 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn System.Data.DataColumn::Clone()
extern "C" DataColumn_t858 * DataColumn_Clone_m3740 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetUnique()
extern "C" void DataColumn_SetUnique_m3741 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::OnPropertyChanging(System.ComponentModel.PropertyChangedEventArgs)
extern "C" void DataColumn_OnPropertyChanging_m3742 (DataColumn_t858 * __this, PropertyChangedEventArgs_t1099 * ___pcevent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::RaisePropertyChanging(System.String)
extern "C" void DataColumn_RaisePropertyChanging_m3743 (DataColumn_t858 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.DataColumn::ToString()
extern "C" String_t* DataColumn_ToString_m3744 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DataColumn::SetTable(System.Data.DataTable)
extern "C" void DataColumn_SetTable_m3745 (DataColumn_t858 * __this, DataTable_t296 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::AreColumnSetsTheSame(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C" bool DataColumn_AreColumnSetsTheSame_m3746 (Object_t * __this /* static, unused */, DataColumnU5BU5D_t920* ___columnSet, DataColumnU5BU5D_t920* ___compareSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Data.DataColumn::CompareValues(System.Int32,System.Int32)
extern "C" int32_t DataColumn_CompareValues_m3747 (DataColumn_t858 * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataColumn::GetParentRelation()
extern "C" DataRelation_t921 * DataColumn_GetParentRelation_m3748 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataRelation System.Data.DataColumn::GetChildRelation()
extern "C" DataRelation_t921 * DataColumn_GetChildRelation_m3749 (DataColumn_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DataColumn::DataTypeMatches(System.Data.DataColumn)
extern "C" bool DataColumn_DataTypeMatches_m3750 (DataColumn_t858 * __this, DataColumn_t858 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.DataColumn::GetDefaultValueForType(System.Type)
extern "C" Object_t * DataColumn_GetDefaultValueForType_m3751 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
