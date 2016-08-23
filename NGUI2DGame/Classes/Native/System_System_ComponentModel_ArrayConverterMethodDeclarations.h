#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.ArrayConverter
struct ArrayConverter_t1881;
// System.Object
struct Object_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1096;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t936;
// System.Attribute[]
struct AttributeU5BU5D_t1913;

// System.Object System.ComponentModel.ArrayConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * ArrayConverter_ConvertTo_m10408 (ArrayConverter_t1881 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ArrayConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t936 * ArrayConverter_GetProperties_m10409 (ArrayConverter_t1881 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1913* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ArrayConverter_GetPropertiesSupported_m10410 (ArrayConverter_t1881 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
