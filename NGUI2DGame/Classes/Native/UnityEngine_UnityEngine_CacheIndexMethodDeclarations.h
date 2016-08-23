#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t482;
struct CacheIndex_t482_marshaled;

void CacheIndex_t482_marshal(const CacheIndex_t482& unmarshaled, CacheIndex_t482_marshaled& marshaled);
void CacheIndex_t482_marshal_back(const CacheIndex_t482_marshaled& marshaled, CacheIndex_t482& unmarshaled);
void CacheIndex_t482_marshal_cleanup(CacheIndex_t482_marshaled& marshaled);
