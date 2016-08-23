#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t15;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UIButtonSound/Trigger
#include "AssemblyU2DCSharp_UIButtonSound_Trigger.h"
// UIButtonSound
struct  UIButtonSound_t95  : public MonoBehaviour_t3
{
	// UnityEngine.AudioClip UIButtonSound::audioClip
	AudioClip_t15 * ___audioClip_2;
	// UIButtonSound/Trigger UIButtonSound::trigger
	int32_t ___trigger_3;
	// System.Single UIButtonSound::volume
	float ___volume_4;
	// System.Single UIButtonSound::pitch
	float ___pitch_5;
};
