#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ComponentInfo
struct ComponentInfo_t1928;
// System.ComponentModel.IComponent
struct IComponent_t1198;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1883;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t936;

// System.Void System.ComponentModel.ComponentInfo::.ctor(System.ComponentModel.IComponent)
extern "C" void ComponentInfo__ctor_m10732 (ComponentInfo_t1928 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.ComponentInfo::GetAttributes()
extern "C" AttributeCollection_t1883 * ComponentInfo_GetAttributes_m10733 (ComponentInfo_t1928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t936 * ComponentInfo_GetProperties_m10734 (ComponentInfo_t1928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
