#pragma once
#include <stdint.h>
// System.Data.IDbCommand
struct IDbCommand_t1017;
// System.Data.Common.DataAdapter
#include "System_Data_System_Data_Common_DataAdapter.h"
// System.Data.Common.DbDataAdapter
struct  DbDataAdapter_t971  : public DataAdapter_t989
{
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_selectCommand
	Object_t * ____selectCommand_5;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_updateCommand
	Object_t * ____updateCommand_6;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_deleteCommand
	Object_t * ____deleteCommand_7;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_insertCommand
	Object_t * ____insertCommand_8;
};
