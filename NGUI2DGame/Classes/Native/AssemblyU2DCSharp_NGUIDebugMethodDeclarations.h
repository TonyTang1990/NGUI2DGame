#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NGUIDebug
struct NGUIDebug_t164;
// System.String
struct String_t;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void NGUIDebug::.ctor()
extern "C" void NGUIDebug__ctor_m507 (NGUIDebug_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::.cctor()
extern "C" void NGUIDebug__cctor_m508 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::Log(System.String)
extern "C" void NGUIDebug_Log_m509 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::DrawBounds(UnityEngine.Bounds)
extern "C" void NGUIDebug_DrawBounds_m510 (Object_t * __this /* static, unused */, Bounds_t113  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUIDebug::OnGUI()
extern "C" void NGUIDebug_OnGUI_m511 (NGUIDebug_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
