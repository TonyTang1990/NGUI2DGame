#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.DerivedType
struct DerivedType_t2628;
// System.Reflection.Assembly
struct Assembly_t1120;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t2595;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t570;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t722;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Binder
struct Binder_t725;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t726;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2598;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t721;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t574;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t717;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t300;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.String[]
struct StringU5BU5D_t258;
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"

// System.Void System.Reflection.Emit.DerivedType::.ctor(System.Type)
extern "C" void DerivedType__ctor_m16607 (DerivedType_t2628 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.DerivedType::create_unmanaged_type(System.Type)
extern "C" void DerivedType_create_unmanaged_type_m16608 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::FormatName(System.String)
// System.Type[] System.Reflection.Emit.DerivedType::GetInterfaces()
extern "C" TypeU5BU5D_t570* DerivedType_GetInterfaces_m16609 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::GetElementType()
extern "C" Type_t * DerivedType_GetElementType_m16610 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.DerivedType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * DerivedType_GetEvent_m16611 (DerivedType_t2628 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.DerivedType::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * DerivedType_GetField_m16612 (DerivedType_t2628 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.DerivedType::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t722* DerivedType_GetFields_m16613 (DerivedType_t2628 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.DerivedType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * DerivedType_GetMethodImpl_m16614 (DerivedType_t2628 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t725 * ___binder, int32_t ___callConvention, TypeU5BU5D_t570* ___types, ParameterModifierU5BU5D_t726* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.DerivedType::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t2598* DerivedType_GetMethods_m16615 (DerivedType_t2628 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.Reflection.Emit.DerivedType::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t721* DerivedType_GetProperties_m16616 (DerivedType_t2628 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.DerivedType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * DerivedType_GetPropertyImpl_m16617 (DerivedType_t2628 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t725 * ___binder, Type_t * ___returnType, TypeU5BU5D_t570* ___types, ParameterModifierU5BU5D_t726* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.DerivedType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t574 * DerivedType_GetConstructorImpl_m16618 (DerivedType_t2628 * __this, int32_t ___bindingAttr, Binder_t725 * ___binder, int32_t ___callConvention, TypeU5BU5D_t570* ___types, ParameterModifierU5BU5D_t726* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.DerivedType::GetAttributeFlagsImpl()
extern "C" int32_t DerivedType_GetAttributeFlagsImpl_m16619 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::HasElementTypeImpl()
extern "C" bool DerivedType_HasElementTypeImpl_m16620 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsArrayImpl()
extern "C" bool DerivedType_IsArrayImpl_m16621 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsByRefImpl()
extern "C" bool DerivedType_IsByRefImpl_m16622 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPointerImpl()
extern "C" bool DerivedType_IsPointerImpl_m16623 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsPrimitiveImpl()
extern "C" bool DerivedType_IsPrimitiveImpl_m16624 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.DerivedType::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t717* DerivedType_GetConstructors_m16625 (DerivedType_t2628 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.DerivedType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * DerivedType_InvokeMember_m16626 (DerivedType_t2628 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t725 * ___binder, Object_t * ___target, ObjectU5BU5D_t300* ___args, ParameterModifierU5BU5D_t726* ___modifiers, CultureInfo_t693 * ___culture, StringU5BU5D_t258* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsInstanceOfType(System.Object)
extern "C" bool DerivedType_IsInstanceOfType_m16627 (DerivedType_t2628 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsAssignableFrom(System.Type)
extern "C" bool DerivedType_IsAssignableFrom_m16628 (DerivedType_t2628 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::get_ContainsGenericParameters()
extern "C" bool DerivedType_get_ContainsGenericParameters_m16629 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeGenericType(System.Type[])
extern "C" Type_t * DerivedType_MakeGenericType_m16630 (DerivedType_t2628 * __this, TypeU5BU5D_t570* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::MakeByRefType()
extern "C" Type_t * DerivedType_MakeByRefType_m16631 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::ToString()
extern "C" String_t* DerivedType_ToString_m16632 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.DerivedType::get_Assembly()
extern "C" Assembly_t1120 * DerivedType_get_Assembly_m16633 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_AssemblyQualifiedName()
extern "C" String_t* DerivedType_get_AssemblyQualifiedName_m16634 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_FullName()
extern "C" String_t* DerivedType_get_FullName_m16635 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Name()
extern "C" String_t* DerivedType_get_Name_m16636 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.DerivedType::get_Module()
extern "C" Module_t2595 * DerivedType_get_Module_m16637 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.DerivedType::get_Namespace()
extern "C" String_t* DerivedType_get_Namespace_m16638 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.DerivedType::get_TypeHandle()
extern "C" RuntimeTypeHandle_t2303  DerivedType_get_TypeHandle_m16639 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.DerivedType::get_UnderlyingSystemType()
extern "C" Type_t * DerivedType_get_UnderlyingSystemType_m16640 (DerivedType_t2628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.DerivedType::IsDefined(System.Type,System.Boolean)
extern "C" bool DerivedType_IsDefined_m16641 (DerivedType_t2628 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t300* DerivedType_GetCustomAttributes_m16642 (DerivedType_t2628 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.DerivedType::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t300* DerivedType_GetCustomAttributes_m16643 (DerivedType_t2628 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
