#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t1914;
// System.Attribute[]
struct AttributeU5BU5D_t1913;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1883;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t794;
// System.Object
struct Object_t;

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C" void MemberDescriptor__ctor_m10586 (MemberDescriptor_t1914 * __this, String_t* ___name, AttributeU5BU5D_t1913* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C" AttributeU5BU5D_t1913* MemberDescriptor_get_AttributeArray_m10587 (MemberDescriptor_t1914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C" void MemberDescriptor_FillAttributes_m10588 (MemberDescriptor_t1914 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C" AttributeCollection_t1883 * MemberDescriptor_get_Attributes_m10589 (MemberDescriptor_t1914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C" AttributeCollection_t1883 * MemberDescriptor_CreateAttributeCollection_m10590 (MemberDescriptor_t1914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C" String_t* MemberDescriptor_get_Name_m10591 (MemberDescriptor_t1914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C" int32_t MemberDescriptor_GetHashCode_m10592 (MemberDescriptor_t1914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C" bool MemberDescriptor_Equals_m10593 (MemberDescriptor_t1914 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
