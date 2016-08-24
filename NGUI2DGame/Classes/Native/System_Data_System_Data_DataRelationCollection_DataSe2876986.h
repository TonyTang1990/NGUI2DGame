#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Data.DataSet
struct DataSet_t3097402844;

#include "System_Data_System_Data_DataRelationCollection3958690162.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataSetRelationCollection
struct  DataSetRelationCollection_t2876986  : public DataRelationCollection_t3958690162
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::dataSet
	DataSet_t3097402844 * ___dataSet_4;

public:
	inline static int32_t get_offset_of_dataSet_4() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t2876986, ___dataSet_4)); }
	inline DataSet_t3097402844 * get_dataSet_4() const { return ___dataSet_4; }
	inline DataSet_t3097402844 ** get_address_of_dataSet_4() { return &___dataSet_4; }
	inline void set_dataSet_4(DataSet_t3097402844 * value)
	{
		___dataSet_4 = value;
		Il2CppCodeGenWriteBarrier(&___dataSet_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
