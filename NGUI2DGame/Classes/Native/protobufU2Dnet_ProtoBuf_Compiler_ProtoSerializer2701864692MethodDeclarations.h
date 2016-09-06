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

// ProtoBuf.Compiler.ProtoSerializer
struct ProtoSerializer_t2701864692;
// System.Object
struct Il2CppObject;
// ProtoBuf.ProtoWriter
struct ProtoWriter_t2800220307;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "protobufU2Dnet_ProtoBuf_ProtoWriter2800220307.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void ProtoBuf.Compiler.ProtoSerializer::.ctor(System.Object,System.IntPtr)
extern "C"  void ProtoSerializer__ctor_m2451487906 (ProtoSerializer_t2701864692 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.ProtoSerializer::Invoke(System.Object,ProtoBuf.ProtoWriter)
extern "C"  void ProtoSerializer_Invoke_m2555967194 (ProtoSerializer_t2701864692 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult ProtoBuf.Compiler.ProtoSerializer::BeginInvoke(System.Object,ProtoBuf.ProtoWriter,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ProtoSerializer_BeginInvoke_m1939003585 (ProtoSerializer_t2701864692 * __this, Il2CppObject * ___value0, ProtoWriter_t2800220307 * ___dest1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.Compiler.ProtoSerializer::EndInvoke(System.IAsyncResult)
extern "C"  void ProtoSerializer_EndInvoke_m1688995648 (ProtoSerializer_t2701864692 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
