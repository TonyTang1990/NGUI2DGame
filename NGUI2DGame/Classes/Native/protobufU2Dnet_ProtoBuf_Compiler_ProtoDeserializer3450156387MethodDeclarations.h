#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// ProtoBuf.Compiler.ProtoDeserializer
struct ProtoDeserializer_t3450156387;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoReader
struct ProtoReader_t3981212867;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "protobufU2Dnet_ProtoBuf_ProtoReader3981212867.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ProtoBuf.Compiler.ProtoDeserializer::.ctor(System.Object,System.IntPtr)
extern "C"  void ProtoDeserializer__ctor_m3034458645 (ProtoDeserializer_t3450156387 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Compiler.ProtoDeserializer::Invoke(System.Object,ProtoBuf.ProtoReader)
extern "C"  Il2CppObject * ProtoDeserializer_Invoke_m1745685860 (ProtoDeserializer_t3450156387 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ProtoBuf.Compiler.ProtoDeserializer::BeginInvoke(System.Object,ProtoBuf.ProtoReader,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ProtoDeserializer_BeginInvoke_m1933503662 (ProtoDeserializer_t3450156387 * __this, Il2CppObject * ___value0, ProtoReader_t3981212867 * ___source1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ProtoBuf.Compiler.ProtoDeserializer::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * ProtoDeserializer_EndInvoke_m2997385410 (ProtoDeserializer_t3450156387 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
