#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t2407;
// System.Object
struct Object_t;
// System.Security.Policy.PolicyLevel
struct PolicyLevel_t2802;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t2811;
// System.Array
struct Array_t;
// System.Security.SecurityElement
struct SecurityElement_t2401;
// System.Collections.IEnumerator
struct IEnumerator_t288;
// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Security.Permissions.PermissionState
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.PermissionSet::.ctor()
extern "C" void PermissionSet__ctor_m17595 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.Permissions.PermissionState)
extern "C" void PermissionSet__ctor_m17596 (PermissionSet_t2407 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.Security.PermissionSet)
extern "C" void PermissionSet__ctor_m17597 (PermissionSet_t2407 * __this, PermissionSet_t2407 * ___permSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C" void PermissionSet__ctor_m17598 (PermissionSet_t2407 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.cctor()
extern "C" void PermissionSet__cctor_m17599 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void PermissionSet_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m17600 (PermissionSet_t2407 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::AddPermission(System.Security.IPermission)
extern "C" Object_t * PermissionSet_AddPermission_m17601 (PermissionSet_t2407 * __this, Object_t * ___perm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Copy()
extern "C" PermissionSet_t2407 * PermissionSet_Copy_m17602 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::CopyTo(System.Array,System.Int32)
extern "C" void PermissionSet_CopyTo_m17603 (PermissionSet_t2407 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::Demand()
extern "C" void PermissionSet_Demand_m17604 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::FromXml(System.Security.SecurityElement)
extern "C" void PermissionSet_FromXml_m17605 (PermissionSet_t2407 * __this, SecurityElement_t2401 * ___et, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.PermissionSet::GetEnumerator()
extern "C" Object_t * PermissionSet_GetEnumerator_m17606 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsSubsetOf(System.Security.PermissionSet)
extern "C" bool PermissionSet_IsSubsetOf_m17607 (PermissionSet_t2407 * __this, PermissionSet_t2407 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::GetPermission(System.Type)
extern "C" Object_t * PermissionSet_GetPermission_m17608 (PermissionSet_t2407 * __this, Type_t * ___permClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Intersect(System.Security.PermissionSet)
extern "C" PermissionSet_t2407 * PermissionSet_Intersect_m17609 (PermissionSet_t2407 * __this, PermissionSet_t2407 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::InternalIntersect(System.Security.PermissionSet,System.Security.PermissionSet,System.Security.PermissionSet,System.Boolean)
extern "C" void PermissionSet_InternalIntersect_m17610 (PermissionSet_t2407 * __this, PermissionSet_t2407 * ___intersect, PermissionSet_t2407 * ___a, PermissionSet_t2407 * ___b, bool ___unrestricted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsEmpty()
extern "C" bool PermissionSet_IsEmpty_m17611 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::IsUnrestricted()
extern "C" bool PermissionSet_IsUnrestricted_m17612 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::RemovePermission(System.Type)
extern "C" Object_t * PermissionSet_RemovePermission_m17613 (PermissionSet_t2407 * __this, Type_t * ___permClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.PermissionSet::ToString()
extern "C" String_t* PermissionSet_ToString_m17614 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.PermissionSet::ToXml()
extern "C" SecurityElement_t2401 * PermissionSet_ToXml_m17615 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::Union(System.Security.PermissionSet)
extern "C" PermissionSet_t2407 * PermissionSet_Union_m17616 (PermissionSet_t2407 * __this, PermissionSet_t2407 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::get_Count()
extern "C" int32_t PermissionSet_get_Count_m17617 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.PermissionSet::get_SyncRoot()
extern "C" Object_t * PermissionSet_get_SyncRoot_m17618 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C" void PermissionSet_set_DeclarativeSecurity_m17619 (PermissionSet_t2407 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.PermissionSet::Equals(System.Object)
extern "C" bool PermissionSet_Equals_m17620 (PermissionSet_t2407 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::GetHashCode()
extern "C" int32_t PermissionSet_GetHashCode_m17621 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Policy.PolicyLevel System.Security.PermissionSet::get_Resolver()
extern "C" PolicyLevel_t2802 * PermissionSet_get_Resolver_m17622 (PermissionSet_t2407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_Resolver(System.Security.Policy.PolicyLevel)
extern "C" void PermissionSet_set_Resolver_m17623 (PermissionSet_t2407 * __this, PolicyLevel_t2802 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::SetReadOnly(System.Boolean)
extern "C" void PermissionSet_SetReadOnly_m17624 (PermissionSet_t2407 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C" PermissionSet_t2407 * PermissionSet_CreateFromBinaryFormat_m17625 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.PermissionSet::ReadEncodedInt(System.Byte[],System.Int32&)
extern "C" int32_t PermissionSet_ReadEncodedInt_m17626 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___data, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.PermissionSet::ProcessAttribute(System.Byte[],System.Int32&)
extern "C" Object_t * PermissionSet_ProcessAttribute_m17627 (Object_t * __this /* static, unused */, ByteU5BU5D_t159* ___data, int32_t* ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
