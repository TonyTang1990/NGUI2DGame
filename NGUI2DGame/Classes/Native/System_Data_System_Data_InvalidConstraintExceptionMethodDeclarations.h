#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.InvalidConstraintException
struct InvalidConstraintException_t948;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Data.InvalidConstraintException::.ctor()
extern "C" void InvalidConstraintException__ctor_m4138 (InvalidConstraintException_t948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.InvalidConstraintException::.ctor(System.String)
extern "C" void InvalidConstraintException__ctor_m4139 (InvalidConstraintException_t948 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.InvalidConstraintException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void InvalidConstraintException__ctor_m4140 (InvalidConstraintException_t948 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
