#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.SByteConverter
struct SByteConverter_t1919;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1037;

// System.Boolean System.ComponentModel.SByteConverter::get_SupportHex()
extern "C" bool SByteConverter_get_SupportHex_m10675 (SByteConverter_t1919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SByteConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* SByteConverter_ConvertToString_m10676 (SByteConverter_t1919 * __this, Object_t * ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * SByteConverter_ConvertFromString_m10677 (SByteConverter_t1919 * __this, String_t* ___value, NumberFormatInfo_t1037 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * SByteConverter_ConvertFromString_m10678 (SByteConverter_t1919 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
