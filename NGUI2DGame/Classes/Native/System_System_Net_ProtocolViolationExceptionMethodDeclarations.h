#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ProtocolViolationException
struct ProtocolViolationException_t2052;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.ProtocolViolationException::.ctor()
extern "C" void ProtocolViolationException__ctor_m11501 (ProtocolViolationException_t2052 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.String)
extern "C" void ProtocolViolationException__ctor_m11502 (ProtocolViolationException_t2052 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException__ctor_m11503 (ProtocolViolationException_t2052 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_System_Runtime_Serialization_ISerializable_GetObjectData_m11504 (ProtocolViolationException_t2052 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ProtocolViolationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ProtocolViolationException_GetObjectData_m11505 (ProtocolViolationException_t2052 * __this, SerializationInfo_t669 * ___serializationInfo, StreamingContext_t670  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
