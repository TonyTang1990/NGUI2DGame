#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Localization
struct Localization_t161;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t289;

// System.Void Localization::.ctor()
extern "C" void Localization__ctor_m496 (Localization_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Localization::get_isActive()
extern "C" bool Localization_get_isActive_m497 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Localization Localization::get_instance()
extern "C" Localization_t161 * Localization_get_instance_m498 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::get_currentLanguage()
extern "C" String_t* Localization_get_currentLanguage_m499 (Localization_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::set_currentLanguage(System.String)
extern "C" void Localization_set_currentLanguage_m500 (Localization_t161 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Awake()
extern "C" void Localization_Awake_m501 (Localization_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnEnable()
extern "C" void Localization_OnEnable_m502 (Localization_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::OnDestroy()
extern "C" void Localization_OnDestroy_m503 (Localization_t161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Localization::Load(UnityEngine.TextAsset)
extern "C" void Localization_Load_m504 (Localization_t161 * __this, TextAsset_t289 * ___asset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Get(System.String)
extern "C" String_t* Localization_Get_m505 (Localization_t161 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Localization::Localize(System.String)
extern "C" String_t* Localization_Localize_m506 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
