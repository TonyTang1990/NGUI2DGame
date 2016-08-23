#pragma once
#include <stdint.h>
// System.Data.DataTable
struct DataTable_t296;
// System.Collections.Hashtable
struct Hashtable_t915;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Data.DataColumn
struct DataColumn_t858;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.TableStructure
struct  TableStructure_t1047  : public Object_t
{
	// System.Data.DataTable System.Data.TableStructure::Table
	DataTable_t296 * ___Table_0;
	// System.Collections.Hashtable System.Data.TableStructure::OrdinalColumns
	Hashtable_t915 * ___OrdinalColumns_1;
	// System.Collections.ArrayList System.Data.TableStructure::NonOrdinalColumns
	ArrayList_t913 * ___NonOrdinalColumns_2;
	// System.Data.DataColumn System.Data.TableStructure::PrimaryKey
	DataColumn_t858 * ___PrimaryKey_3;
};
