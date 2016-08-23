#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ExpandableObjectConverter
struct ExpandableObjectConverter_t894;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t936;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1096;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t1913;

// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ExpandableObjectConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t936 * ExpandableObjectConverter_GetProperties_m5370 (ExpandableObjectConverter_t894 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ExpandableObjectConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ExpandableObjectConverter_GetPropertiesSupported_m5371 (ExpandableObjectConverter_t894 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
