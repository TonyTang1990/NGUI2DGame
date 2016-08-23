#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.DefaultValueTypeConverter
struct DefaultValueTypeConverter_t942;
// System.Object
struct Object_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1096;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.Type
struct Type_t;

// System.Object System.Data.DefaultValueTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * DefaultValueTypeConverter_ConvertTo_m4095 (DefaultValueTypeConverter_t942 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.DefaultValueTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool DefaultValueTypeConverter_CanConvertTo_m4096 (DefaultValueTypeConverter_t942 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
