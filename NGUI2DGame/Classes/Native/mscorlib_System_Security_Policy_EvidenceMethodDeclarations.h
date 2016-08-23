#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t913;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Reflection.Assembly
struct Assembly_t1120;

// System.Void System.Security.Policy.Evidence::.ctor()
extern "C" void Evidence__ctor_m18347 (Evidence_t2406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::.ctor(System.Security.Policy.Evidence)
extern "C" void Evidence__ctor_m18348 (Evidence_t2406 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::get_Count()
extern "C" int32_t Evidence_get_Count_m18349 (Evidence_t2406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence::get_SyncRoot()
extern "C" Object_t * Evidence_get_SyncRoot_m18350 (Evidence_t2406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_HostEvidenceList()
extern "C" ArrayList_t913 * Evidence_get_HostEvidenceList_m18351 (Evidence_t2406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.Policy.Evidence::get_AssemblyEvidenceList()
extern "C" ArrayList_t913 * Evidence_get_AssemblyEvidenceList_m18352 (Evidence_t2406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::AddAssembly(System.Object)
extern "C" void Evidence_AddAssembly_m18353 (Evidence_t2406 * __this, Object_t * ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::AddHost(System.Object)
extern "C" void Evidence_AddHost_m18354 (Evidence_t2406 * __this, Object_t * ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::CopyTo(System.Array,System.Int32)
extern "C" void Evidence_CopyTo_m18355 (Evidence_t2406 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::Equals(System.Object)
extern "C" bool Evidence_Equals_m18356 (Evidence_t2406 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetEnumerator()
extern "C" Object_t * Evidence_GetEnumerator_m18357 (Evidence_t2406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.Evidence::GetHashCode()
extern "C" int32_t Evidence_GetHashCode_m18358 (Evidence_t2406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Policy.Evidence::GetHostEnumerator()
extern "C" Object_t * Evidence_GetHostEnumerator_m18359 (Evidence_t2406 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::Merge(System.Security.Policy.Evidence)
extern "C" void Evidence_Merge_m18360 (Evidence_t2406 * __this, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence::IsAuthenticodePresent(System.Reflection.Assembly)
extern "C" bool Evidence_IsAuthenticodePresent_m18361 (Object_t * __this /* static, unused */, Assembly_t1120 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.Policy.Evidence::GetDefaultHostEvidence(System.Reflection.Assembly)
extern "C" Evidence_t2406 * Evidence_GetDefaultHostEvidence_m18362 (Object_t * __this /* static, unused */, Assembly_t1120 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
