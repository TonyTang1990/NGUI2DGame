#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.ConstraintException
struct ConstraintException_t904;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Data.ConstraintException::.ctor()
extern "C" void ConstraintException__ctor_m3683 (ConstraintException_t904 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintException::.ctor(System.String)
extern "C" void ConstraintException__ctor_m3684 (ConstraintException_t904 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.ConstraintException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ConstraintException__ctor_m3685 (ConstraintException_t904 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
