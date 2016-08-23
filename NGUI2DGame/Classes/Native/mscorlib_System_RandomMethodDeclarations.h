#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Random
struct Random_t555;
// System.Byte[]
struct ByteU5BU5D_t159;

// System.Void System.Random::.ctor()
extern "C" void Random__ctor_m10282 (Random_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor(System.Int32)
extern "C" void Random__ctor_m3211 (Random_t555 * __this, int32_t ___Seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::Sample()
extern "C" double Random_Sample_m15172 (Random_t555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32,System.Int32)
extern "C" int32_t Random_Next_m15173 (Random_t555 * __this, int32_t ___minValue, int32_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::NextBytes(System.Byte[])
extern "C" void Random_NextBytes_m15174 (Random_t555 * __this, ByteU5BU5D_t159* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
