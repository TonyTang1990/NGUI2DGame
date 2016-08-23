#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.MergeManager
struct MergeManager_t951;
// System.Data.DataSet
struct DataSet_t346;
// System.Data.DataTable
struct DataTable_t296;
// System.Data.DataRow
struct DataRow_t352;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t920;
// System.String
struct String_t;
// System.Data.MissingSchemaAction
#include "System_Data_System_Data_MissingSchemaAction.h"

// System.Void System.Data.MergeManager::Merge(System.Data.DataSet,System.Data.DataSet,System.Boolean,System.Data.MissingSchemaAction)
extern "C" void MergeManager_Merge_m4146 (Object_t * __this /* static, unused */, DataSet_t346 * ___targetSet, DataSet_t346 * ___sourceSet, bool ___preserveChanges, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::Merge(System.Data.DataSet,System.Data.DataTable,System.Boolean,System.Data.MissingSchemaAction)
extern "C" void MergeManager_Merge_m4147 (Object_t * __this /* static, unused */, DataSet_t346 * ___targetSet, DataTable_t296 * ___sourceTable, bool ___preserveChanges, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::MergeRow(System.Data.DataTable,System.Data.DataRow,System.Boolean)
extern "C" void MergeManager_MergeRow_m4148 (Object_t * __this /* static, unused */, DataTable_t296 * ___targetTable, DataRow_t352 * ___row, bool ___preserveChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchemaRelations(System.Data.DataSet,System.Data.DataSet,System.Data.MissingSchemaAction)
extern "C" bool MergeManager_AdjustSchemaRelations_m4149 (Object_t * __this /* static, unused */, DataSet_t346 * ___targetSet, DataSet_t346 * ___sourceSet, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Data.DataColumn[] System.Data.MergeManager::ResolveColumns(System.Data.DataTable,System.Data.DataColumn[])
extern "C" DataColumnU5BU5D_t920* MergeManager_ResolveColumns_m4150 (Object_t * __this /* static, unused */, DataTable_t296 * ___targetTable, DataColumnU5BU5D_t920* ___sourceColumns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchema(System.Data.DataSet,System.Data.DataTable,System.Data.MissingSchemaAction,System.Data.DataTable&)
extern "C" bool MergeManager_AdjustSchema_m4151 (Object_t * __this /* static, unused */, DataSet_t346 * ___targetSet, DataTable_t296 * ___sourceTable, int32_t ___missingSchemaAction, DataTable_t296 ** ___newTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustSchema(System.Data.DataTable,System.Data.DataTable,System.Data.MissingSchemaAction)
extern "C" bool MergeManager_AdjustSchema_m4152 (Object_t * __this /* static, unused */, DataTable_t296 * ___targetTable, DataTable_t296 * ___sourceTable, int32_t ___missingSchemaAction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::AdjustPrimaryKeys(System.Data.DataTable,System.Data.DataTable)
extern "C" bool MergeManager_AdjustPrimaryKeys_m4153 (Object_t * __this /* static, unused */, DataTable_t296 * ___targetTable, DataTable_t296 * ___sourceTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::fillData(System.Data.DataTable,System.Data.DataTable,System.Boolean)
extern "C" void MergeManager_fillData_m4154 (Object_t * __this /* static, unused */, DataTable_t296 * ___targetTable, DataTable_t296 * ___sourceTable, bool ___preserveChanges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::checkColumnTypes(System.Data.DataTable,System.Data.DataTable)
extern "C" void MergeManager_checkColumnTypes_m4155 (Object_t * __this /* static, unused */, DataTable_t296 * ___targetTable, DataTable_t296 * ___sourceTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.MergeManager::CompareColumnArrays(System.Data.DataColumn[],System.Data.DataColumn[])
extern "C" bool MergeManager_CompareColumnArrays_m4156 (Object_t * __this /* static, unused */, DataColumnU5BU5D_t920* ___arr1, DataColumnU5BU5D_t920* ___arr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.MergeManager::RaiseMergeFailedEvent(System.Data.DataTable,System.String)
extern "C" void MergeManager_RaiseMergeFailedEvent_m4157 (Object_t * __this /* static, unused */, DataTable_t296 * ___targetTable, String_t* ___errMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
