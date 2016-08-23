#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SqlTypes.SqlTypeException
struct SqlTypeException_t1040;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Data.SqlTypes.SqlTypeException::.ctor()
extern "C" void SqlTypeException__ctor_m4733 (SqlTypeException_t1040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.String)
extern "C" void SqlTypeException__ctor_m4734 (SqlTypeException_t1040 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlTypeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SqlTypeException__ctor_m4735 (SqlTypeException_t1040 * __this, SerializationInfo_t669 * ___si, StreamingContext_t670  ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SqlTypes.SqlTypeException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SqlTypeException_System_Runtime_Serialization_ISerializable_GetObjectData_m4736 (SqlTypeException_t1040 * __this, SerializationInfo_t669 * ___si, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
