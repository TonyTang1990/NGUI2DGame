#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
extern TypeInfo* AssemblyTitleAttribute_t867_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t1168_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t865_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t869_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDelaySignAttribute_t1167_il2cpp_TypeInfo_var;
void g_Mono_Posix_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyTitleAttribute_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1797);
		RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(205);
		AssemblyKeyFileAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2084);
		AssemblyDescriptionAttribute_t865_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1795);
		ComVisibleAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1799);
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		AssemblyDelaySignAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2083);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 7;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyTitleAttribute_t867 * tmp;
		tmp = (AssemblyTitleAttribute_t867 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t867_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m3588(tmp, il2cpp_codegen_string_new_wrapper("Mono.Posix.dll"), NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t358 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t358 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m1843(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m1844(tmp, true, NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t1168 * tmp;
		tmp = (AssemblyKeyFileAttribute_t1168 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t1168_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m5270(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t865 * tmp;
		tmp = (AssemblyDescriptionAttribute_t865 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t865_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m3586(tmp, il2cpp_codegen_string_new_wrapper("Unix Integration Classes"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t869 * tmp;
		tmp = (ComVisibleAttribute_t869 *)il2cpp_codegen_object_new (ComVisibleAttribute_t869_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m3590(tmp, false, NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, true, NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t1167 * tmp;
		tmp = (AssemblyDelaySignAttribute_t1167 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t1167_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m5269(tmp, true, NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_Mono_Posix_Assembly_AttributeGenerators[2] = 
{
	NULL,
	g_Mono_Posix_Assembly_CustomAttributesCacheGenerator,
};
