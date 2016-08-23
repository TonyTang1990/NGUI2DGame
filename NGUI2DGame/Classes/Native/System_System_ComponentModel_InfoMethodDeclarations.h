#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.Info
struct Info_t1927;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1883;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t936;
// System.Attribute[]
struct AttributeU5BU5D_t1913;
// System.ComponentModel.IComponent
struct IComponent_t1198;

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C" void Info__ctor_m10728 (Info_t1927 * __this, Type_t * ___infoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes()
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties()
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C" Type_t * Info_get_InfoType_m10729 (Info_t1927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t936 * Info_GetProperties_m10730 (Info_t1927 * __this, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C" AttributeCollection_t1883 * Info_GetAttributes_m10731 (Info_t1927 * __this, Object_t * ___comp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
