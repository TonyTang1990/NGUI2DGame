#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t516;
struct SkeletonBone_t516_marshaled;

void SkeletonBone_t516_marshal(const SkeletonBone_t516& unmarshaled, SkeletonBone_t516_marshaled& marshaled);
void SkeletonBone_t516_marshal_back(const SkeletonBone_t516_marshaled& marshaled, SkeletonBone_t516& unmarshaled);
void SkeletonBone_t516_marshal_cleanup(SkeletonBone_t516_marshaled& marshaled);
