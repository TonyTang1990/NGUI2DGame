#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.HostSecurityManager
struct HostSecurityManager_t2798;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Reflection.Assembly
struct Assembly_t1120;
// System.Security.HostSecurityManagerOptions
#include "mscorlib_System_Security_HostSecurityManagerOptions.h"

// System.Void System.Security.HostSecurityManager::.ctor()
extern "C" void HostSecurityManager__ctor_m17576 (HostSecurityManager_t2798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.HostSecurityManagerOptions System.Security.HostSecurityManager::get_Flags()
extern "C" int32_t HostSecurityManager_get_Flags_m17577 (HostSecurityManager_t2798 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.Evidence System.Security.HostSecurityManager::ProvideAssemblyEvidence(System.Reflection.Assembly,System.Security.Policy.Evidence)
extern "C" Evidence_t2406 * HostSecurityManager_ProvideAssemblyEvidence_m17578 (HostSecurityManager_t2798 * __this, Assembly_t1120 * ___loadedAssembly, Evidence_t2406 * ___inputEvidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
