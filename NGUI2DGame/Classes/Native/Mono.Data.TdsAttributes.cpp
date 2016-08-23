#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern TypeInfo* AssemblyDelaySignAttribute_t1167_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyKeyFileAttribute_t1168_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var;
void g_Mono_Data_Tds_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AssemblyDelaySignAttribute_t1167_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2083);
		AssemblyKeyFileAttribute_t1168_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2084);
		RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(205);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 3;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyDelaySignAttribute_t1167 * tmp;
		tmp = (AssemblyDelaySignAttribute_t1167 *)il2cpp_codegen_object_new (AssemblyDelaySignAttribute_t1167_il2cpp_TypeInfo_var);
		AssemblyDelaySignAttribute__ctor_m5269(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t1168 * tmp;
		tmp = (AssemblyKeyFileAttribute_t1168 *)il2cpp_codegen_object_new (AssemblyKeyFileAttribute_t1168_il2cpp_TypeInfo_var);
		AssemblyKeyFileAttribute__ctor_m5270(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t358 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t358 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m1843(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m1844(tmp, true, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
}
extern const CustomAttributesCacheGenerator g_Mono_Data_Tds_Assembly_AttributeGenerators[2] = 
{
	NULL,
	g_Mono_Data_Tds_Assembly_CustomAttributesCacheGenerator,
};
