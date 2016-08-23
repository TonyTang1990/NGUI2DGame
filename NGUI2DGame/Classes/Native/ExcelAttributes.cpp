#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.GuidAttribute
#include "mscorlib_System_Runtime_InteropServices_GuidAttribute.h"
// System.Runtime.InteropServices.GuidAttribute
#include "mscorlib_System_Runtime_InteropServices_GuidAttributeMethodDeclarations.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttribute.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttributeMethodDeclarations.h"
extern TypeInfo* RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyDescriptionAttribute_t865_il2cpp_TypeInfo_var;
extern TypeInfo* CompilationRelaxationsAttribute_t866_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyTitleAttribute_t867_il2cpp_TypeInfo_var;
extern TypeInfo* AssemblyProductAttribute_t868_il2cpp_TypeInfo_var;
extern TypeInfo* ComVisibleAttribute_t869_il2cpp_TypeInfo_var;
extern TypeInfo* GuidAttribute_t870_il2cpp_TypeInfo_var;
extern TypeInfo* CLSCompliantAttribute_t871_il2cpp_TypeInfo_var;
extern TypeInfo* DebuggableAttribute_t872_il2cpp_TypeInfo_var;
void g_Excel_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(205);
		AssemblyDescriptionAttribute_t865_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1795);
		CompilationRelaxationsAttribute_t866_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1796);
		AssemblyTitleAttribute_t867_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1797);
		AssemblyProductAttribute_t868_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1798);
		ComVisibleAttribute_t869_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1799);
		GuidAttribute_t870_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1800);
		CLSCompliantAttribute_t871_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1801);
		DebuggableAttribute_t872_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1802);
		s_Il2CppMethodIntialized = true;
	}
	cache->count = 9;
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t358 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t358 *)il2cpp_codegen_object_new (RuntimeCompatibilityAttribute_t358_il2cpp_TypeInfo_var);
		RuntimeCompatibilityAttribute__ctor_m1843(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m1844(tmp, true, NULL);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t865 * tmp;
		tmp = (AssemblyDescriptionAttribute_t865 *)il2cpp_codegen_object_new (AssemblyDescriptionAttribute_t865_il2cpp_TypeInfo_var);
		AssemblyDescriptionAttribute__ctor_m3586(tmp, il2cpp_codegen_string_new_wrapper("Excel data reader for .Net"), NULL);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		CompilationRelaxationsAttribute_t866 * tmp;
		tmp = (CompilationRelaxationsAttribute_t866 *)il2cpp_codegen_object_new (CompilationRelaxationsAttribute_t866_il2cpp_TypeInfo_var);
		CompilationRelaxationsAttribute__ctor_m3587(tmp, 8, NULL);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t867 * tmp;
		tmp = (AssemblyTitleAttribute_t867 *)il2cpp_codegen_object_new (AssemblyTitleAttribute_t867_il2cpp_TypeInfo_var);
		AssemblyTitleAttribute__ctor_m3588(tmp, il2cpp_codegen_string_new_wrapper("ExcelDataReader"), NULL);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t868 * tmp;
		tmp = (AssemblyProductAttribute_t868 *)il2cpp_codegen_object_new (AssemblyProductAttribute_t868_il2cpp_TypeInfo_var);
		AssemblyProductAttribute__ctor_m3589(tmp, il2cpp_codegen_string_new_wrapper("ExcelDataReader"), NULL);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t869 * tmp;
		tmp = (ComVisibleAttribute_t869 *)il2cpp_codegen_object_new (ComVisibleAttribute_t869_il2cpp_TypeInfo_var);
		ComVisibleAttribute__ctor_m3590(tmp, false, NULL);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		GuidAttribute_t870 * tmp;
		tmp = (GuidAttribute_t870 *)il2cpp_codegen_object_new (GuidAttribute_t870_il2cpp_TypeInfo_var);
		GuidAttribute__ctor_m3591(tmp, il2cpp_codegen_string_new_wrapper("e0bcbc74-51d2-48a3-bddb-b0b407516397"), NULL);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t871 * tmp;
		tmp = (CLSCompliantAttribute_t871 *)il2cpp_codegen_object_new (CLSCompliantAttribute_t871_il2cpp_TypeInfo_var);
		CLSCompliantAttribute__ctor_m3592(tmp, true, NULL);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		DebuggableAttribute_t872 * tmp;
		tmp = (DebuggableAttribute_t872 *)il2cpp_codegen_object_new (DebuggableAttribute_t872_il2cpp_TypeInfo_var);
		DebuggableAttribute__ctor_m3593(tmp, 2, NULL);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
}
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern TypeInfo* CompilerGeneratedAttribute_t364_il2cpp_TypeInfo_var;
void FormatReader_t827_CustomAttributesCacheGenerator_U3CFormatStringU3Ek__BackingField(CustomAttributesCache* cache)
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
void FormatReader_t827_CustomAttributesCacheGenerator_FormatReader_get_FormatString_m3432(CustomAttributesCache* cache)
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
void FormatReader_t827_CustomAttributesCacheGenerator_FormatReader_set_FormatString_m3433(CustomAttributesCache* cache)
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
void Helpers_t829_CustomAttributesCacheGenerator_CSU24U3CU3E9__CachedAnonymousMethodDelegate1(CustomAttributesCache* cache)
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
void Helpers_t829_CustomAttributesCacheGenerator_Helpers_U3CConvertEscapeCharsU3Eb__0_m3444(CustomAttributesCache* cache)
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
void XlsxWorksheet_t838_CustomAttributesCacheGenerator_U3CIsEmptyU3Ek__BackingField(CustomAttributesCache* cache)
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
void XlsxWorksheet_t838_CustomAttributesCacheGenerator_XlsxWorksheet_get_IsEmpty_m3472(CustomAttributesCache* cache)
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
void XlsxWorksheet_t838_CustomAttributesCacheGenerator_XlsxWorksheet_set_IsEmpty_m3473(CustomAttributesCache* cache)
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
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern TypeInfo* DefaultMemberAttribute_t367_il2cpp_TypeInfo_var;
void ExcelOpenXmlReader_t845_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"
// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttributeMethodDeclarations.h"
extern TypeInfo* ParamArrayAttribute_t731_il2cpp_TypeInfo_var;
void ILog_t846_CustomAttributesCacheGenerator_ILog_t846_ILog_Debug_m3597_Arg1_ParameterInfo(CustomAttributesCache* cache)
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
void NullLog_t850_CustomAttributesCacheGenerator_NullLog_t850_NullLog_Debug_m3521_Arg1_ParameterInfo(CustomAttributesCache* cache)
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
void U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2D4B71U2DADAEU2DB726711CA9CAU7D_t853_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
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
extern const CustomAttributesCacheGenerator g_Excel_Assembly_AttributeGenerators[14] = 
{
	NULL,
	g_Excel_Assembly_CustomAttributesCacheGenerator,
	FormatReader_t827_CustomAttributesCacheGenerator_U3CFormatStringU3Ek__BackingField,
	FormatReader_t827_CustomAttributesCacheGenerator_FormatReader_get_FormatString_m3432,
	FormatReader_t827_CustomAttributesCacheGenerator_FormatReader_set_FormatString_m3433,
	Helpers_t829_CustomAttributesCacheGenerator_CSU24U3CU3E9__CachedAnonymousMethodDelegate1,
	Helpers_t829_CustomAttributesCacheGenerator_Helpers_U3CConvertEscapeCharsU3Eb__0_m3444,
	XlsxWorksheet_t838_CustomAttributesCacheGenerator_U3CIsEmptyU3Ek__BackingField,
	XlsxWorksheet_t838_CustomAttributesCacheGenerator_XlsxWorksheet_get_IsEmpty_m3472,
	XlsxWorksheet_t838_CustomAttributesCacheGenerator_XlsxWorksheet_set_IsEmpty_m3473,
	ExcelOpenXmlReader_t845_CustomAttributesCacheGenerator,
	ILog_t846_CustomAttributesCacheGenerator_ILog_t846_ILog_Debug_m3597_Arg1_ParameterInfo,
	NullLog_t850_CustomAttributesCacheGenerator_NullLog_t850_NullLog_Debug_m3521_Arg1_ParameterInfo,
	U3CPrivateImplementationDetailsU3EU7B10037FEEU2DF752U2D4B71U2DADAEU2DB726711CA9CAU7D_t853_CustomAttributesCacheGenerator,
};
