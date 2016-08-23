#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenColor
struct TweenColor_t199;
// UnityEngine.GameObject
struct GameObject_t17;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void TweenColor::.ctor()
extern "C" void TweenColor__ctor_m735 (TweenColor_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TweenColor::get_color()
extern "C" Color_t25  TweenColor_get_color_m736 (TweenColor_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::set_color(UnityEngine.Color)
extern "C" void TweenColor_set_color_m737 (TweenColor_t199 * __this, Color_t25  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::Awake()
extern "C" void TweenColor_Awake_m738 (TweenColor_t199 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenColor::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenColor_OnUpdate_m739 (TweenColor_t199 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenColor TweenColor::Begin(UnityEngine.GameObject,System.Single,UnityEngine.Color)
extern "C" TweenColor_t199 * TweenColor_Begin_m740 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, Color_t25  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
