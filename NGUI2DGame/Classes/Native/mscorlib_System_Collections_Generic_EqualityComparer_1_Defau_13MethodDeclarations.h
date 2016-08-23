#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>
struct DefaultComparer_t3999;
// System.Reflection.Emit.Label
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::.ctor()
extern "C" void DefaultComparer__ctor_m25686_gshared (DefaultComparer_t3999 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25686(__this, method) (( void (*) (DefaultComparer_t3999 *, const MethodInfo*))DefaultComparer__ctor_m25686_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25687_gshared (DefaultComparer_t3999 * __this, Label_t2144  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25687(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3999 *, Label_t2144 , const MethodInfo*))DefaultComparer_GetHashCode_m25687_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.Emit.Label>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25688_gshared (DefaultComparer_t3999 * __this, Label_t2144  ___x, Label_t2144  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25688(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3999 *, Label_t2144 , Label_t2144 , const MethodInfo*))DefaultComparer_Equals_m25688_gshared)(__this, ___x, ___y, method)
