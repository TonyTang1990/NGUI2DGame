#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t594;
struct GcScoreData_t594_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t604;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t604 * GcScoreData_ToScore_m3020 (GcScoreData_t594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t594_marshal(const GcScoreData_t594& unmarshaled, GcScoreData_t594_marshaled& marshaled);
void GcScoreData_t594_marshal_back(const GcScoreData_t594_marshaled& marshaled, GcScoreData_t594& unmarshaled);
void GcScoreData_t594_marshal_cleanup(GcScoreData_t594_marshaled& marshaled);
