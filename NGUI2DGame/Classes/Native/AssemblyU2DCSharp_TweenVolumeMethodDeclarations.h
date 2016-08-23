#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TweenVolume
struct TweenVolume_t207;
// UnityEngine.AudioSource
struct AudioSource_t206;
// UnityEngine.GameObject
struct GameObject_t17;

// System.Void TweenVolume::.ctor()
extern "C" void TweenVolume__ctor_m775 (TweenVolume_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource TweenVolume::get_audioSource()
extern "C" AudioSource_t206 * TweenVolume_get_audioSource_m776 (TweenVolume_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TweenVolume::get_volume()
extern "C" float TweenVolume_get_volume_m777 (TweenVolume_t207 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::set_volume(System.Single)
extern "C" void TweenVolume_set_volume_m778 (TweenVolume_t207 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TweenVolume::OnUpdate(System.Single,System.Boolean)
extern "C" void TweenVolume_OnUpdate_m779 (TweenVolume_t207 * __this, float ___factor, bool ___isFinished, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TweenVolume TweenVolume::Begin(UnityEngine.GameObject,System.Single,System.Single)
extern "C" TweenVolume_t207 * TweenVolume_Begin_m780 (Object_t * __this /* static, unused */, GameObject_t17 * ___go, float ___duration, float ___targetVolume, const MethodInfo* method) IL2CPP_METHOD_ATTR;
