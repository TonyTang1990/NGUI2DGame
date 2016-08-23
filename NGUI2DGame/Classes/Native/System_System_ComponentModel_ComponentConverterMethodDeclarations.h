#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ComponentConverter
struct ComponentConverter_t1890;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t936;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1096;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t1913;

// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t936 * ComponentConverter_GetProperties_m10459 (ComponentConverter_t1890 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ComponentConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ComponentConverter_GetPropertiesSupported_m10460 (ComponentConverter_t1890 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
