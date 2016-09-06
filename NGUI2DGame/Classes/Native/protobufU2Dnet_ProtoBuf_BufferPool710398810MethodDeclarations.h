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

// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"

// System.Byte[] ProtoBuf.BufferPool::GetBuffer()
extern "C"  ByteU5BU5D_t3397334013* BufferPool_GetBuffer_m3732834373 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BufferPool::ResizeAndFlushLeft(System.Byte[]&,System.Int32,System.Int32,System.Int32)
extern "C"  void BufferPool_ResizeAndFlushLeft_m3855590401 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013** ___buffer0, int32_t ___toFitAtLeastBytes1, int32_t ___copyFromIndex2, int32_t ___copyBytes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BufferPool::ReleaseBufferToPool(System.Byte[]&)
extern "C"  void BufferPool_ReleaseBufferToPool_m2010456868 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013** ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProtoBuf.BufferPool::.cctor()
extern "C"  void BufferPool__cctor_m2501122072 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
