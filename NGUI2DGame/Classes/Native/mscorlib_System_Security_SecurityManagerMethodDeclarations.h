#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityManager
struct SecurityManager_t2814;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;
// System.Reflection.Assembly
struct Assembly_t1120;
// System.Security.IPermission
struct IPermission_t2811;
// System.Security.PermissionSet
struct PermissionSet_t2407;
// System.Security.Policy.Evidence
struct Evidence_t2406;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Reflection.MethodBase
struct MethodBase_t728;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.RuntimeDeclSecurityActions
#include "mscorlib_System_Security_RuntimeDeclSecurityActions.h"

// System.Void System.Security.SecurityManager::.cctor()
extern "C" void SecurityManager__cctor_m17674 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_CheckExecutionRights()
extern "C" bool SecurityManager_get_CheckExecutionRights_m17675 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C" bool SecurityManager_get_SecurityEnabled_m17676 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::IsGranted(System.Reflection.Assembly,System.Security.IPermission)
extern "C" bool SecurityManager_IsGranted_m17677 (Object_t * __this /* static, unused */, Assembly_t1120 * ___a, Object_t * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityManager::CheckPermissionSet(System.Reflection.Assembly,System.Security.PermissionSet,System.Boolean)
extern "C" Object_t * SecurityManager_CheckPermissionSet_m17678 (Object_t * __this /* static, unused */, Assembly_t1120 * ___a, PermissionSet_t2407 * ___ps, bool ___noncas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence)
extern "C" PermissionSet_t2407 * SecurityManager_ResolvePolicy_m17679 (Object_t * __this /* static, unused */, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::ResolvePolicy(System.Security.Policy.Evidence,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet&)
extern "C" PermissionSet_t2407 * SecurityManager_ResolvePolicy_m17680 (Object_t * __this /* static, unused */, Evidence_t2406 * ___evidence, PermissionSet_t2407 * ___reqdPset, PermissionSet_t2407 * ___optPset, PermissionSet_t2407 * ___denyPset, PermissionSet_t2407 ** ___denied, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.SecurityManager::get_Hierarchy()
extern "C" Object_t * SecurityManager_get_Hierarchy_m17681 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::InitializePolicyHierarchy()
extern "C" void SecurityManager_InitializePolicyHierarchy_m17682 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ResolvePolicyLevel(System.Security.PermissionSet&,System.Security.Policy.PolicyLevel,System.Security.Policy.Evidence)
extern "C" bool SecurityManager_ResolvePolicyLevel_m17683 (Object_t * __this /* static, unused */, PermissionSet_t2407 ** ___ps, PolicyLevel_t2802 * ___pl, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ResolveIdentityPermissions(System.Security.PermissionSet,System.Security.Policy.Evidence)
extern "C" void SecurityManager_ResolveIdentityPermissions_m17684 (Object_t * __this /* static, unused */, PermissionSet_t2407 * ___ps, Evidence_t2406 * ___evidence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.SecurityManager::get_ResolvingPolicyLevel()
extern "C" PolicyLevel_t2802 * SecurityManager_get_ResolvingPolicyLevel_m17685 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::set_ResolvingPolicyLevel(System.Security.Policy.PolicyLevel)
extern "C" void SecurityManager_set_ResolvingPolicyLevel_m17686 (Object_t * __this /* static, unused */, PolicyLevel_t2802 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.IntPtr,System.Int32)
extern "C" PermissionSet_t2407 * SecurityManager_Decode_m17687 (Object_t * __this /* static, unused */, IntPtr_t ___permissions, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.SecurityManager::Decode(System.Byte[])
extern "C" PermissionSet_t2407 * SecurityManager_Decode_m17688 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___encodedPermissions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::GetLinkDemandSecurity(System.Reflection.MethodBase,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C" bool SecurityManager_GetLinkDemandSecurity_m17689 (Object_t * __this /* static, unused */, MethodBase_t728 * ___method, RuntimeDeclSecurityActions_t2812 * ___cdecl, RuntimeDeclSecurityActions_t2812 * ___mdecl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityManager::ReflectedLinkDemandInvoke(System.Reflection.MethodBase)
extern "C" void SecurityManager_ReflectedLinkDemandInvoke_m17690 (Object_t * __this /* static, unused */, MethodBase_t728 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::ReflectedLinkDemandQuery(System.Reflection.MethodBase)
extern "C" bool SecurityManager_ReflectedLinkDemandQuery_m17691 (Object_t * __this /* static, unused */, MethodBase_t728 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::LinkDemand(System.Reflection.Assembly,System.Security.RuntimeDeclSecurityActions*,System.Security.RuntimeDeclSecurityActions*)
extern "C" bool SecurityManager_LinkDemand_m17692 (Object_t * __this /* static, unused */, Assembly_t1120 * ___a, RuntimeDeclSecurityActions_t2812 * ___klass, RuntimeDeclSecurityActions_t2812 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
