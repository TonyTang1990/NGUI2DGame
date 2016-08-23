#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.TypeInfo
struct TypeInfo_t1929;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1883;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t936;

// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m10735 (TypeInfo_t1929 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C" AttributeCollection_t1883 * TypeInfo_GetAttributes_m10736 (TypeInfo_t1929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t936 * TypeInfo_GetProperties_m10737 (TypeInfo_t1929 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
