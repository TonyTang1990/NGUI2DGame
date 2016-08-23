#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioSource
struct AudioSource_t206;
// UnityEngine.AudioClip
struct AudioClip_t15;

// System.Single UnityEngine.AudioSource::get_volume()
extern "C" float AudioSource_get_volume_m1681 (AudioSource_t206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C" void AudioSource_set_volume_m1682 (AudioSource_t206 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C" void AudioSource_set_pitch_m1567 (AudioSource_t206 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C" void AudioSource_PlayOneShot_m1568 (AudioSource_t206 * __this, AudioClip_t15 * ___clip, float ___volumeScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
