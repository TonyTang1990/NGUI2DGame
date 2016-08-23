#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.Common.DataColumnMapping
struct DataColumnMapping_t992;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Data.Common.DataColumnMapping::.ctor(System.String,System.String)
extern "C" void DataColumnMapping__ctor_m4281 (DataColumnMapping_t992 * __this, String_t* ___sourceColumn, String_t* ___dataSetColumn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Data.Common.DataColumnMapping::System.ICloneable.Clone()
extern "C" Object_t * DataColumnMapping_System_ICloneable_Clone_m4282 (DataColumnMapping_t992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataColumnMapping::get_DataSetColumn()
extern "C" String_t* DataColumnMapping_get_DataSetColumn_m4283 (DataColumnMapping_t992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataColumnMapping::get_SourceColumn()
extern "C" String_t* DataColumnMapping_get_SourceColumn_m4284 (DataColumnMapping_t992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Data.Common.DataColumnMapping::ToString()
extern "C" String_t* DataColumnMapping_ToString_m4285 (DataColumnMapping_t992 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
