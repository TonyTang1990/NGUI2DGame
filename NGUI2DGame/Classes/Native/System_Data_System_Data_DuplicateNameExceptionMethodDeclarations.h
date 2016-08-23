#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DuplicateNameException
struct DuplicateNameException_t944;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Data.DuplicateNameException::.ctor()
extern "C" void DuplicateNameException__ctor_m4100 (DuplicateNameException_t944 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DuplicateNameException::.ctor(System.String)
extern "C" void DuplicateNameException__ctor_m4101 (DuplicateNameException_t944 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.DuplicateNameException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DuplicateNameException__ctor_m4102 (DuplicateNameException_t944 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
