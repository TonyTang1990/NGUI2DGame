#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Excel.Core.OpenXmlFormat.XlsxDimension
struct XlsxDimension_t1977862101;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Excel.Core.OpenXmlFormat.XlsxWorksheet
struct  XlsxWorksheet_t2598215163  : public Il2CppObject
{
public:
	// Excel.Core.OpenXmlFormat.XlsxDimension Excel.Core.OpenXmlFormat.XlsxWorksheet::_dimension
	XlsxDimension_t1977862101 * ____dimension_0;
	// System.String Excel.Core.OpenXmlFormat.XlsxWorksheet::_Name
	String_t* ____Name_1;
	// System.Int32 Excel.Core.OpenXmlFormat.XlsxWorksheet::_id
	int32_t ____id_2;
	// System.String Excel.Core.OpenXmlFormat.XlsxWorksheet::_rid
	String_t* ____rid_3;
	// System.String Excel.Core.OpenXmlFormat.XlsxWorksheet::_path
	String_t* ____path_4;
	// System.Boolean Excel.Core.OpenXmlFormat.XlsxWorksheet::<IsEmpty>k__BackingField
	bool ___U3CIsEmptyU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__dimension_0() { return static_cast<int32_t>(offsetof(XlsxWorksheet_t2598215163, ____dimension_0)); }
	inline XlsxDimension_t1977862101 * get__dimension_0() const { return ____dimension_0; }
	inline XlsxDimension_t1977862101 ** get_address_of__dimension_0() { return &____dimension_0; }
	inline void set__dimension_0(XlsxDimension_t1977862101 * value)
	{
		____dimension_0 = value;
		Il2CppCodeGenWriteBarrier(&____dimension_0, value);
	}

	inline static int32_t get_offset_of__Name_1() { return static_cast<int32_t>(offsetof(XlsxWorksheet_t2598215163, ____Name_1)); }
	inline String_t* get__Name_1() const { return ____Name_1; }
	inline String_t** get_address_of__Name_1() { return &____Name_1; }
	inline void set__Name_1(String_t* value)
	{
		____Name_1 = value;
		Il2CppCodeGenWriteBarrier(&____Name_1, value);
	}

	inline static int32_t get_offset_of__id_2() { return static_cast<int32_t>(offsetof(XlsxWorksheet_t2598215163, ____id_2)); }
	inline int32_t get__id_2() const { return ____id_2; }
	inline int32_t* get_address_of__id_2() { return &____id_2; }
	inline void set__id_2(int32_t value)
	{
		____id_2 = value;
	}

	inline static int32_t get_offset_of__rid_3() { return static_cast<int32_t>(offsetof(XlsxWorksheet_t2598215163, ____rid_3)); }
	inline String_t* get__rid_3() const { return ____rid_3; }
	inline String_t** get_address_of__rid_3() { return &____rid_3; }
	inline void set__rid_3(String_t* value)
	{
		____rid_3 = value;
		Il2CppCodeGenWriteBarrier(&____rid_3, value);
	}

	inline static int32_t get_offset_of__path_4() { return static_cast<int32_t>(offsetof(XlsxWorksheet_t2598215163, ____path_4)); }
	inline String_t* get__path_4() const { return ____path_4; }
	inline String_t** get_address_of__path_4() { return &____path_4; }
	inline void set__path_4(String_t* value)
	{
		____path_4 = value;
		Il2CppCodeGenWriteBarrier(&____path_4, value);
	}

	inline static int32_t get_offset_of_U3CIsEmptyU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(XlsxWorksheet_t2598215163, ___U3CIsEmptyU3Ek__BackingField_5)); }
	inline bool get_U3CIsEmptyU3Ek__BackingField_5() const { return ___U3CIsEmptyU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsEmptyU3Ek__BackingField_5() { return &___U3CIsEmptyU3Ek__BackingField_5; }
	inline void set_U3CIsEmptyU3Ek__BackingField_5(bool value)
	{
		___U3CIsEmptyU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
