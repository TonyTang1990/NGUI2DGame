#pragma once
#include <stdint.h>
// System.Data.DataTable
struct DataTable_t296;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Data.TableMapping
struct TableMapping_t977;
// System.Data.TableMappingCollection
struct TableMappingCollection_t975;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.TableMapping
struct  TableMapping_t977  : public Object_t
{
	// System.Boolean System.Data.TableMapping::existsInDataSet
	bool ___existsInDataSet_0;
	// System.Data.DataTable System.Data.TableMapping::Table
	DataTable_t296 * ___Table_1;
	// System.Collections.ArrayList System.Data.TableMapping::Elements
	ArrayList_t913 * ___Elements_2;
	// System.Collections.ArrayList System.Data.TableMapping::Attributes
	ArrayList_t913 * ___Attributes_3;
	// System.Data.DataColumn System.Data.TableMapping::SimpleContent
	DataColumn_t858 * ___SimpleContent_4;
	// System.Data.DataColumn System.Data.TableMapping::PrimaryKey
	DataColumn_t858 * ___PrimaryKey_5;
	// System.Data.DataColumn System.Data.TableMapping::ReferenceKey
	DataColumn_t858 * ___ReferenceKey_6;
	// System.Int32 System.Data.TableMapping::lastElementIndex
	int32_t ___lastElementIndex_7;
	// System.Data.TableMapping System.Data.TableMapping::ParentTable
	TableMapping_t977 * ___ParentTable_8;
	// System.Data.TableMappingCollection System.Data.TableMapping::ChildTables
	TableMappingCollection_t975 * ___ChildTables_9;
};
