#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t593;
struct GcAchievementData_t593_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t602;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t602 * GcAchievementData_ToAchievement_m3019 (GcAchievementData_t593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t593_marshal(const GcAchievementData_t593& unmarshaled, GcAchievementData_t593_marshaled& marshaled);
void GcAchievementData_t593_marshal_back(const GcAchievementData_t593_marshaled& marshaled, GcAchievementData_t593& unmarshaled);
void GcAchievementData_t593_marshal_cleanup(GcAchievementData_t593_marshaled& marshaled);
