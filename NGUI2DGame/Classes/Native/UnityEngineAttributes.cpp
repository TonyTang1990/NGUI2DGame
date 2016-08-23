#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern TypeInfo* InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var;
extern TypeInfo* ExtensionAttribute_t730_il2cpp_TypeInfo_var;
void g_UnityEngine_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1059);
		RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(205);
		ExtensionAttribute_t730_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1060);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 16;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Advertisements"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Analytics"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud.Service"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Cloud"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Networking"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.TerrainPhysics"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Terrain"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("Unity.Automation"), NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("UnityEngine.Physics"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t358 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t358 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m1843(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m1844(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t730 * tmp;
		tmp = (ExtensionAttribute_t730 *)il2cpp_codegen_object_new (ExtensionAttribute_t730_il2cpp_TypeInfo_var);
		ExtensionAttribute__ctor_m3292(tmp, NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework.Tests"), NULL);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests.Framework"), NULL);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("Unity.RuntimeTests"), NULL);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests.Framework"), NULL);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t729 * tmp;
		tmp = (InternalsVisibleToAttribute_t729 *)il2cpp_codegen_object_new (InternalsVisibleToAttribute_t729_il2cpp_TypeInfo_var);
		InternalsVisibleToAttribute__ctor_m3291(tmp, il2cpp_codegen_string_new_wrapper("Unity.IntegrationTests"), NULL);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcall.h"
