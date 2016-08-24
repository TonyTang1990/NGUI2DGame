#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Data.ConstraintConverter
struct ConstraintConverter_t2672338273;
// System.Object
struct Il2CppObject;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t3633625151;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"

// System.Object System.Data.ConstraintConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  Il2CppObject * ConstraintConverter_ConvertTo_m97321372 (ConstraintConverter_t2672338273 * __this, Il2CppObject * ___context0, CultureInfo_t3500843524 * ___culture1, Il2CppObject * ___value2, Type_t * ___destinationType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Data.ConstraintConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C"  bool ConstraintConverter_CanConvertTo_m2055037583 (ConstraintConverter_t2672338273 * __this, Il2CppObject * ___context0, Type_t * ___destinationType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
