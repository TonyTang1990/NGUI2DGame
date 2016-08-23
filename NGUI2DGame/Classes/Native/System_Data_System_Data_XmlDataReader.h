#pragma once
#include <stdint.h>
// System.Data.DataSet
struct DataSet_t346;
// System.Xml.XmlReader
struct XmlReader_t843;
// System.Object
#include "mscorlib_System_Object.h"
// System.Data.XmlReadMode
#include "System_Data_System_Data_XmlReadMode.h"
// System.Data.XmlDataReader
struct  XmlDataReader_t982  : public Object_t
{
	// System.Data.DataSet System.Data.XmlDataReader::dataset
	DataSet_t346 * ___dataset_0;
	// System.Xml.XmlReader System.Data.XmlDataReader::reader
	XmlReader_t843 * ___reader_1;
	// System.Data.XmlReadMode System.Data.XmlDataReader::mode
	int32_t ___mode_2;
};
