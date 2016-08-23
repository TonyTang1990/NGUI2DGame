#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile)
struct CategoryAttribute_t907;
// System.Object
struct Object_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t907  : public Attribute_t478
{
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;
};
struct CategoryAttribute_t907_StaticFields{
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t907 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	Object_t * ___lockobj_3;
};
