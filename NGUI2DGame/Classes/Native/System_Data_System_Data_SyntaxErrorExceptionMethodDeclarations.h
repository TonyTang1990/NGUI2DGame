#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.SyntaxErrorException
struct SyntaxErrorException_t963;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Data.SyntaxErrorException::.ctor()
extern "C" void SyntaxErrorException__ctor_m4173 (SyntaxErrorException_t963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SyntaxErrorException::.ctor(System.String)
extern "C" void SyntaxErrorException__ctor_m4174 (SyntaxErrorException_t963 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Data.SyntaxErrorException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SyntaxErrorException__ctor_m4175 (SyntaxErrorException_t963 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
