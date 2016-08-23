#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t1471;
// System.AppDomainSetup
struct AppDomainSetup_t1473;
// System.String
struct String_t;
// System.AppDomainManager
struct AppDomainManager_t2409;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t2622;
// System.Reflection.AssemblyName
struct AssemblyName_t2580;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Security.PermissionSet
struct PermissionSet_t2407;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1120;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2693;
// System.Reflection.Emit.AssemblyBuilderAccess
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderAccess.h"

// System.AppDomainSetup System.AppDomain::getSetup()
extern "C" AppDomainSetup_t1473 * AppDomain_getSetup_m14483 (AppDomain_t1471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainSetup System.AppDomain::get_SetupInformation()
extern "C" AppDomainSetup_t1473 * AppDomain_get_SetupInformation_m6902 (AppDomain_t1471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m14484 (AppDomain_t1471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::get_FriendlyName()
extern "C" String_t* AppDomain_get_FriendlyName_m14485 (AppDomain_t1471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t1471 * AppDomain_getCurDomain_m14486 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t1471 * AppDomain_get_CurrentDomain_m6900 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t2622 * AppDomain_DefineDynamicAssembly_m14487 (AppDomain_t1471 * __this, AssemblyName_t2580 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess,System.String,System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C" AssemblyBuilder_t2622 * AppDomain_DefineDynamicAssembly_m14488 (AppDomain_t1471 * __this, AssemblyName_t2580 * ___name, int32_t ___access, String_t* ___dir, Evidence_t2406 * ___evidence, PermissionSet_t2407 * ___requiredPermissions, PermissionSet_t2407 * ___optionalPermissions, PermissionSet_t2407 * ___refusedPermissions, bool ___isSynchronized, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.AssemblyBuilder System.AppDomain::DefineInternalDynamicAssembly(System.Reflection.AssemblyName,System.Reflection.Emit.AssemblyBuilderAccess)
extern "C" AssemblyBuilder_t2622 * AppDomain_DefineInternalDynamicAssembly_m14489 (AppDomain_t1471 * __this, AssemblyName_t2580 * ___name, int32_t ___access, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.AppDomain::InitializeLifetimeService()
extern "C" Object_t * AppDomain_InitializeLifetimeService_m14490 (AppDomain_t1471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1120 * AppDomain_LoadAssembly_m14491 (AppDomain_t1471 * __this, String_t* ___assemblyRef, Evidence_t2406 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t1120 * AppDomain_Load_m14492 (AppDomain_t1471 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1120 * AppDomain_Load_m14493 (AppDomain_t1471 * __this, String_t* ___assemblyString, Evidence_t2406 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t2693 * AppDomain_InternalGetContext_m14494 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t2693 * AppDomain_InternalGetDefaultContext_m14495 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m14496 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m14497 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m14498 (AppDomain_t1471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::ValidateAssemblyName(System.String)
extern "C" void AppDomain_ValidateAssemblyName_m14499 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomainManager System.AppDomain::get_DomainManager()
extern "C" AppDomainManager_t2409 * AppDomain_get_DomainManager_m14500 (AppDomain_t1471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
