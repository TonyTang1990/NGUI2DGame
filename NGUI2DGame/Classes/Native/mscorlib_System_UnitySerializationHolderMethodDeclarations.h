#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t2500;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t669;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1118;
// System.Reflection.Assembly
struct Assembly_t1120;
// System.Reflection.Module
struct Module_t2595;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m15313 (UnitySerializationHolder_t2500 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m15314 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t669 * ___info, StreamingContext_t670  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m15315 (Object_t * __this /* static, unused */, DBNull_t1118 * ___instance, SerializationInfo_t669 * ___info, StreamingContext_t670  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetAssemblyData(System.Reflection.Assembly,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetAssemblyData_m15316 (Object_t * __this /* static, unused */, Assembly_t1120 * ___instance, SerializationInfo_t669 * ___info, StreamingContext_t670  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m15317 (Object_t * __this /* static, unused */, Module_t2595 * ___instance, SerializationInfo_t669 * ___info, StreamingContext_t670  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m15318 (UnitySerializationHolder_t2500 * __this, SerializationInfo_t669 * ___info, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m15319 (UnitySerializationHolder_t2500 * __this, StreamingContext_t670  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
