#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.EvaluateException
struct EvaluateException_t945;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Data.EvaluateException::.ctor()
extern "C" void EvaluateException__ctor_m4103 (EvaluateException_t945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.EvaluateException::.ctor(System.String)
extern "C" void EvaluateException__ctor_m4104 (EvaluateException_t945 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.EvaluateException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void EvaluateException__ctor_m4105 (EvaluateException_t945 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
