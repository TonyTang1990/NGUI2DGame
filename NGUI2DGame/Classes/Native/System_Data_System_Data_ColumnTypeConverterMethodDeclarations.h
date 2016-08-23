#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Data.ColumnTypeConverter
struct ColumnTypeConverter_t893;
// System.Object
struct Object_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t1096;
// System.Globalization.CultureInfo
struct CultureInfo_t693;
// System.Type
struct Type_t;

// System.Object System.Data.ColumnTypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * ColumnTypeConverter_ConvertTo_m3646 (ColumnTypeConverter_t893 * __this, Object_t * ___context, CultureInfo_t693 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ColumnTypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool ColumnTypeConverter_CanConvertTo_m3647 (ColumnTypeConverter_t893 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