// UnityEngine.WrapperlessIcall
#include "UnityEngine_UnityEngine_WrapperlessIcallMethodDeclarations.h"
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t404_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m1938(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AssetBundleCreateRequest_t404_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m1939(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
// UnityEngineInternal.TypeInferenceRuleAttribute
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
void AssetBundle_t406_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m1943(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
void AssetBundle_t406_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m1944(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AssetBundle_t406_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m1945(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void LayerMask_t225_CustomAttributesCacheGenerator_LayerMask_LayerToName_m1948(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void LayerMask_t225_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m1949(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void LayerMask_t225_CustomAttributesCacheGenerator_LayerMask_t225_LayerMask_GetMask_m1950_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void RuntimePlatform_t409_CustomAttributesCacheGenerator_NaCl(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("NaCl export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void RuntimePlatform_t409_CustomAttributesCacheGenerator_FlashPlayer(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("FlashPlayer export is no longer supported in Unity 5.0+."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void RuntimePlatform_t409_CustomAttributesCacheGenerator_MetroPlayerX86(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX86 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void RuntimePlatform_t409_CustomAttributesCacheGenerator_MetroPlayerX64(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerX64 instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void RuntimePlatform_t409_CustomAttributesCacheGenerator_MetroPlayerARM(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("Use WSAPlayerARM instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void SystemInfo_t411_CustomAttributesCacheGenerator_SystemInfo_get_graphicsShaderLevel_m1687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void SystemInfo_t411_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m1951(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Coroutine_t415_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m1955(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void ScriptableObject_t416_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m1958(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttribute.h"
// UnityEngine.WritableAttribute
#include "UnityEngine_UnityEngine_WritableAttributeMethodDeclarations.h"
extern TypeInfo* WritableAttribute_t589_il2cpp_TypeInfo_var;
void ScriptableObject_t416_CustomAttributesCacheGenerator_ScriptableObject_t416_ScriptableObject_Internal_CreateScriptableObject_m1958_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t589 * tmp;
		tmp = (WritableAttribute_t589 *)il2cpp_codegen_object_new (WritableAttribute_t589_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3014(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void ScriptableObject_t416_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m1959(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void ScriptableObject_t416_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m1961(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m1966(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m1967(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m1968(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m1969(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m1970(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m1971(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m1972(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m1973(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m1974(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m1975(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m1976(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m1977(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m1978(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m1979(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m1980(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m1981(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m1982(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m1986(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GcLeaderboard_t428_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m2030(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GcLeaderboard_t428_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m2031(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GcLeaderboard_t428_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m2032(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GcLeaderboard_t428_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m2033(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void QualitySettings_t429_CustomAttributesCacheGenerator_QualitySettings_GetQualityLevel_m1359(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void MeshFilter_t172_CustomAttributesCacheGenerator_MeshFilter_get_mesh_m1625(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void MeshFilter_t172_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m1624(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_Internal_Create_m2034(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t589_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_t171_Mesh_Internal_Create_m2034_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t589 * tmp;
		tmp = (WritableAttribute_t589 *)il2cpp_codegen_object_new (WritableAttribute_t589_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3014(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_Clear_m2035(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
// UnityEngine.Internal.DefaultValueAttribute
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_t171_Mesh_Clear_m2035_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
// UnityEngine.Internal.ExcludeFromDocsAttribute
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_Clear_m1603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_vertices_m1614(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_normals_m1615(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_tangents_m1617(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_uv_m1619(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_colors32_m1621(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_RecalculateBounds_m1623(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_triangles_m1622(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_get_vertexCount_m1598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Mesh_t171_CustomAttributesCacheGenerator_Mesh_MarkDynamic_m1602(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Renderer_t301_CustomAttributesCacheGenerator_Renderer_get_material_m1299(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Renderer_t301_CustomAttributesCacheGenerator_Renderer_get_sharedMaterial_m1612(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Renderer_t301_CustomAttributesCacheGenerator_Renderer_get_sharedMaterials_m1610(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Renderer_t301_CustomAttributesCacheGenerator_Renderer_set_sharedMaterials_m1611(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Screen_t431_CustomAttributesCacheGenerator_Screen_get_width_m1257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Screen_t431_CustomAttributesCacheGenerator_Screen_get_height_m1259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Texture_t263_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m2057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Texture_t263_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m2058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Texture2D_t42_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m2062(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t589_il2cpp_TypeInfo_var;
void Texture2D_t42_CustomAttributesCacheGenerator_Texture2D_t42_Texture2D_Internal_Create_m2062_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t589 * tmp;
		tmp = (WritableAttribute_t589 *)il2cpp_codegen_object_new (WritableAttribute_t589_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3014(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RenderTexture_t432_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m2063(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RenderTexture_t432_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m2064(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUILayer_t436_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m2068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Gradient_t439_CustomAttributesCacheGenerator_Gradient_Init_m2072(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Gradient_t439_CustomAttributesCacheGenerator_Gradient_Cleanup_m2073(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void GUI_t444_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void GUI_t444_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void GUI_t444_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m2081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUI_t444_CustomAttributesCacheGenerator_GUI_set_changed_m2084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUI_t444_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m2087(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void GUILayout_t446_CustomAttributesCacheGenerator_GUILayout_t446_GUILayout_Label_m1537_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUILayoutUtility_t451_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m2101(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUILayoutUtility_t451_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2103(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void GUILayoutUtility_t451_CustomAttributesCacheGenerator_GUILayoutUtility_t451_GUILayoutUtility_GetRect_m2104_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIUtility_t328_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m2143(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIUtility_t328_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m2145(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIUtility_t328_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m2149(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeFieldMethodDeclarations.h"
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISettings_t461_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISettings_t461_CustomAttributesCacheGenerator_m_TripleClickSelectsLine(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISettings_t461_CustomAttributesCacheGenerator_m_CursorColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISettings_t461_CustomAttributesCacheGenerator_m_CursorFlashSpeed(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISettings_t461_CustomAttributesCacheGenerator_m_SelectionColor(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditMode.h"
// UnityEngine.ExecuteInEditMode
#include "UnityEngine_UnityEngine_ExecuteInEditModeMethodDeclarations.h"
extern TypeInfo* ExecuteInEditMode_t361_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExecuteInEditMode_t361_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(208);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExecuteInEditMode_t361 * tmp;
		tmp = (ExecuteInEditMode_t361 *)il2cpp_codegen_object_new (ExecuteInEditMode_t361_il2cpp_TypeInfo_var);
		ExecuteInEditMode__ctor_m1849(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_Font(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_box(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_button(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_toggle(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_label(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_textField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_textArea(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_window(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_verticalSlider(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_verticalSliderThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_verticalScrollbar(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_verticalScrollbarThumb(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_ScrollView(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_CustomStyles(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUISkin_t442_CustomAttributesCacheGenerator_m_Settings(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUIContent_t456_CustomAttributesCacheGenerator_m_Text(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUIContent_t456_CustomAttributesCacheGenerator_m_Image(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void GUIContent_t456_CustomAttributesCacheGenerator_m_Tooltip(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyleState_t465_CustomAttributesCacheGenerator_GUIStyleState_Init_m2218(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyleState_t465_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m2219(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyleState_t465_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m2220(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyleState_t465_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m2221(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_Init_m2227(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_Cleanup_m2228(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_left_m2229(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_set_left_m2230(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_right_m2231(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_set_right_m2232(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_top_m2233(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_set_top_m2234(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2235(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_set_bottom_m2236(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m2237(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_vertical_m2238(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Init_m2243(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m2244(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_name_m2245(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_set_name_m2246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m2248(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m2251(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m2252(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m2253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m2254(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m2255(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m2256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2257(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m2258(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2259(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m2260(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m2263(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m2265(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m2268(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m2271(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2273(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1761(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1762(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("TouchScreenKeyboardType.Default"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("true"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg5_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg6_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m1766(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m1760(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m1765(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m1767(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_Init_m2276(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_Cleanup_m2278(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_get_rawType_m2279(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_get_type_m2280(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m2282(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_get_modifiers_m2283(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_get_character_m2284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_get_commandName_m2285(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_get_keyCode_m2286(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Event_t469_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m2288(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t732_il2cpp_TypeInfo_var;
void EventModifiers_t471_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t732 * tmp;
		tmp = (FlagsAttribute_t732 *)il2cpp_codegen_object_new (FlagsAttribute_t732_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3295(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void Vector2_t55_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void Vector3_t48_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void Color_t25_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttribute.h"
// UnityEngine.IL2CPPStructAlignmentAttribute
#include "UnityEngine_UnityEngine_IL2CPPStructAlignmentAttributeMethodDeclarations.h"
extern TypeInfo* IL2CPPStructAlignmentAttribute_t582_il2cpp_TypeInfo_var;
void Color32_t295_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IL2CPPStructAlignmentAttribute_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1067);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		IL2CPPStructAlignmentAttribute_t582 * tmp;
		tmp = (IL2CPPStructAlignmentAttribute_t582 *)il2cpp_codegen_object_new (IL2CPPStructAlignmentAttribute_t582_il2cpp_TypeInfo_var);
		IL2CPPStructAlignmentAttribute__ctor_m3006(tmp, NULL);
		tmp->___Align_0 = 4;
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void Quaternion_t50_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_LookRotation_m1326(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_LookRotation_m2314(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Slerp_m2315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m2318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2320(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void Matrix4x4_t191_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m2336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m2338(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m2340(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m2343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m2353(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m2356(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m2357(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Bounds_t113_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m2370(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Bounds_t113_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m2373(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Bounds_t113_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m2376(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Bounds_t113_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void Vector4_t175_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void Mathf_t299_CustomAttributesCacheGenerator_Mathf_t299_Mathf_Min_m1789_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void Mathf_t299_CustomAttributesCacheGenerator_Mathf_t299_Mathf_Max_m1790_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
void Resources_t476_CustomAttributesCacheGenerator_Resources_FindObjectsOfTypeAll_m1703(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Resources_t476_CustomAttributesCacheGenerator_Resources_Load_m1531(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextAsset_t289_CustomAttributesCacheGenerator_TextAsset_get_text_m2416(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextAsset_t289_CustomAttributesCacheGenerator_TextAsset_get_bytes_m1524(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void SerializePrivateVariables_t477_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("Use SerializeField on the private variables that you want to be serialized instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Shader_t262_CustomAttributesCacheGenerator_Shader_Find_m1607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Shader_t262_CustomAttributesCacheGenerator_Shader_set_globalMaximumLOD_m1360(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Shader_t262_CustomAttributesCacheGenerator_Shader_PropertyToID_m2419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_get_shader_m1606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_set_shader_m1608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m2422(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_GetColor_m2424(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_SetTexture_m2426(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_GetTexture_m2428(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureOffset_m2430(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureScale_m2432(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_get_renderQueue_m1594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_set_renderQueue_m1595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m2433(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t589_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_t170_Material_Internal_CreateWithShader_m2433_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t589 * tmp;
		tmp = (WritableAttribute_t589 *)il2cpp_codegen_object_new (WritableAttribute_t589_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3014(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m2434(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t589_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_t170_Material_Internal_CreateWithMaterial_m2434_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t589 * tmp;
		tmp = (WritableAttribute_t589 *)il2cpp_codegen_object_new (WritableAttribute_t589_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3014(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Material_t170_CustomAttributesCacheGenerator_Material_CopyPropertiesFromMaterial_m1605(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t479_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t479_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2437(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t479_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2440(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void SphericalHarmonicsL2_t479_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void WWW_t38_CustomAttributesCacheGenerator_WWW_DestroyWWW_m2455(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void WWW_t38_CustomAttributesCacheGenerator_WWW_InitWWW_m2456(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void WWW_t38_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m2458(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void WWW_t38_CustomAttributesCacheGenerator_WWW_get_bytes_m2462(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void WWW_t38_CustomAttributesCacheGenerator_WWW_get_error_m2463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void WWW_t38_CustomAttributesCacheGenerator_WWW_GetTexture_m2464(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void WWW_t38_CustomAttributesCacheGenerator_WWW_get_isDone_m2465(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void WWWForm_t292_CustomAttributesCacheGenerator_WWWForm_AddField_m2469(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void WWWForm_t292_CustomAttributesCacheGenerator_WWWForm_t292_WWWForm_AddField_m2470_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("System.Text.Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void WWWTranscoder_t481_CustomAttributesCacheGenerator_WWWTranscoder_t481_WWWTranscoder_QPEncode_m2477_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void WWWTranscoder_t481_CustomAttributesCacheGenerator_WWWTranscoder_t481_WWWTranscoder_SevenBitClean_m2480_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("Encoding.UTF8"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void CacheIndex_t482_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("this API is not for public use."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void UnityString_t483_CustomAttributesCacheGenerator_UnityString_t483_UnityString_Format_m2482_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AsyncOperation_t405_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m2484(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Application_t485_CustomAttributesCacheGenerator_Application_Quit_m1833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Application_t485_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m2490(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Application_t485_CustomAttributesCacheGenerator_Application_get_isPlaying_m1372(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Application_t485_CustomAttributesCacheGenerator_Application_get_isEditor_m1577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Application_t485_CustomAttributesCacheGenerator_Application_get_platform_m1545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Application_t485_CustomAttributesCacheGenerator_Application_get_dataPath_m1820(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Application_t485_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m1582(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"
// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecurityCriticalAttribute_t734_il2cpp_TypeInfo_var;
void Application_t485_CustomAttributesCacheGenerator_Application_t485____persistentDataPath_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecurityCriticalAttribute_t734_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1068);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecurityCriticalAttribute_t734 * tmp;
		tmp = (SecurityCriticalAttribute_t734 *)il2cpp_codegen_object_new (SecurityCriticalAttribute_t734_il2cpp_TypeInfo_var);
		SecurityCriticalAttribute__ctor_m3298(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Behaviour_t434_CustomAttributesCacheGenerator_Behaviour_get_enabled_m1318(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Behaviour_t434_CustomAttributesCacheGenerator_Behaviour_set_enabled_m1272(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_fieldOfView_m1669(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_set_fieldOfView_m1670(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1719(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1718(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m1672(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m1673(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_orthographic_m1262(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_set_orthographic_m1776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_depth_m1714(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_eventMask_m2497(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_set_eventMask_m1724(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m2498(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m2499(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m2500(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_targetTexture_m2501(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_pixelWidth_m1798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_pixelHeight_m1799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_clearFlags_m2502(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m2503(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m2504(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportToWorldPoint_m2505(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m2506(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m2507(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m2508(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_main_m1566(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m2509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_GetAllCameras_m2510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m2515(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m2517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttribute.h"
// System.ComponentModel.EditorBrowsableAttribute
#include "System_System_ComponentModel_EditorBrowsableAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var;
void CameraCallback_t486_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1069);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t735 * tmp;
		tmp = (EditorBrowsableAttribute_t735 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3299(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void Debug_t487_CustomAttributesCacheGenerator_Debug_DrawLine_m1536(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Debug_t487_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m2518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Debug_t487_CustomAttributesCacheGenerator_Debug_Internal_Log_m2519(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t589_il2cpp_TypeInfo_var;
void Debug_t487_CustomAttributesCacheGenerator_Debug_t487_Debug_Internal_Log_m2519_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t589 * tmp;
		tmp = (WritableAttribute_t589 *)il2cpp_codegen_object_new (WritableAttribute_t589_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3014(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Display_t490_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m2544(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Display_t490_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m2545(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Display_t490_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m2546(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Display_t490_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m2547(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Display_t490_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m2548(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Display_t490_CustomAttributesCacheGenerator_Display_SetParamsImpl_m2549(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Display_t490_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m2550(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Display_t490_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m2551(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m2552(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_GetKeyInt_m2554(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_GetKeyUpInt_m2555(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m2556(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_GetAxis_m1723(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_GetMouseButton_m1729(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1731(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m1730(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_get_mousePosition_m1256(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_get_inputString_m1727(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_GetTouch_m1732(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_get_touchCount_m1737(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m1763(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_get_compositionString_m1768(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Input_t298_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m2557(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FlagsAttribute_t732_il2cpp_TypeInfo_var;
void HideFlags_t493_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FlagsAttribute_t732_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1066);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FlagsAttribute_t732 * tmp;
		tmp = (FlagsAttribute_t732 *)il2cpp_codegen_object_new (FlagsAttribute_t732_il2cpp_TypeInfo_var);
		FlagsAttribute__ctor_m3295(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m2559(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m2561(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_Destroy_m1485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_t69_Object_Destroy_m1485_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_Destroy_m1250(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2562(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_t69_Object_DestroyImmediate_m2562_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("false"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_DestroyImmediate_m1382(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m1578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 2, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_get_name_m1344(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_set_name_m1601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m1379(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_set_hideFlags_m1600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_ToString_m1888(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_Instantiate_m1284(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 3, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
void Object_t69_CustomAttributesCacheGenerator_Object_FindObjectOfType_m1377(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_get_transform_m1253(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_get_gameObject_m1246(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m2569(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"
// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttributeMethodDeclarations.h"
extern TypeInfo* SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_GetComponent_m3301(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1070);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t736 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t736 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3302(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m2570(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_SendMessage_m1401(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_t107_Component_SendMessage_m1401_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_t107_Component_SendMessage_m1401_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_BroadcastMessage_m1807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_t107_Component_BroadcastMessage_m1807_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Component_t107_CustomAttributesCacheGenerator_Component_t107_Component_BroadcastMessage_m1807_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Light_t198_CustomAttributesCacheGenerator_Light_INTERNAL_get_color_m2571(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Light_t198_CustomAttributesCacheGenerator_Light_INTERNAL_set_color_m2572(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponent_m2573(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m2574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponent_m3307(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1070);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t736 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t736 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3302(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m2575(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m2576(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_get_transform_m1277(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_get_layer_m1254(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_set_layer_m1486(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_SetActive_m1581(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m1579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m1580(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_SendMessage_m1406(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_t17_GameObject_SendMessage_m1406_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("null"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_t17_GameObject_SendMessage_m1406_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("SendMessageOptions.RequireReceiver"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m2577(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_AddComponent_m2578(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1062);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeInferenceRuleAttribute_t638 * tmp;
		tmp = (TypeInferenceRuleAttribute_t638 *)il2cpp_codegen_object_new (TypeInferenceRuleAttribute_t638_il2cpp_TypeInfo_var);
		TypeInferenceRuleAttribute__ctor_m3147(tmp, 0, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m2579(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WritableAttribute_t589_il2cpp_TypeInfo_var;
void GameObject_t17_CustomAttributesCacheGenerator_GameObject_t17_GameObject_Internal_CreateGameObject_m2579_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WritableAttribute_t589_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1064);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WritableAttribute_t589 * tmp;
		tmp = (WritableAttribute_t589 *)il2cpp_codegen_object_new (WritableAttribute_t589_il2cpp_TypeInfo_var);
		WritableAttribute__ctor_m3014(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m2583(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m2584(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m2585(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m2586(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m2587(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m2588(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m2589(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m2590(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m2591(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m2592(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_get_parentInternal_m2593(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_set_parentInternal_m2594(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m2595(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m2596(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m2597(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformDirection_m2598(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m2599(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m2600(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_get_childCount_m1418(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_lossyScale_m2601(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_get_hasChanged_m1653(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_set_hasChanged_m1654(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Transform_t8_CustomAttributesCacheGenerator_Transform_GetChild_m1419(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Time_t495_CustomAttributesCacheGenerator_Time_get_time_m1348(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Time_t495_CustomAttributesCacheGenerator_Time_get_deltaTime_m1336(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Time_t495_CustomAttributesCacheGenerator_Time_get_timeScale_m1728(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Time_t495_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m1380(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Random_t496_CustomAttributesCacheGenerator_Random_Range_m1350(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Random_t496_CustomAttributesCacheGenerator_Random_RandomRangeInt_m2603(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m2606(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m2607(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m2608(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m1492(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_t498_PlayerPrefs_GetInt_m1492_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m1564(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_t498_PlayerPrefs_GetFloat_m1564_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("0.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m1832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m1533(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_t498_PlayerPrefs_GetString_m1533_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("\"\""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m1491(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m1769(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_DeleteKey_m1532(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m2626(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_Raycast_m2627_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_Raycast_m2627_Arg4_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_Raycast_m1722_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_Raycast_m1722_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_RaycastAll_m1720_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_RaycastAll_m1720_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_RaycastAll_m2628_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("Mathf.Infinity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_RaycastAll_m2628_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("DefaultRaycastLayers"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Physics_t501_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m2629(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Rigidbody_t63_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_rotation_m2630(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Rigidbody_t63_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_MoveRotation_m2631(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Collider_t304_CustomAttributesCacheGenerator_Collider_get_enabled_m1392(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Collider_t304_CustomAttributesCacheGenerator_Collider_set_enabled_m1322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Collider_t304_CustomAttributesCacheGenerator_Collider_set_isTrigger_m1574(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Collider_t304_CustomAttributesCacheGenerator_Collider_INTERNAL_get_bounds_m2632(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void BoxCollider_t138_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_center_m2633(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void BoxCollider_t138_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_set_center_m2634(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void BoxCollider_t138_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_size_m2635(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void BoxCollider_t138_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_set_size_m2636(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_get_volume_m1681(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_set_volume_m1682(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_set_pitch_m1567(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m1568(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_t206_AudioSource_PlayOneShot_m1568_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("1.0F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void AnimationEvent_t508_CustomAttributesCacheGenerator_AnimationEvent_t508____data_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("Use stringParameter instead"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationClip_t57_CustomAttributesCacheGenerator_AnimationClip_get_length_m1349(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void AnimationCurve_t210_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void AnimationCurve_t210_CustomAttributesCacheGenerator_AnimationCurve_t210_AnimationCurve__ctor_m1684_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationCurve_t210_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m2678(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationCurve_t210_CustomAttributesCacheGenerator_AnimationCurve_Evaluate_m1685(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationCurve_t210_CustomAttributesCacheGenerator_AnimationCurve_Init_m2680(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_INTERNAL_CALL_Sample_m2684(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_get_isPlaying_m1516(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_IsPlaying_m1510(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_Play_m1517(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_t56_Animation_Play_m2685_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("PlayMode.StopSameLayer"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_Play_m2686(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_t56_Animation_Play_m2686_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("PlayMode.StopSameLayer"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_Play_m1346(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_CrossFade_m2687(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_t56_Animation_CrossFade_m2687_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("0.3F"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_t56_Animation_CrossFade_m2687_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("PlayMode.StopSameLayer"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_CrossFade_m1351(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_PlayDefaultAnimation_m2688(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_GetStateAtIndex_m2690(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Animation_t56_CustomAttributesCacheGenerator_Animation_GetStateCount_m2691(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_time_m1511(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_set_time_m1513(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_speed_m1514(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_set_speed_m1518(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_length_m1512(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_set_layer_m1345(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_clip_m1343(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_name_m1509(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void AnimatorStateInfo_t509_CustomAttributesCacheGenerator_AnimatorStateInfo_t509____nameHash_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("Use AnimatorStateInfo.fullPathHash instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Animator_t515_CustomAttributesCacheGenerator_Animator_StringToHash_m2710(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void CharacterInfo_t233_CustomAttributesCacheGenerator_uv(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.uv is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void CharacterInfo_t233_CustomAttributesCacheGenerator_vert(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.vert is deprecated. Use minX, maxX, minY, maxY instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void CharacterInfo_t233_CustomAttributesCacheGenerator_width(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.width is deprecated. Use advance instead."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void CharacterInfo_t233_CustomAttributesCacheGenerator_flipped(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("CharacterInfo.flipped is deprecated. Use uvBottomLeft, uvBottomRight, uvTopRight or uvTopLeft instead, which will be correct regardless of orientation."), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_get_material_m1742(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_get_fontNames_m1745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_RequestCharactersInTexture_m1746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_t231_Font_RequestCharactersInTexture_m1746_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_t231_Font_RequestCharactersInTexture_m1746_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("FontStyle.Normal"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_RequestCharactersInTexture_m1748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1065);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ExcludeFromDocsAttribute_t635 * tmp;
		tmp = (ExcludeFromDocsAttribute_t635 *)il2cpp_codegen_object_new (ExcludeFromDocsAttribute_t635_il2cpp_TypeInfo_var);
		ExcludeFromDocsAttribute__ctor_m3145(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_GetCharacterInfo_m1747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_t231_Font_GetCharacterInfo_m1747_Arg2_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultValueAttribute_t634_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_t231_Font_GetCharacterInfo_m1747_Arg3_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t634_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1057);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultValueAttribute_t634 * tmp;
		tmp = (DefaultValueAttribute_t634 *)il2cpp_codegen_object_new (DefaultValueAttribute_t634_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3141(tmp, il2cpp_codegen_string_new_wrapper("FontStyle.Normal"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_get_dynamic_m2735(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var;
extern TypeInfo* ObsoleteAttribute_t369_il2cpp_TypeInfo_var;
void Font_t231_CustomAttributesCacheGenerator_Font_t231____textureRebuildCallback_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1069);
		ObsoleteAttribute_t369_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(214);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t735 * tmp;
		tmp = (EditorBrowsableAttribute_t735 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3299(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		ObsoleteAttribute_t369 * tmp;
		tmp = (ObsoleteAttribute_t369 *)il2cpp_codegen_object_new (ObsoleteAttribute_t369_il2cpp_TypeInfo_var);
		ObsoleteAttribute__ctor_m1882(tmp, il2cpp_codegen_string_new_wrapper("Font.textureRebuildCallback has been deprecated. Use Font.textureRebuilt instead."), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var;
void FontTextureRebuildCallback_t344_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1069);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t735 * tmp;
		tmp = (EditorBrowsableAttribute_t735 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3299(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_Init_m2739(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m2740(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2743(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m2744(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m2745(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m2746(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m2747(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m2748(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m2750(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m2751(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m2752(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m2753(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m2754(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* WrapperlessIcall_t581_il2cpp_TypeInfo_var;
void TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m2755(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WrapperlessIcall_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1061);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		WrapperlessIcall_t581 * tmp;
		tmp = (WrapperlessIcall_t581 *)il2cpp_codegen_object_new (WrapperlessIcall_t581_il2cpp_TypeInfo_var);
		WrapperlessIcall__ctor_m3005(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Request_t533_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Request_t533_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Request_t533_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Request_t533_CustomAttributesCacheGenerator_Request_get_sourceId_m2776(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Request_t533_CustomAttributesCacheGenerator_Request_get_appId_m2777(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Request_t533_CustomAttributesCacheGenerator_Request_get_domain_m2778(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Response_t535_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Response_t535_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Response_t535_CustomAttributesCacheGenerator_Response_get_success_m2787(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Response_t535_CustomAttributesCacheGenerator_Response_set_success_m2788(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Response_t535_CustomAttributesCacheGenerator_Response_get_extendedInfo_m2789(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Response_t535_CustomAttributesCacheGenerator_Response_set_extendedInfo_m2790(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m2795(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m2796(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m2797(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m2798(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m2799(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m2800(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m2801(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m2802(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m2803(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m2806(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m2807(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m2808(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m2809(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m2810(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m2811(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m2812(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m2813(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m2814(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m2815(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m2816(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m2817(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchRequest_t540_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchRequest_t540_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchRequest_t540_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m2821(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchRequest_t540_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m2822(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchRequest_t540_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m2823(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchRequest_t540_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m2824(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m2827(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m2828(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m2829(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m2830(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m2831(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m2832(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m2833(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m2834(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m2835(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m2836(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m2837(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m2838(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t542_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t542_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m2842(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void DestroyMatchRequest_t542_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m2843(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void DropConnectionRequest_t543_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void DropConnectionRequest_t543_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void DropConnectionRequest_t543_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m2846(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void DropConnectionRequest_t543_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m2847(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void DropConnectionRequest_t543_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m2848(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void DropConnectionRequest_t543_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m2849(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m2852(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m2853(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m2854(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m2855(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m2856(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m2857(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m2858(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m2859(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m2862(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m2863(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m2864(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m2865(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m2866(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m2867(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m2871(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m2872(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_name_m2873(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_name_m2874(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m2875(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m2876(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m2877(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m2878(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m2879(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m2880(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m2881(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m2882(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m2883(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m2884(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m2885(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchResponse_t549_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchResponse_t549_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m2889(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ListMatchResponse_t549_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m2890(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttribute.h"
// System.ComponentModel.DefaultValueAttribute
#include "System_System_ComponentModel_DefaultValueAttributeMethodDeclarations.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
extern TypeInfo* DefaultValueAttribute_t738_il2cpp_TypeInfo_var;
extern TypeInfo* AppID_t550_il2cpp_TypeInfo_var;
void AppID_t550_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		AppID_t550_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(954);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t738 * tmp;
		tmp = (DefaultValueAttribute_t738 *)il2cpp_codegen_object_new (DefaultValueAttribute_t738_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3314(tmp, Box(AppID_t550_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
extern TypeInfo* DefaultValueAttribute_t738_il2cpp_TypeInfo_var;
extern TypeInfo* SourceID_t551_il2cpp_TypeInfo_var;
void SourceID_t551_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		SourceID_t551_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(953);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t738 * tmp;
		tmp = (DefaultValueAttribute_t738 *)il2cpp_codegen_object_new (DefaultValueAttribute_t738_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3314(tmp, Box(SourceID_t551_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"
extern TypeInfo* DefaultValueAttribute_t738_il2cpp_TypeInfo_var;
extern TypeInfo* NetworkID_t552_il2cpp_TypeInfo_var;
void NetworkID_t552_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		NetworkID_t552_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(957);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint64_t _tmp_0 = 18446744073709551615;
		DefaultValueAttribute_t738 * tmp;
		tmp = (DefaultValueAttribute_t738 *)il2cpp_codegen_object_new (DefaultValueAttribute_t738_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3314(tmp, Box(NetworkID_t552_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Networking.Types.NodeID
#include "UnityEngine_UnityEngine_Networking_Types_NodeID.h"
extern TypeInfo* DefaultValueAttribute_t738_il2cpp_TypeInfo_var;
extern TypeInfo* NodeID_t553_il2cpp_TypeInfo_var;
void NodeID_t553_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t738_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1071);
		NodeID_t553_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(958);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		uint16_t _tmp_0 = 0;
		DefaultValueAttribute_t738 * tmp;
		tmp = (DefaultValueAttribute_t738 *)il2cpp_codegen_object_new (DefaultValueAttribute_t738_il2cpp_TypeInfo_var);
		DefaultValueAttribute__ctor_m3314(tmp, Box(NodeID_t553_il2cpp_TypeInfo_var, &_tmp_0), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"
// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttributeMethodDeclarations.h"
extern TypeInfo* DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var;
void NetworkMatch_t559_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m3315(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t363 * tmp;
		tmp = (DebuggerHiddenAttribute_t363 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1851(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t740_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t740_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3321(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t363 * tmp;
		tmp = (DebuggerHiddenAttribute_t363 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1851(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t740_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m3322(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t363 * tmp;
		tmp = (DebuggerHiddenAttribute_t363 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1851(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var;
void U3CProcessMatchResponseU3Ec__Iterator0_1_t740_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m3324(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(210);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggerHiddenAttribute_t363 * tmp;
		tmp = (DebuggerHiddenAttribute_t363 *)il2cpp_codegen_object_new (DebuggerHiddenAttribute_t363_il2cpp_TypeInfo_var);
		DebuggerHiddenAttribute__ctor_m1851(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttribute.h"
// System.CodeDom.Compiler.GeneratedCodeAttribute
#include "System_System_CodeDom_Compiler_GeneratedCodeAttributeMethodDeclarations.h"
extern TypeInfo* EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var;
void JsonArray_t560_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1069);
		GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1072);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t735 * tmp;
		tmp = (EditorBrowsableAttribute_t735 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3299(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t741 * tmp;
		tmp = (GeneratedCodeAttribute_t741 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3325(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
extern TypeInfo* EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var;
extern TypeInfo* GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var;
void JsonObject_t563_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1069);
		GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1072);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		EditorBrowsableAttribute_t735 * tmp;
		tmp = (EditorBrowsableAttribute_t735 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3299(tmp, 1, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		GeneratedCodeAttribute_t741 * tmp;
		tmp = (GeneratedCodeAttribute_t741 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3325(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var;
void SimpleJson_t566_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1072);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t741 * tmp;
		tmp = (GeneratedCodeAttribute_t741 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3325(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttr.h"
// System.Diagnostics.CodeAnalysis.SuppressMessageAttribute
#include "mscorlib_System_Diagnostics_CodeAnalysis_SuppressMessageAttrMethodDeclarations.h"
extern TypeInfo* SuppressMessageAttribute_t742_il2cpp_TypeInfo_var;
void SimpleJson_t566_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m2934(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1073);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t742 * tmp;
		tmp = (SuppressMessageAttribute_t742 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t742_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3326(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3327(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t742_il2cpp_TypeInfo_var;
void SimpleJson_t566_CustomAttributesCacheGenerator_SimpleJson_NextToken_m2946(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1073);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t742 * tmp;
		tmp = (SuppressMessageAttribute_t742 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t742_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3326(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Maintainability"), il2cpp_codegen_string_new_wrapper("CA1502:AvoidExcessiveComplexity"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var;
void SimpleJson_t566_CustomAttributesCacheGenerator_SimpleJson_t566____PocoJsonSerializerStrategy_PropertyInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1069);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		EditorBrowsableAttribute_t735 * tmp;
		tmp = (EditorBrowsableAttribute_t735 *)il2cpp_codegen_object_new (EditorBrowsableAttribute_t735_il2cpp_TypeInfo_var);
		EditorBrowsableAttribute__ctor_m3299(tmp, 2, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t564_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1072);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t741 * tmp;
		tmp = (GeneratedCodeAttribute_t741 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3325(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t742_il2cpp_TypeInfo_var;
void IJsonSerializerStrategy_t564_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3328(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1073);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t742 * tmp;
		tmp = (SuppressMessageAttribute_t742 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t742_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3326(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3327(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t565_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1072);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t741 * tmp;
		tmp = (GeneratedCodeAttribute_t741 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3325(tmp, il2cpp_codegen_string_new_wrapper("simple-json"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t742_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t565_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m2963(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1073);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t742 * tmp;
		tmp = (SuppressMessageAttribute_t742 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t742_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3326(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3327(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SuppressMessageAttribute_t742_il2cpp_TypeInfo_var;
void PocoJsonSerializerStrategy_t565_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m2964(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SuppressMessageAttribute_t742_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1073);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SuppressMessageAttribute_t742 * tmp;
		tmp = (SuppressMessageAttribute_t742 *)il2cpp_codegen_object_new (SuppressMessageAttribute_t742_il2cpp_TypeInfo_var);
		SuppressMessageAttribute__ctor_m3326(tmp, il2cpp_codegen_string_new_wrapper("Microsoft.Design"), il2cpp_codegen_string_new_wrapper("CA1007:UseGenericsWhereAppropriate"), NULL);
		SuppressMessageAttribute_set_Justification_m3327(tmp, il2cpp_codegen_string_new_wrapper("Need to support .NET 2"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var;
void ReflectionUtils_t580_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1072);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		GeneratedCodeAttribute_t741 * tmp;
		tmp = (GeneratedCodeAttribute_t741 *)il2cpp_codegen_object_new (GeneratedCodeAttribute_t741_il2cpp_TypeInfo_var);
		GeneratedCodeAttribute__ctor_m3325(tmp, il2cpp_codegen_string_new_wrapper("reflection-utils"), il2cpp_codegen_string_new_wrapper("1.0.0"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void ReflectionUtils_t580_CustomAttributesCacheGenerator_ReflectionUtils_t580_ReflectionUtils_GetConstructorInfo_m2989_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void ReflectionUtils_t580_CustomAttributesCacheGenerator_ReflectionUtils_t580_ReflectionUtils_GetContructor_m2994_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void ReflectionUtils_t580_CustomAttributesCacheGenerator_ReflectionUtils_t580_ReflectionUtils_GetConstructorByReflection_m2996_Arg1_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void ThreadSafeDictionary_2_t743_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultMemberAttribute_t367_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(213);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t367 * tmp;
		tmp = (DefaultMemberAttribute_t367 *)il2cpp_codegen_object_new (DefaultMemberAttribute_t367_il2cpp_TypeInfo_var);
		DefaultMemberAttribute__ctor_m1854(tmp, il2cpp_codegen_string_new_wrapper("Item"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void ConstructorDelegate_t573_CustomAttributesCacheGenerator_ConstructorDelegate_t573_ConstructorDelegate_Invoke_m2974_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void ConstructorDelegate_t573_CustomAttributesCacheGenerator_ConstructorDelegate_t573_ConstructorDelegate_BeginInvoke_m2975_Arg0_ParameterInfo(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ParamArrayAttribute_t731_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1063);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ParamArrayAttribute_t731 * tmp;
		tmp = (ParamArrayAttribute_t731 *)il2cpp_codegen_object_new (ParamArrayAttribute_t731_il2cpp_TypeInfo_var);
		ParamArrayAttribute__ctor_m3293(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void U3CGetConstructorByReflectionU3Ec__AnonStorey1_t575_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t576_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t577_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t578_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t579_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttribute.h"
// System.AttributeUsageAttribute
#include "mscorlib_System_AttributeUsageAttributeMethodDeclarations.h"
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void IL2CPPStructAlignmentAttribute_t582_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 8, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void DisallowMultipleComponent_t587_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 4, NULL);
		AttributeUsageAttribute_set_Inherited_m3353(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void RequireComponent_t360_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3354(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void WritableAttribute_t589_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 2048, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3354(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void AssemblyIsEditorAssembly_t590_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 1, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Achievement_t602_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Achievement_t602_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Achievement_t602_CustomAttributesCacheGenerator_Achievement_get_id_m3047(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Achievement_t602_CustomAttributesCacheGenerator_Achievement_set_id_m3048(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Achievement_t602_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m3049(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Achievement_t602_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m3050(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void AchievementDescription_t603_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void AchievementDescription_t603_CustomAttributesCacheGenerator_AchievementDescription_get_id_m3057(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void AchievementDescription_t603_CustomAttributesCacheGenerator_AchievementDescription_set_id_m3058(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Score_t604_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Score_t604_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Score_t604_CustomAttributesCacheGenerator_Score_get_leaderboardID_m3067(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Score_t604_CustomAttributesCacheGenerator_Score_set_leaderboardID_m3068(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Score_t604_CustomAttributesCacheGenerator_Score_get_value_m3069(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Score_t604_CustomAttributesCacheGenerator_Score_set_value_m3070(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_get_id_m3078(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_set_id_m3079(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m3080(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m3081(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_get_range_m3082(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_set_range_m3083(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m3084(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m3085(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(211);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t364 * tmp;
		tmp = (CompilerGeneratedAttribute_t364 *)il2cpp_codegen_object_new (CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var);
		CompilerGeneratedAttribute__ctor_m1852(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var;
void StackTraceUtility_t615_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m3097(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1070);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t736 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t736 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3302(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var;
void StackTraceUtility_t615_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m3100(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1070);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t736 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t736 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3302(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var;
void StackTraceUtility_t615_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m3102(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1070);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SecuritySafeCriticalAttribute_t736 * tmp;
		tmp = (SecuritySafeCriticalAttribute_t736 *)il2cpp_codegen_object_new (SecuritySafeCriticalAttribute_t736_il2cpp_TypeInfo_var);
		SecuritySafeCriticalAttribute__ctor_m3302(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void SharedBetweenAnimatorsAttribute_t617_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 4, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3354(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
// UnityEngine.Serialization.FormerlySerializedAsAttribute
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
extern TypeInfo* FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void ArgumentCache_t623_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t636 * tmp;
		tmp = (FormerlySerializedAsAttribute_t636 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3146(tmp, il2cpp_codegen_string_new_wrapper("objectArgumentAssemblyTypeName"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var;
void PersistentCall_t626_CustomAttributesCacheGenerator_m_Arguments(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t636 * tmp;
		tmp = (FormerlySerializedAsAttribute_t636 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3146(tmp, il2cpp_codegen_string_new_wrapper("arguments"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var;
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void PersistentCall_t626_CustomAttributesCacheGenerator_m_CallState(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		FormerlySerializedAsAttribute_t636 * tmp;
		tmp = (FormerlySerializedAsAttribute_t636 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3146(tmp, il2cpp_codegen_string_new_wrapper("enabled"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t636 * tmp;
		tmp = (FormerlySerializedAsAttribute_t636 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3146(tmp, il2cpp_codegen_string_new_wrapper("m_Enabled"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var;
void PersistentCallGroup_t628_CustomAttributesCacheGenerator_m_Calls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t636 * tmp;
		tmp = (FormerlySerializedAsAttribute_t636 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3146(tmp, il2cpp_codegen_string_new_wrapper("m_Listeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
extern TypeInfo* FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var;
void UnityEventBase_t631_CustomAttributesCacheGenerator_m_PersistentCalls(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1075);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 2;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		FormerlySerializedAsAttribute_t636 * tmp;
		tmp = (FormerlySerializedAsAttribute_t636 *)il2cpp_codegen_object_new (FormerlySerializedAsAttribute_t636_il2cpp_TypeInfo_var);
		FormerlySerializedAsAttribute__ctor_m3146(tmp, il2cpp_codegen_string_new_wrapper("m_PersistentListeners"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* SerializeField_t362_il2cpp_TypeInfo_var;
void UnityEventBase_t631_CustomAttributesCacheGenerator_m_TypeName(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SerializeField_t362_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(209);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		SerializeField_t362 * tmp;
		tmp = (SerializeField_t362 *)il2cpp_codegen_object_new (SerializeField_t362_il2cpp_TypeInfo_var);
		SerializeField__ctor_m1850(tmp, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenu.h"
// UnityEngine.AddComponentMenu
#include "UnityEngine_UnityEngine_AddComponentMenuMethodDeclarations.h"
extern TypeInfo* AddComponentMenu_t359_il2cpp_TypeInfo_var;
void UserAuthorizationDialog_t633_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AddComponentMenu_t359_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(206);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AddComponentMenu_t359 * tmp;
		tmp = (AddComponentMenu_t359 *)il2cpp_codegen_object_new (AddComponentMenu_t359_il2cpp_TypeInfo_var);
		AddComponentMenu__ctor_m1845(tmp, il2cpp_codegen_string_new_wrapper(""), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void DefaultValueAttribute_t634_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 18432, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void ExcludeFromDocsAttribute_t635_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void FormerlySerializedAsAttribute_t636_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 256, NULL);
		AttributeUsageAttribute_set_AllowMultiple_m3354(tmp, true, NULL);
		AttributeUsageAttribute_set_Inherited_m3353(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* AttributeUsageAttribute_t745_il2cpp_TypeInfo_var;
void TypeInferenceRuleAttribute_t638_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AttributeUsageAttribute_t745_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1074);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AttributeUsageAttribute_t745 * tmp;
		tmp = (AttributeUsageAttribute_t745 *)il2cpp_codegen_object_new (AttributeUsageAttribute_t745_il2cpp_TypeInfo_var);
		AttributeUsageAttribute__ctor_m3352(tmp, 64, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_UnityEngine_Assembly_AttributeGenerators[697] = 
{
	NULL,
	g_UnityEngine_Assembly_CustomAttributesCacheGenerator,
	AssetBundleCreateRequest_t404_CustomAttributesCacheGenerator_AssetBundleCreateRequest_get_assetBundle_m1938,
	AssetBundleCreateRequest_t404_CustomAttributesCacheGenerator_AssetBundleCreateRequest_DisableCompatibilityChecks_m1939,
	AssetBundle_t406_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_m1943,
	AssetBundle_t406_CustomAttributesCacheGenerator_AssetBundle_LoadAsset_Internal_m1944,
	AssetBundle_t406_CustomAttributesCacheGenerator_AssetBundle_LoadAssetWithSubAssets_Internal_m1945,
	LayerMask_t225_CustomAttributesCacheGenerator_LayerMask_LayerToName_m1948,
	LayerMask_t225_CustomAttributesCacheGenerator_LayerMask_NameToLayer_m1949,
	LayerMask_t225_CustomAttributesCacheGenerator_LayerMask_t225_LayerMask_GetMask_m1950_Arg0_ParameterInfo,
	RuntimePlatform_t409_CustomAttributesCacheGenerator_NaCl,
	RuntimePlatform_t409_CustomAttributesCacheGenerator_FlashPlayer,
	RuntimePlatform_t409_CustomAttributesCacheGenerator_MetroPlayerX86,
	RuntimePlatform_t409_CustomAttributesCacheGenerator_MetroPlayerX64,
	RuntimePlatform_t409_CustomAttributesCacheGenerator_MetroPlayerARM,
	SystemInfo_t411_CustomAttributesCacheGenerator_SystemInfo_get_graphicsShaderLevel_m1687,
	SystemInfo_t411_CustomAttributesCacheGenerator_SystemInfo_get_deviceUniqueIdentifier_m1951,
	Coroutine_t415_CustomAttributesCacheGenerator_Coroutine_ReleaseCoroutine_m1955,
	ScriptableObject_t416_CustomAttributesCacheGenerator_ScriptableObject_Internal_CreateScriptableObject_m1958,
	ScriptableObject_t416_CustomAttributesCacheGenerator_ScriptableObject_t416_ScriptableObject_Internal_CreateScriptableObject_m1958_Arg0_ParameterInfo,
	ScriptableObject_t416_CustomAttributesCacheGenerator_ScriptableObject_CreateInstance_m1959,
	ScriptableObject_t416_CustomAttributesCacheGenerator_ScriptableObject_CreateInstanceFromType_m1961,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticate_m1966,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Authenticated_m1967,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserName_m1968,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserID_m1969,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_Underage_m1970,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_UserImage_m1971,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadFriends_m1972,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievementDescriptions_m1973,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadAchievements_m1974,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportProgress_m1975,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ReportScore_m1976,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadScores_m1977,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowAchievementsUI_m1978,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowLeaderboardUI_m1979,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_LoadUsers_m1980,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ResetAllAchievements_m1981,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowDefaultAchievementBanner_m1982,
	GameCenterPlatform_t426_CustomAttributesCacheGenerator_GameCenterPlatform_Internal_ShowSpecificLeaderboardUI_m1986,
	GcLeaderboard_t428_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScores_m2030,
	GcLeaderboard_t428_CustomAttributesCacheGenerator_GcLeaderboard_Internal_LoadScoresWithUsers_m2031,
	GcLeaderboard_t428_CustomAttributesCacheGenerator_GcLeaderboard_Loading_m2032,
	GcLeaderboard_t428_CustomAttributesCacheGenerator_GcLeaderboard_Dispose_m2033,
	QualitySettings_t429_CustomAttributesCacheGenerator_QualitySettings_GetQualityLevel_m1359,
	MeshFilter_t172_CustomAttributesCacheGenerator_MeshFilter_get_mesh_m1625,
	MeshFilter_t172_CustomAttributesCacheGenerator_MeshFilter_set_mesh_m1624,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_Internal_Create_m2034,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_t171_Mesh_Internal_Create_m2034_Arg0_ParameterInfo,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_Clear_m2035,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_t171_Mesh_Clear_m2035_Arg0_ParameterInfo,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_Clear_m1603,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_vertices_m1614,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_normals_m1615,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_tangents_m1617,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_uv_m1619,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_colors32_m1621,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_RecalculateBounds_m1623,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_set_triangles_m1622,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_get_vertexCount_m1598,
	Mesh_t171_CustomAttributesCacheGenerator_Mesh_MarkDynamic_m1602,
	Renderer_t301_CustomAttributesCacheGenerator_Renderer_get_material_m1299,
	Renderer_t301_CustomAttributesCacheGenerator_Renderer_get_sharedMaterial_m1612,
	Renderer_t301_CustomAttributesCacheGenerator_Renderer_get_sharedMaterials_m1610,
	Renderer_t301_CustomAttributesCacheGenerator_Renderer_set_sharedMaterials_m1611,
	Screen_t431_CustomAttributesCacheGenerator_Screen_get_width_m1257,
	Screen_t431_CustomAttributesCacheGenerator_Screen_get_height_m1259,
	Texture_t263_CustomAttributesCacheGenerator_Texture_Internal_GetWidth_m2057,
	Texture_t263_CustomAttributesCacheGenerator_Texture_Internal_GetHeight_m2058,
	Texture2D_t42_CustomAttributesCacheGenerator_Texture2D_Internal_Create_m2062,
	Texture2D_t42_CustomAttributesCacheGenerator_Texture2D_t42_Texture2D_Internal_Create_m2062_Arg0_ParameterInfo,
	RenderTexture_t432_CustomAttributesCacheGenerator_RenderTexture_Internal_GetWidth_m2063,
	RenderTexture_t432_CustomAttributesCacheGenerator_RenderTexture_Internal_GetHeight_m2064,
	GUILayer_t436_CustomAttributesCacheGenerator_GUILayer_INTERNAL_CALL_HitTest_m2068,
	Gradient_t439_CustomAttributesCacheGenerator_Gradient_Init_m2072,
	Gradient_t439_CustomAttributesCacheGenerator_Gradient_Cleanup_m2073,
	GUI_t444_CustomAttributesCacheGenerator_U3CnextScrollStepTimeU3Ek__BackingField,
	GUI_t444_CustomAttributesCacheGenerator_U3CscrollTroughSideU3Ek__BackingField,
	GUI_t444_CustomAttributesCacheGenerator_GUI_set_nextScrollStepTime_m2081,
	GUI_t444_CustomAttributesCacheGenerator_GUI_set_changed_m2084,
	GUI_t444_CustomAttributesCacheGenerator_GUI_INTERNAL_CALL_DoLabel_m2087,
	GUILayout_t446_CustomAttributesCacheGenerator_GUILayout_t446_GUILayout_Label_m1537_Arg1_ParameterInfo,
	GUILayoutUtility_t451_CustomAttributesCacheGenerator_GUILayoutUtility_Internal_GetWindowRect_m2101,
	GUILayoutUtility_t451_CustomAttributesCacheGenerator_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m2103,
	GUILayoutUtility_t451_CustomAttributesCacheGenerator_GUILayoutUtility_t451_GUILayoutUtility_GetRect_m2104_Arg2_ParameterInfo,
	GUIUtility_t328_CustomAttributesCacheGenerator_GUIUtility_Internal_GetDefaultSkin_m2143,
	GUIUtility_t328_CustomAttributesCacheGenerator_GUIUtility_Internal_ExitGUI_m2145,
	GUIUtility_t328_CustomAttributesCacheGenerator_GUIUtility_Internal_GetGUIDepth_m2149,
	GUISettings_t461_CustomAttributesCacheGenerator_m_DoubleClickSelectsWord,
	GUISettings_t461_CustomAttributesCacheGenerator_m_TripleClickSelectsLine,
	GUISettings_t461_CustomAttributesCacheGenerator_m_CursorColor,
	GUISettings_t461_CustomAttributesCacheGenerator_m_CursorFlashSpeed,
	GUISettings_t461_CustomAttributesCacheGenerator_m_SelectionColor,
	GUISkin_t442_CustomAttributesCacheGenerator,
	GUISkin_t442_CustomAttributesCacheGenerator_m_Font,
	GUISkin_t442_CustomAttributesCacheGenerator_m_box,
	GUISkin_t442_CustomAttributesCacheGenerator_m_button,
	GUISkin_t442_CustomAttributesCacheGenerator_m_toggle,
	GUISkin_t442_CustomAttributesCacheGenerator_m_label,
	GUISkin_t442_CustomAttributesCacheGenerator_m_textField,
	GUISkin_t442_CustomAttributesCacheGenerator_m_textArea,
	GUISkin_t442_CustomAttributesCacheGenerator_m_window,
	GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalSlider,
	GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalSliderThumb,
	GUISkin_t442_CustomAttributesCacheGenerator_m_verticalSlider,
	GUISkin_t442_CustomAttributesCacheGenerator_m_verticalSliderThumb,
	GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalScrollbar,
	GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalScrollbarThumb,
	GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalScrollbarLeftButton,
	GUISkin_t442_CustomAttributesCacheGenerator_m_horizontalScrollbarRightButton,
	GUISkin_t442_CustomAttributesCacheGenerator_m_verticalScrollbar,
	GUISkin_t442_CustomAttributesCacheGenerator_m_verticalScrollbarThumb,
	GUISkin_t442_CustomAttributesCacheGenerator_m_verticalScrollbarUpButton,
	GUISkin_t442_CustomAttributesCacheGenerator_m_verticalScrollbarDownButton,
	GUISkin_t442_CustomAttributesCacheGenerator_m_ScrollView,
	GUISkin_t442_CustomAttributesCacheGenerator_m_CustomStyles,
	GUISkin_t442_CustomAttributesCacheGenerator_m_Settings,
	GUIContent_t456_CustomAttributesCacheGenerator_m_Text,
	GUIContent_t456_CustomAttributesCacheGenerator_m_Image,
	GUIContent_t456_CustomAttributesCacheGenerator_m_Tooltip,
	GUIStyleState_t465_CustomAttributesCacheGenerator_GUIStyleState_Init_m2218,
	GUIStyleState_t465_CustomAttributesCacheGenerator_GUIStyleState_Cleanup_m2219,
	GUIStyleState_t465_CustomAttributesCacheGenerator_GUIStyleState_GetBackgroundInternal_m2220,
	GUIStyleState_t465_CustomAttributesCacheGenerator_GUIStyleState_INTERNAL_set_textColor_m2221,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_Init_m2227,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_Cleanup_m2228,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_left_m2229,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_set_left_m2230,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_right_m2231,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_set_right_m2232,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_top_m2233,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_set_top_m2234,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_bottom_m2235,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_set_bottom_m2236,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_horizontal_m2237,
	RectOffset_t454_CustomAttributesCacheGenerator_RectOffset_get_vertical_m2238,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Init_m2243,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Cleanup_m2244,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_name_m2245,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_set_name_m2246,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_GetStyleStatePtr_m2248,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_GetRectOffsetPtr_m2251,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_imagePosition_m2252,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_wordWrap_m2253,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_fixedWidth_m2254,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_fixedHeight_m2255,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_stretchWidth_m2256,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_set_stretchWidth_m2257,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_get_stretchHeight_m2258,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_set_stretchHeight_m2259,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_SetDefaultFont_m2260,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcSize_m2263,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcHeight_m2265,
	GUIStyle_t450_CustomAttributesCacheGenerator_GUIStyle_Internal_CalcMinMaxWidth_m2268,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_Destroy_m2271,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m2273,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1761,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_Open_m1762,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg1_ParameterInfo,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg2_ParameterInfo,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg3_ParameterInfo,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg4_ParameterInfo,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg5_ParameterInfo,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_t237_TouchScreenKeyboard_Open_m2274_Arg6_ParameterInfo,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_text_m1766,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_text_m1760,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_set_active_m1765,
	TouchScreenKeyboard_t237_CustomAttributesCacheGenerator_TouchScreenKeyboard_get_done_m1767,
	Event_t469_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map0,
	Event_t469_CustomAttributesCacheGenerator_Event_Init_m2276,
	Event_t469_CustomAttributesCacheGenerator_Event_Cleanup_m2278,
	Event_t469_CustomAttributesCacheGenerator_Event_get_rawType_m2279,
	Event_t469_CustomAttributesCacheGenerator_Event_get_type_m2280,
	Event_t469_CustomAttributesCacheGenerator_Event_Internal_GetMousePosition_m2282,
	Event_t469_CustomAttributesCacheGenerator_Event_get_modifiers_m2283,
	Event_t469_CustomAttributesCacheGenerator_Event_get_character_m2284,
	Event_t469_CustomAttributesCacheGenerator_Event_get_commandName_m2285,
	Event_t469_CustomAttributesCacheGenerator_Event_get_keyCode_m2286,
	Event_t469_CustomAttributesCacheGenerator_Event_Internal_SetNativeEvent_m2288,
	EventModifiers_t471_CustomAttributesCacheGenerator,
	Vector2_t55_CustomAttributesCacheGenerator,
	Vector3_t48_CustomAttributesCacheGenerator,
	Color_t25_CustomAttributesCacheGenerator,
	Color32_t295_CustomAttributesCacheGenerator,
	Quaternion_t50_CustomAttributesCacheGenerator,
	Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_LookRotation_m1326,
	Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_LookRotation_m2314,
	Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Slerp_m2315,
	Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m2318,
	Quaternion_t50_CustomAttributesCacheGenerator_Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m2320,
	Matrix4x4_t191_CustomAttributesCacheGenerator,
	Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Inverse_m2336,
	Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Transpose_m2338,
	Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_Invert_m2340,
	Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_get_isIdentity_m2343,
	Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_INTERNAL_CALL_TRS_m2353,
	Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_Ortho_m2356,
	Matrix4x4_t191_CustomAttributesCacheGenerator_Matrix4x4_Perspective_m2357,
	Bounds_t113_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_Contains_m2370,
	Bounds_t113_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_SqrDistance_m2373,
	Bounds_t113_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_IntersectRay_m2376,
	Bounds_t113_CustomAttributesCacheGenerator_Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2380,
	Vector4_t175_CustomAttributesCacheGenerator,
	Mathf_t299_CustomAttributesCacheGenerator_Mathf_t299_Mathf_Min_m1789_Arg0_ParameterInfo,
	Mathf_t299_CustomAttributesCacheGenerator_Mathf_t299_Mathf_Max_m1790_Arg0_ParameterInfo,
	Resources_t476_CustomAttributesCacheGenerator_Resources_FindObjectsOfTypeAll_m1703,
	Resources_t476_CustomAttributesCacheGenerator_Resources_Load_m1531,
	TextAsset_t289_CustomAttributesCacheGenerator_TextAsset_get_text_m2416,
	TextAsset_t289_CustomAttributesCacheGenerator_TextAsset_get_bytes_m1524,
	SerializePrivateVariables_t477_CustomAttributesCacheGenerator,
	Shader_t262_CustomAttributesCacheGenerator_Shader_Find_m1607,
	Shader_t262_CustomAttributesCacheGenerator_Shader_set_globalMaximumLOD_m1360,
	Shader_t262_CustomAttributesCacheGenerator_Shader_PropertyToID_m2419,
	Material_t170_CustomAttributesCacheGenerator_Material_get_shader_m1606,
	Material_t170_CustomAttributesCacheGenerator_Material_set_shader_m1608,
	Material_t170_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetColor_m2422,
	Material_t170_CustomAttributesCacheGenerator_Material_GetColor_m2424,
	Material_t170_CustomAttributesCacheGenerator_Material_SetTexture_m2426,
	Material_t170_CustomAttributesCacheGenerator_Material_GetTexture_m2428,
	Material_t170_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureOffset_m2430,
	Material_t170_CustomAttributesCacheGenerator_Material_INTERNAL_CALL_SetTextureScale_m2432,
	Material_t170_CustomAttributesCacheGenerator_Material_get_renderQueue_m1594,
	Material_t170_CustomAttributesCacheGenerator_Material_set_renderQueue_m1595,
	Material_t170_CustomAttributesCacheGenerator_Material_Internal_CreateWithShader_m2433,
	Material_t170_CustomAttributesCacheGenerator_Material_t170_Material_Internal_CreateWithShader_m2433_Arg0_ParameterInfo,
	Material_t170_CustomAttributesCacheGenerator_Material_Internal_CreateWithMaterial_m2434,
	Material_t170_CustomAttributesCacheGenerator_Material_t170_Material_Internal_CreateWithMaterial_m2434_Arg0_ParameterInfo,
	Material_t170_CustomAttributesCacheGenerator_Material_CopyPropertiesFromMaterial_m1605,
	SphericalHarmonicsL2_t479_CustomAttributesCacheGenerator,
	SphericalHarmonicsL2_t479_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m2437,
	SphericalHarmonicsL2_t479_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m2440,
	SphericalHarmonicsL2_t479_CustomAttributesCacheGenerator_SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m2443,
	WWW_t38_CustomAttributesCacheGenerator_WWW_DestroyWWW_m2455,
	WWW_t38_CustomAttributesCacheGenerator_WWW_InitWWW_m2456,
	WWW_t38_CustomAttributesCacheGenerator_WWW_get_responseHeadersString_m2458,
	WWW_t38_CustomAttributesCacheGenerator_WWW_get_bytes_m2462,
	WWW_t38_CustomAttributesCacheGenerator_WWW_get_error_m2463,
	WWW_t38_CustomAttributesCacheGenerator_WWW_GetTexture_m2464,
	WWW_t38_CustomAttributesCacheGenerator_WWW_get_isDone_m2465,
	WWWForm_t292_CustomAttributesCacheGenerator_WWWForm_AddField_m2469,
	WWWForm_t292_CustomAttributesCacheGenerator_WWWForm_t292_WWWForm_AddField_m2470_Arg2_ParameterInfo,
	WWWTranscoder_t481_CustomAttributesCacheGenerator_WWWTranscoder_t481_WWWTranscoder_QPEncode_m2477_Arg1_ParameterInfo,
	WWWTranscoder_t481_CustomAttributesCacheGenerator_WWWTranscoder_t481_WWWTranscoder_SevenBitClean_m2480_Arg1_ParameterInfo,
	CacheIndex_t482_CustomAttributesCacheGenerator,
	UnityString_t483_CustomAttributesCacheGenerator_UnityString_t483_UnityString_Format_m2482_Arg1_ParameterInfo,
	AsyncOperation_t405_CustomAttributesCacheGenerator_AsyncOperation_InternalDestroy_m2484,
	Application_t485_CustomAttributesCacheGenerator_Application_Quit_m1833,
	Application_t485_CustomAttributesCacheGenerator_Application_LoadLevelAsync_m2490,
	Application_t485_CustomAttributesCacheGenerator_Application_get_isPlaying_m1372,
	Application_t485_CustomAttributesCacheGenerator_Application_get_isEditor_m1577,
	Application_t485_CustomAttributesCacheGenerator_Application_get_platform_m1545,
	Application_t485_CustomAttributesCacheGenerator_Application_get_dataPath_m1820,
	Application_t485_CustomAttributesCacheGenerator_Application_get_persistentDataPath_m1582,
	Application_t485_CustomAttributesCacheGenerator_Application_t485____persistentDataPath_PropertyInfo,
	Behaviour_t434_CustomAttributesCacheGenerator_Behaviour_get_enabled_m1318,
	Behaviour_t434_CustomAttributesCacheGenerator_Behaviour_set_enabled_m1272,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_fieldOfView_m1669,
	Camera_t7_CustomAttributesCacheGenerator_Camera_set_fieldOfView_m1670,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_nearClipPlane_m1719,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_farClipPlane_m1718,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_orthographicSize_m1672,
	Camera_t7_CustomAttributesCacheGenerator_Camera_set_orthographicSize_m1673,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_orthographic_m1262,
	Camera_t7_CustomAttributesCacheGenerator_Camera_set_orthographic_m1776,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_depth_m1714,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_cullingMask_m1573,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_eventMask_m2497,
	Camera_t7_CustomAttributesCacheGenerator_Camera_set_eventMask_m1724,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_get_rect_m2498,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_set_rect_m2499,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_get_pixelRect_m2500,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_targetTexture_m2501,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_pixelWidth_m1798,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_pixelHeight_m1799,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_clearFlags_m2502,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToScreenPoint_m2503,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_WorldToViewportPoint_m2504,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ViewportToWorldPoint_m2505,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToWorldPoint_m2506,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenToViewportPoint_m2507,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_ScreenPointToRay_m2508,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_main_m1566,
	Camera_t7_CustomAttributesCacheGenerator_Camera_get_allCamerasCount_m2509,
	Camera_t7_CustomAttributesCacheGenerator_Camera_GetAllCameras_m2510,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry_m2515,
	Camera_t7_CustomAttributesCacheGenerator_Camera_INTERNAL_CALL_RaycastTry2D_m2517,
	CameraCallback_t486_CustomAttributesCacheGenerator,
	Debug_t487_CustomAttributesCacheGenerator_Debug_DrawLine_m1536,
	Debug_t487_CustomAttributesCacheGenerator_Debug_INTERNAL_CALL_DrawLine_m2518,
	Debug_t487_CustomAttributesCacheGenerator_Debug_Internal_Log_m2519,
	Debug_t487_CustomAttributesCacheGenerator_Debug_t487_Debug_Internal_Log_m2519_Arg2_ParameterInfo,
	Display_t490_CustomAttributesCacheGenerator_Display_GetSystemExtImpl_m2544,
	Display_t490_CustomAttributesCacheGenerator_Display_GetRenderingExtImpl_m2545,
	Display_t490_CustomAttributesCacheGenerator_Display_GetRenderingBuffersImpl_m2546,
	Display_t490_CustomAttributesCacheGenerator_Display_SetRenderingResolutionImpl_m2547,
	Display_t490_CustomAttributesCacheGenerator_Display_ActivateDisplayImpl_m2548,
	Display_t490_CustomAttributesCacheGenerator_Display_SetParamsImpl_m2549,
	Display_t490_CustomAttributesCacheGenerator_Display_MultiDisplayLicenseImpl_m2550,
	Display_t490_CustomAttributesCacheGenerator_Display_RelativeMouseAtImpl_m2551,
	MonoBehaviour_t3_CustomAttributesCacheGenerator_MonoBehaviour_StartCoroutine_Auto_m2552,
	Input_t298_CustomAttributesCacheGenerator_Input_GetKeyInt_m2554,
	Input_t298_CustomAttributesCacheGenerator_Input_GetKeyUpInt_m2555,
	Input_t298_CustomAttributesCacheGenerator_Input_GetKeyDownInt_m2556,
	Input_t298_CustomAttributesCacheGenerator_Input_GetAxis_m1723,
	Input_t298_CustomAttributesCacheGenerator_Input_GetMouseButton_m1729,
	Input_t298_CustomAttributesCacheGenerator_Input_GetMouseButtonDown_m1731,
	Input_t298_CustomAttributesCacheGenerator_Input_GetMouseButtonUp_m1730,
	Input_t298_CustomAttributesCacheGenerator_Input_get_mousePosition_m1256,
	Input_t298_CustomAttributesCacheGenerator_Input_get_inputString_m1727,
	Input_t298_CustomAttributesCacheGenerator_Input_GetTouch_m1732,
	Input_t298_CustomAttributesCacheGenerator_Input_get_touchCount_m1737,
	Input_t298_CustomAttributesCacheGenerator_Input_set_imeCompositionMode_m1763,
	Input_t298_CustomAttributesCacheGenerator_Input_get_compositionString_m1768,
	Input_t298_CustomAttributesCacheGenerator_Input_INTERNAL_set_compositionCursorPos_m2557,
	HideFlags_t493_CustomAttributesCacheGenerator,
	Object_t69_CustomAttributesCacheGenerator_Object_Internal_CloneSingle_m2559,
	Object_t69_CustomAttributesCacheGenerator_Object_INTERNAL_CALL_Internal_InstantiateSingle_m2561,
	Object_t69_CustomAttributesCacheGenerator_Object_Destroy_m1485,
	Object_t69_CustomAttributesCacheGenerator_Object_t69_Object_Destroy_m1485_Arg1_ParameterInfo,
	Object_t69_CustomAttributesCacheGenerator_Object_Destroy_m1250,
	Object_t69_CustomAttributesCacheGenerator_Object_DestroyImmediate_m2562,
	Object_t69_CustomAttributesCacheGenerator_Object_t69_Object_DestroyImmediate_m2562_Arg1_ParameterInfo,
	Object_t69_CustomAttributesCacheGenerator_Object_DestroyImmediate_m1382,
	Object_t69_CustomAttributesCacheGenerator_Object_FindObjectsOfType_m1578,
	Object_t69_CustomAttributesCacheGenerator_Object_get_name_m1344,
	Object_t69_CustomAttributesCacheGenerator_Object_set_name_m1601,
	Object_t69_CustomAttributesCacheGenerator_Object_DontDestroyOnLoad_m1379,
	Object_t69_CustomAttributesCacheGenerator_Object_set_hideFlags_m1600,
	Object_t69_CustomAttributesCacheGenerator_Object_ToString_m1888,
	Object_t69_CustomAttributesCacheGenerator_Object_Instantiate_m1284,
	Object_t69_CustomAttributesCacheGenerator_Object_FindObjectOfType_m1377,
	Component_t107_CustomAttributesCacheGenerator_Component_get_transform_m1253,
	Component_t107_CustomAttributesCacheGenerator_Component_get_gameObject_m1246,
	Component_t107_CustomAttributesCacheGenerator_Component_GetComponentFastPath_m2569,
	Component_t107_CustomAttributesCacheGenerator_Component_GetComponent_m3301,
	Component_t107_CustomAttributesCacheGenerator_Component_GetComponentInChildren_m2570,
	Component_t107_CustomAttributesCacheGenerator_Component_SendMessage_m1401,
	Component_t107_CustomAttributesCacheGenerator_Component_t107_Component_SendMessage_m1401_Arg1_ParameterInfo,
	Component_t107_CustomAttributesCacheGenerator_Component_t107_Component_SendMessage_m1401_Arg2_ParameterInfo,
	Component_t107_CustomAttributesCacheGenerator_Component_BroadcastMessage_m1807,
	Component_t107_CustomAttributesCacheGenerator_Component_t107_Component_BroadcastMessage_m1807_Arg1_ParameterInfo,
	Component_t107_CustomAttributesCacheGenerator_Component_t107_Component_BroadcastMessage_m1807_Arg2_ParameterInfo,
	Light_t198_CustomAttributesCacheGenerator_Light_INTERNAL_get_color_m2571,
	Light_t198_CustomAttributesCacheGenerator_Light_INTERNAL_set_color_m2572,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponent_m2573,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponentFastPath_m2574,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponent_m3307,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponentInChildren_m2575,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_GetComponentsInternal_m2576,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_get_transform_m1277,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_get_layer_m1254,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_set_layer_m1486,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_SetActive_m1581,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_get_activeSelf_m1579,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_get_activeInHierarchy_m1580,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_SendMessage_m1406,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_t17_GameObject_SendMessage_m1406_Arg1_ParameterInfo,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_t17_GameObject_SendMessage_m1406_Arg2_ParameterInfo,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_Internal_AddComponentWithType_m2577,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_AddComponent_m2578,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_Internal_CreateGameObject_m2579,
	GameObject_t17_CustomAttributesCacheGenerator_GameObject_t17_GameObject_Internal_CreateGameObject_m2579_Arg0_ParameterInfo,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_position_m2583,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_position_m2584,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localPosition_m2585,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localPosition_m2586,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_rotation_m2587,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_rotation_m2588,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localRotation_m2589,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localRotation_m2590,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localScale_m2591,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_set_localScale_m2592,
	Transform_t8_CustomAttributesCacheGenerator_Transform_get_parentInternal_m2593,
	Transform_t8_CustomAttributesCacheGenerator_Transform_set_parentInternal_m2594,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_worldToLocalMatrix_m2595,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_localToWorldMatrix_m2596,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformDirection_m2597,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformDirection_m2598,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_TransformPoint_m2599,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_CALL_InverseTransformPoint_m2600,
	Transform_t8_CustomAttributesCacheGenerator_Transform_get_childCount_m1418,
	Transform_t8_CustomAttributesCacheGenerator_Transform_INTERNAL_get_lossyScale_m2601,
	Transform_t8_CustomAttributesCacheGenerator_Transform_get_hasChanged_m1653,
	Transform_t8_CustomAttributesCacheGenerator_Transform_set_hasChanged_m1654,
	Transform_t8_CustomAttributesCacheGenerator_Transform_GetChild_m1419,
	Time_t495_CustomAttributesCacheGenerator_Time_get_time_m1348,
	Time_t495_CustomAttributesCacheGenerator_Time_get_deltaTime_m1336,
	Time_t495_CustomAttributesCacheGenerator_Time_get_timeScale_m1728,
	Time_t495_CustomAttributesCacheGenerator_Time_get_realtimeSinceStartup_m1380,
	Random_t496_CustomAttributesCacheGenerator_Random_Range_m1350,
	Random_t496_CustomAttributesCacheGenerator_Random_RandomRangeInt_m2603,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_TrySetInt_m2606,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_TrySetFloat_m2607,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_TrySetSetString_m2608,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetInt_m1492,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_t498_PlayerPrefs_GetInt_m1492_Arg1_ParameterInfo,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m1564,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_t498_PlayerPrefs_GetFloat_m1564_Arg1_ParameterInfo,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetFloat_m1832,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m1533,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_t498_PlayerPrefs_GetString_m1533_Arg1_ParameterInfo,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_GetString_m1491,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_HasKey_m1769,
	PlayerPrefs_t498_CustomAttributesCacheGenerator_PlayerPrefs_DeleteKey_m1532,
	Physics_t501_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_Internal_Raycast_m2626,
	Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_Raycast_m2627_Arg3_ParameterInfo,
	Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_Raycast_m2627_Arg4_ParameterInfo,
	Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_Raycast_m1722_Arg2_ParameterInfo,
	Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_Raycast_m1722_Arg3_ParameterInfo,
	Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_RaycastAll_m1720_Arg1_ParameterInfo,
	Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_RaycastAll_m1720_Arg2_ParameterInfo,
	Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_RaycastAll_m2628_Arg2_ParameterInfo,
	Physics_t501_CustomAttributesCacheGenerator_Physics_t501_Physics_RaycastAll_m2628_Arg3_ParameterInfo,
	Physics_t501_CustomAttributesCacheGenerator_Physics_INTERNAL_CALL_RaycastAll_m2629,
	Rigidbody_t63_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_get_rotation_m2630,
	Rigidbody_t63_CustomAttributesCacheGenerator_Rigidbody_INTERNAL_CALL_MoveRotation_m2631,
	Collider_t304_CustomAttributesCacheGenerator_Collider_get_enabled_m1392,
	Collider_t304_CustomAttributesCacheGenerator_Collider_set_enabled_m1322,
	Collider_t304_CustomAttributesCacheGenerator_Collider_set_isTrigger_m1574,
	Collider_t304_CustomAttributesCacheGenerator_Collider_INTERNAL_get_bounds_m2632,
	BoxCollider_t138_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_center_m2633,
	BoxCollider_t138_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_set_center_m2634,
	BoxCollider_t138_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_get_size_m2635,
	BoxCollider_t138_CustomAttributesCacheGenerator_BoxCollider_INTERNAL_set_size_m2636,
	AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_get_volume_m1681,
	AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_set_volume_m1682,
	AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_set_pitch_m1567,
	AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_PlayOneShot_m1568,
	AudioSource_t206_CustomAttributesCacheGenerator_AudioSource_t206_AudioSource_PlayOneShot_m1568_Arg1_ParameterInfo,
	AnimationEvent_t508_CustomAttributesCacheGenerator_AnimationEvent_t508____data_PropertyInfo,
	AnimationClip_t57_CustomAttributesCacheGenerator_AnimationClip_get_length_m1349,
	AnimationCurve_t210_CustomAttributesCacheGenerator,
	AnimationCurve_t210_CustomAttributesCacheGenerator_AnimationCurve_t210_AnimationCurve__ctor_m1684_Arg0_ParameterInfo,
	AnimationCurve_t210_CustomAttributesCacheGenerator_AnimationCurve_Cleanup_m2678,
	AnimationCurve_t210_CustomAttributesCacheGenerator_AnimationCurve_Evaluate_m1685,
	AnimationCurve_t210_CustomAttributesCacheGenerator_AnimationCurve_Init_m2680,
	Animation_t56_CustomAttributesCacheGenerator,
	Animation_t56_CustomAttributesCacheGenerator_Animation_INTERNAL_CALL_Sample_m2684,
	Animation_t56_CustomAttributesCacheGenerator_Animation_get_isPlaying_m1516,
	Animation_t56_CustomAttributesCacheGenerator_Animation_IsPlaying_m1510,
	Animation_t56_CustomAttributesCacheGenerator_Animation_Play_m1517,
	Animation_t56_CustomAttributesCacheGenerator_Animation_t56_Animation_Play_m2685_Arg0_ParameterInfo,
	Animation_t56_CustomAttributesCacheGenerator_Animation_Play_m2686,
	Animation_t56_CustomAttributesCacheGenerator_Animation_t56_Animation_Play_m2686_Arg1_ParameterInfo,
	Animation_t56_CustomAttributesCacheGenerator_Animation_Play_m1346,
	Animation_t56_CustomAttributesCacheGenerator_Animation_CrossFade_m2687,
	Animation_t56_CustomAttributesCacheGenerator_Animation_t56_Animation_CrossFade_m2687_Arg1_ParameterInfo,
	Animation_t56_CustomAttributesCacheGenerator_Animation_t56_Animation_CrossFade_m2687_Arg2_ParameterInfo,
	Animation_t56_CustomAttributesCacheGenerator_Animation_CrossFade_m1351,
	Animation_t56_CustomAttributesCacheGenerator_Animation_PlayDefaultAnimation_m2688,
	Animation_t56_CustomAttributesCacheGenerator_Animation_GetStateAtIndex_m2690,
	Animation_t56_CustomAttributesCacheGenerator_Animation_GetStateCount_m2691,
	AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_time_m1511,
	AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_set_time_m1513,
	AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_speed_m1514,
	AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_set_speed_m1518,
	AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_length_m1512,
	AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_set_layer_m1345,
	AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_clip_m1343,
	AnimationState_t305_CustomAttributesCacheGenerator_AnimationState_get_name_m1509,
	AnimatorStateInfo_t509_CustomAttributesCacheGenerator_AnimatorStateInfo_t509____nameHash_PropertyInfo,
	Animator_t515_CustomAttributesCacheGenerator_Animator_StringToHash_m2710,
	CharacterInfo_t233_CustomAttributesCacheGenerator_uv,
	CharacterInfo_t233_CustomAttributesCacheGenerator_vert,
	CharacterInfo_t233_CustomAttributesCacheGenerator_width,
	CharacterInfo_t233_CustomAttributesCacheGenerator_flipped,
	Font_t231_CustomAttributesCacheGenerator_Font_get_material_m1742,
	Font_t231_CustomAttributesCacheGenerator_Font_get_fontNames_m1745,
	Font_t231_CustomAttributesCacheGenerator_Font_RequestCharactersInTexture_m1746,
	Font_t231_CustomAttributesCacheGenerator_Font_t231_Font_RequestCharactersInTexture_m1746_Arg1_ParameterInfo,
	Font_t231_CustomAttributesCacheGenerator_Font_t231_Font_RequestCharactersInTexture_m1746_Arg2_ParameterInfo,
	Font_t231_CustomAttributesCacheGenerator_Font_RequestCharactersInTexture_m1748,
	Font_t231_CustomAttributesCacheGenerator_Font_GetCharacterInfo_m1747,
	Font_t231_CustomAttributesCacheGenerator_Font_t231_Font_GetCharacterInfo_m1747_Arg2_ParameterInfo,
	Font_t231_CustomAttributesCacheGenerator_Font_t231_Font_GetCharacterInfo_m1747_Arg3_ParameterInfo,
	Font_t231_CustomAttributesCacheGenerator_Font_get_dynamic_m2735,
	Font_t231_CustomAttributesCacheGenerator_Font_t231____textureRebuildCallback_PropertyInfo,
	FontTextureRebuildCallback_t344_CustomAttributesCacheGenerator,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_Init_m2739,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_Dispose_cpp_m2740,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m2743,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_rectExtents_m2744,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_vertexCount_m2745,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetVerticesInternal_m2746,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetVerticesArray_m2747,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_characterCount_m2748,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetCharactersInternal_m2750,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetCharactersArray_m2751,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_lineCount_m2752,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetLinesInternal_m2753,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_GetLinesArray_m2754,
	TextGenerator_t528_CustomAttributesCacheGenerator_TextGenerator_get_fontSizeUsedForBestFit_m2755,
	Request_t533_CustomAttributesCacheGenerator_U3CsourceIdU3Ek__BackingField,
	Request_t533_CustomAttributesCacheGenerator_U3CappIdU3Ek__BackingField,
	Request_t533_CustomAttributesCacheGenerator_U3CdomainU3Ek__BackingField,
	Request_t533_CustomAttributesCacheGenerator_Request_get_sourceId_m2776,
	Request_t533_CustomAttributesCacheGenerator_Request_get_appId_m2777,
	Request_t533_CustomAttributesCacheGenerator_Request_get_domain_m2778,
	Response_t535_CustomAttributesCacheGenerator_U3CsuccessU3Ek__BackingField,
	Response_t535_CustomAttributesCacheGenerator_U3CextendedInfoU3Ek__BackingField,
	Response_t535_CustomAttributesCacheGenerator_Response_get_success_m2787,
	Response_t535_CustomAttributesCacheGenerator_Response_set_success_m2788,
	Response_t535_CustomAttributesCacheGenerator_Response_get_extendedInfo_m2789,
	Response_t535_CustomAttributesCacheGenerator_Response_set_extendedInfo_m2790,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CsizeU3Ek__BackingField,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CadvertiseU3Ek__BackingField,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_name_m2795,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_set_name_m2796,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_size_m2797,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_set_size_m2798,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_advertise_m2799,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_set_advertise_m2800,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_password_m2801,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_set_password_m2802,
	CreateMatchRequest_t538_CustomAttributesCacheGenerator_CreateMatchRequest_get_matchAttributes_m2803,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_address_m2806,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_address_m2807,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_port_m2808,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_port_m2809,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_networkId_m2810,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_networkId_m2811,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_accessTokenString_m2812,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_accessTokenString_m2813,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_nodeId_m2814,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_nodeId_m2815,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_get_usingRelay_m2816,
	CreateMatchResponse_t539_CustomAttributesCacheGenerator_CreateMatchResponse_set_usingRelay_m2817,
	JoinMatchRequest_t540_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchRequest_t540_CustomAttributesCacheGenerator_U3CpasswordU3Ek__BackingField,
	JoinMatchRequest_t540_CustomAttributesCacheGenerator_JoinMatchRequest_get_networkId_m2821,
	JoinMatchRequest_t540_CustomAttributesCacheGenerator_JoinMatchRequest_set_networkId_m2822,
	JoinMatchRequest_t540_CustomAttributesCacheGenerator_JoinMatchRequest_get_password_m2823,
	JoinMatchRequest_t540_CustomAttributesCacheGenerator_JoinMatchRequest_set_password_m2824,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CaddressU3Ek__BackingField,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CportU3Ek__BackingField,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CaccessTokenStringU3Ek__BackingField,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_U3CusingRelayU3Ek__BackingField,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_address_m2827,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_address_m2828,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_port_m2829,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_port_m2830,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_networkId_m2831,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_networkId_m2832,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_accessTokenString_m2833,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_accessTokenString_m2834,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_nodeId_m2835,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_nodeId_m2836,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_get_usingRelay_m2837,
	JoinMatchResponse_t541_CustomAttributesCacheGenerator_JoinMatchResponse_set_usingRelay_m2838,
	DestroyMatchRequest_t542_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DestroyMatchRequest_t542_CustomAttributesCacheGenerator_DestroyMatchRequest_get_networkId_m2842,
	DestroyMatchRequest_t542_CustomAttributesCacheGenerator_DestroyMatchRequest_set_networkId_m2843,
	DropConnectionRequest_t543_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	DropConnectionRequest_t543_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	DropConnectionRequest_t543_CustomAttributesCacheGenerator_DropConnectionRequest_get_networkId_m2846,
	DropConnectionRequest_t543_CustomAttributesCacheGenerator_DropConnectionRequest_set_networkId_m2847,
	DropConnectionRequest_t543_CustomAttributesCacheGenerator_DropConnectionRequest_get_nodeId_m2848,
	DropConnectionRequest_t543_CustomAttributesCacheGenerator_DropConnectionRequest_set_nodeId_m2849,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CpageSizeU3Ek__BackingField,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CpageNumU3Ek__BackingField,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CnameFilterU3Ek__BackingField,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CmatchAttributeFilterLessThanU3Ek__BackingField,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_U3CmatchAttributeFilterGreaterThanU3Ek__BackingField,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_pageSize_m2852,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_set_pageSize_m2853,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_pageNum_m2854,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_set_pageNum_m2855,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_nameFilter_m2856,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_set_nameFilter_m2857,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterLessThan_m2858,
	ListMatchRequest_t544_CustomAttributesCacheGenerator_ListMatchRequest_get_matchAttributeFilterGreaterThan_m2859,
	MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_U3CnodeIdU3Ek__BackingField,
	MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_U3CpublicAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_U3CprivateAddressU3Ek__BackingField,
	MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_nodeId_m2862,
	MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_nodeId_m2863,
	MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_publicAddress_m2864,
	MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_publicAddress_m2865,
	MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_get_privateAddress_m2866,
	MatchDirectConnectInfo_t545_CustomAttributesCacheGenerator_MatchDirectConnectInfo_set_privateAddress_m2867,
	MatchDesc_t547_CustomAttributesCacheGenerator_U3CnetworkIdU3Ek__BackingField,
	MatchDesc_t547_CustomAttributesCacheGenerator_U3CnameU3Ek__BackingField,
	MatchDesc_t547_CustomAttributesCacheGenerator_U3CaverageEloScoreU3Ek__BackingField,
	MatchDesc_t547_CustomAttributesCacheGenerator_U3CmaxSizeU3Ek__BackingField,
	MatchDesc_t547_CustomAttributesCacheGenerator_U3CcurrentSizeU3Ek__BackingField,
	MatchDesc_t547_CustomAttributesCacheGenerator_U3CisPrivateU3Ek__BackingField,
	MatchDesc_t547_CustomAttributesCacheGenerator_U3CmatchAttributesU3Ek__BackingField,
	MatchDesc_t547_CustomAttributesCacheGenerator_U3ChostNodeIdU3Ek__BackingField,
	MatchDesc_t547_CustomAttributesCacheGenerator_U3CdirectConnectInfosU3Ek__BackingField,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_networkId_m2871,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_networkId_m2872,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_name_m2873,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_name_m2874,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_averageEloScore_m2875,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_maxSize_m2876,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_maxSize_m2877,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_currentSize_m2878,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_currentSize_m2879,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_isPrivate_m2880,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_isPrivate_m2881,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_matchAttributes_m2882,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_hostNodeId_m2883,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_get_directConnectInfos_m2884,
	MatchDesc_t547_CustomAttributesCacheGenerator_MatchDesc_set_directConnectInfos_m2885,
	ListMatchResponse_t549_CustomAttributesCacheGenerator_U3CmatchesU3Ek__BackingField,
	ListMatchResponse_t549_CustomAttributesCacheGenerator_ListMatchResponse_get_matches_m2889,
	ListMatchResponse_t549_CustomAttributesCacheGenerator_ListMatchResponse_set_matches_m2890,
	AppID_t550_CustomAttributesCacheGenerator,
	SourceID_t551_CustomAttributesCacheGenerator,
	NetworkID_t552_CustomAttributesCacheGenerator,
	NodeID_t553_CustomAttributesCacheGenerator,
	NetworkMatch_t559_CustomAttributesCacheGenerator_NetworkMatch_ProcessMatchResponse_m3315,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t740_CustomAttributesCacheGenerator,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t740_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3321,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t740_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_System_Collections_IEnumerator_get_Current_m3322,
	U3CProcessMatchResponseU3Ec__Iterator0_1_t740_CustomAttributesCacheGenerator_U3CProcessMatchResponseU3Ec__Iterator0_1_Dispose_m3324,
	JsonArray_t560_CustomAttributesCacheGenerator,
	JsonObject_t563_CustomAttributesCacheGenerator,
	SimpleJson_t566_CustomAttributesCacheGenerator,
	SimpleJson_t566_CustomAttributesCacheGenerator_SimpleJson_TryDeserializeObject_m2934,
	SimpleJson_t566_CustomAttributesCacheGenerator_SimpleJson_NextToken_m2946,
	SimpleJson_t566_CustomAttributesCacheGenerator_SimpleJson_t566____PocoJsonSerializerStrategy_PropertyInfo,
	IJsonSerializerStrategy_t564_CustomAttributesCacheGenerator,
	IJsonSerializerStrategy_t564_CustomAttributesCacheGenerator_IJsonSerializerStrategy_TrySerializeNonPrimitiveObject_m3328,
	PocoJsonSerializerStrategy_t565_CustomAttributesCacheGenerator,
	PocoJsonSerializerStrategy_t565_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeKnownTypes_m2963,
	PocoJsonSerializerStrategy_t565_CustomAttributesCacheGenerator_PocoJsonSerializerStrategy_TrySerializeUnknownTypes_m2964,
	ReflectionUtils_t580_CustomAttributesCacheGenerator,
	ReflectionUtils_t580_CustomAttributesCacheGenerator_ReflectionUtils_t580_ReflectionUtils_GetConstructorInfo_m2989_Arg1_ParameterInfo,
	ReflectionUtils_t580_CustomAttributesCacheGenerator_ReflectionUtils_t580_ReflectionUtils_GetContructor_m2994_Arg1_ParameterInfo,
	ReflectionUtils_t580_CustomAttributesCacheGenerator_ReflectionUtils_t580_ReflectionUtils_GetConstructorByReflection_m2996_Arg1_ParameterInfo,
	ThreadSafeDictionary_2_t743_CustomAttributesCacheGenerator,
	ConstructorDelegate_t573_CustomAttributesCacheGenerator_ConstructorDelegate_t573_ConstructorDelegate_Invoke_m2974_Arg0_ParameterInfo,
	ConstructorDelegate_t573_CustomAttributesCacheGenerator_ConstructorDelegate_t573_ConstructorDelegate_BeginInvoke_m2975_Arg0_ParameterInfo,
	U3CGetConstructorByReflectionU3Ec__AnonStorey1_t575_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey2_t576_CustomAttributesCacheGenerator,
	U3CGetGetMethodByReflectionU3Ec__AnonStorey3_t577_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey4_t578_CustomAttributesCacheGenerator,
	U3CGetSetMethodByReflectionU3Ec__AnonStorey5_t579_CustomAttributesCacheGenerator,
	IL2CPPStructAlignmentAttribute_t582_CustomAttributesCacheGenerator,
	DisallowMultipleComponent_t587_CustomAttributesCacheGenerator,
	RequireComponent_t360_CustomAttributesCacheGenerator,
	WritableAttribute_t589_CustomAttributesCacheGenerator,
	AssemblyIsEditorAssembly_t590_CustomAttributesCacheGenerator,
	Achievement_t602_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Achievement_t602_CustomAttributesCacheGenerator_U3CpercentCompletedU3Ek__BackingField,
	Achievement_t602_CustomAttributesCacheGenerator_Achievement_get_id_m3047,
	Achievement_t602_CustomAttributesCacheGenerator_Achievement_set_id_m3048,
	Achievement_t602_CustomAttributesCacheGenerator_Achievement_get_percentCompleted_m3049,
	Achievement_t602_CustomAttributesCacheGenerator_Achievement_set_percentCompleted_m3050,
	AchievementDescription_t603_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	AchievementDescription_t603_CustomAttributesCacheGenerator_AchievementDescription_get_id_m3057,
	AchievementDescription_t603_CustomAttributesCacheGenerator_AchievementDescription_set_id_m3058,
	Score_t604_CustomAttributesCacheGenerator_U3CleaderboardIDU3Ek__BackingField,
	Score_t604_CustomAttributesCacheGenerator_U3CvalueU3Ek__BackingField,
	Score_t604_CustomAttributesCacheGenerator_Score_get_leaderboardID_m3067,
	Score_t604_CustomAttributesCacheGenerator_Score_set_leaderboardID_m3068,
	Score_t604_CustomAttributesCacheGenerator_Score_get_value_m3069,
	Score_t604_CustomAttributesCacheGenerator_Score_set_value_m3070,
	Leaderboard_t427_CustomAttributesCacheGenerator_U3CidU3Ek__BackingField,
	Leaderboard_t427_CustomAttributesCacheGenerator_U3CuserScopeU3Ek__BackingField,
	Leaderboard_t427_CustomAttributesCacheGenerator_U3CrangeU3Ek__BackingField,
	Leaderboard_t427_CustomAttributesCacheGenerator_U3CtimeScopeU3Ek__BackingField,
	Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_get_id_m3078,
	Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_set_id_m3079,
	Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_get_userScope_m3080,
	Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_set_userScope_m3081,
	Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_get_range_m3082,
	Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_set_range_m3083,
	Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_get_timeScope_m3084,
	Leaderboard_t427_CustomAttributesCacheGenerator_Leaderboard_set_timeScope_m3085,
	StackTraceUtility_t615_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStackTrace_m3097,
	StackTraceUtility_t615_CustomAttributesCacheGenerator_StackTraceUtility_ExtractStringFromExceptionInternal_m3100,
	StackTraceUtility_t615_CustomAttributesCacheGenerator_StackTraceUtility_ExtractFormattedStackTrace_m3102,
	SharedBetweenAnimatorsAttribute_t617_CustomAttributesCacheGenerator,
	ArgumentCache_t623_CustomAttributesCacheGenerator_m_ObjectArgumentAssemblyTypeName,
	PersistentCall_t626_CustomAttributesCacheGenerator_m_Arguments,
	PersistentCall_t626_CustomAttributesCacheGenerator_m_CallState,
	PersistentCallGroup_t628_CustomAttributesCacheGenerator_m_Calls,
	UnityEventBase_t631_CustomAttributesCacheGenerator_m_PersistentCalls,
	UnityEventBase_t631_CustomAttributesCacheGenerator_m_TypeName,
	UserAuthorizationDialog_t633_CustomAttributesCacheGenerator,
	DefaultValueAttribute_t634_CustomAttributesCacheGenerator,
	ExcludeFromDocsAttribute_t635_CustomAttributesCacheGenerator,
	FormerlySerializedAsAttribute_t636_CustomAttributesCacheGenerator,
	TypeInferenceRuleAttribute_t638_CustomAttributesCacheGenerator,
};
