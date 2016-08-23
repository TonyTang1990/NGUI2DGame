#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyCopyrightAttribute_t1165_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t865_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t868_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t867_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyCompanyAttribute_t1166_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t869_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t1168_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t1167_il2cpp_TypeInfo_var;
extern TypeInfo* NeutralResourcesLanguageAttribute_t1170_il2cpp_TypeInfo_var;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyCopyrightAttribute_t1165_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2081);
		AssemblyDescriptionAttribute_t865_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1795);
		AssemblyProductAttribute_t868_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1798);
		AssemblyTitleAttribute_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1797);
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		AssemblyCompanyAttribute_t1166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2082);
		ComVisibleAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1799);
		RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(205);
		AssemblyKeyFileAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2084);
		AssemblyDelaySignAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2083);
		NeutralResourcesLanguageAttribute_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2086);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 11;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t1165 * tmp;
		tmp = (AssemblyCopyrightAttribute_t1165 *)il2cpp_codegen_object_new (AssemblyCopyrightAttribute_t1165_il2cpp_TypeInfo_var);
		AssemblyCopyrightAttribute__ctor_m5267(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t865 * tmp;
		tmp = (AssemblyDescriptionAttribute_t865 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t865_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m3586(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t868 * tmp;
		tmp = (AssemblyProductAttribute_t868 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t868_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m3589(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t867 * tmp;
		tmp = (AssemblyTitleAttribute_t867 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t867_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m3588(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, true, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t1166 * tmp;
		tmp = (AssemblyCompanyAttribute_t1166 *)il2cpp_codegen_object_new (AssemblyCompanyAttribute_t1166_il2cpp_TypeInfo_var);
		AssemblyCompanyAttribute__ctor_m5268(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t869 * tmp;
		tmp = (ComVisibleAttribute_t869 *)il2cpp_codegen_object_new (ComVisibleAttribute_t869_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m3590(tmp, false, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t358 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t358 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m1843(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m1844(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t1168 * tmp;
		tmp = (AssemblyKeyFileAttribute_t1168 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t1168_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m5270(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t1167 * tmp;
		tmp = (AssemblyDelaySignAttribute_t1167 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t1167_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m5269(tmp, true, NULL);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t1170 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t1170 *)il2cpp_codegen_object_new (NeutralResourcesLanguageAttribute_t1170_il2cpp_TypeInfo_var);
		NeutralResourcesLanguageAttribute__ctor_m5272(tmp, il2cpp_codegen_string_new_wrapper("en-US"), NULL);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger__ctor_m5459(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger__ctor_m5461(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger__ctor_m5463(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_SetBit_m5470(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_SetBit_m5471(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_ToString_m5474(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_ToString_m5475(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m5485(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m5489(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_op_Equality_m5495(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m5496(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
void ModulusRing_t1215_CustomAttributesCacheGenerator_ModulusRing_Pow_m5443(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 1;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, false, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void ASN1_t1222_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5(CustomAttributesCache* cache)
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
void PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6(CustomAttributesCache* cache)
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
void PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7(CustomAttributesCache* cache)
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
void PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8(CustomAttributesCache* cache)
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
void PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapC(CustomAttributesCache* cache)
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
void X509Certificate_t1251_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF(CustomAttributesCache* cache)
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
void X509Certificate_t1251_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10(CustomAttributesCache* cache)
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
void X509Certificate_t1251_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void X509CertificateCollection_t1246_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"
// System.FlagsAttribute
#include "mscorlib_System_FlagsAttributeMethodDeclarations.h"
extern TypeInfo* FlagsAttribute_t732_il2cpp_TypeInfo_var;
void X509ChainStatusFlags_t1254_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void X509Crl_t1256_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void X509Crl_t1256_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void X509ExtensionCollection_t1250_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void ExtendedKeyUsageExtension_t1263_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t732_il2cpp_TypeInfo_var;
void KeyUsages_t1265_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t732_il2cpp_TypeInfo_var;
void CertTypes_t1267_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void CipherSuiteCollection_t1280_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void HttpsClientStream_t1299_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2(CustomAttributesCache* cache)
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
void HttpsClientStream_t1299_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3(CustomAttributesCache* cache)
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
void HttpsClientStream_t1299_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m5990(CustomAttributesCache* cache)
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
void HttpsClientStream_t1299_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m5991(CustomAttributesCache* cache)
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
void RSASslSignatureDeformatter_t1304_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15(CustomAttributesCache* cache)
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
void RSASslSignatureFormatter_t1306_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16(CustomAttributesCache* cache)
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
extern TypeInfo* FlagsAttribute_t732_il2cpp_TypeInfo_var;
void SecurityProtocolType_t1309_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void U3CPrivateImplementationDetailsU3E_t1348_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Mono_Security_Assembly_AttributeGenerators[40] = 
{
	NULL,
	g_Mono_Security_Assembly_CustomAttributesCacheGenerator,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger__ctor_m5459,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger__ctor_m5461,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger__ctor_m5463,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_SetBit_m5470,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_SetBit_m5471,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_ToString_m5474,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_ToString_m5475,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_op_Implicit_m5485,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_op_Modulus_m5489,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_op_Equality_m5495,
	BigInteger_t1214_CustomAttributesCacheGenerator_BigInteger_op_Inequality_m5496,
	ModulusRing_t1215_CustomAttributesCacheGenerator_ModulusRing_Pow_m5443,
	ASN1_t1222_CustomAttributesCacheGenerator,
	PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map5,
	PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map6,
	PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map7,
	PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map8,
	PKCS12_t1247_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapC,
	X509Certificate_t1251_CustomAttributesCacheGenerator_U3CU3Ef__switchU24mapF,
	X509Certificate_t1251_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map10,
	X509Certificate_t1251_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map11,
	X509CertificateCollection_t1246_CustomAttributesCacheGenerator,
	X509ChainStatusFlags_t1254_CustomAttributesCacheGenerator,
	X509Crl_t1256_CustomAttributesCacheGenerator,
	X509Crl_t1256_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map13,
	X509ExtensionCollection_t1250_CustomAttributesCacheGenerator,
	ExtendedKeyUsageExtension_t1263_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map14,
	KeyUsages_t1265_CustomAttributesCacheGenerator,
	CertTypes_t1267_CustomAttributesCacheGenerator,
	CipherSuiteCollection_t1280_CustomAttributesCacheGenerator,
	HttpsClientStream_t1299_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache2,
	HttpsClientStream_t1299_CustomAttributesCacheGenerator_U3CU3Ef__amU24cache3,
	HttpsClientStream_t1299_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__0_m5990,
	HttpsClientStream_t1299_CustomAttributesCacheGenerator_HttpsClientStream_U3CHttpsClientStreamU3Em__1_m5991,
	RSASslSignatureDeformatter_t1304_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map15,
	RSASslSignatureFormatter_t1306_CustomAttributesCacheGenerator_U3CU3Ef__switchU24map16,
	SecurityProtocolType_t1309_CustomAttributesCacheGenerator,
	U3CPrivateImplementationDetailsU3E_t1348_CustomAttributesCacheGenerator,
};
