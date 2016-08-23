#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Excel.ExcelReaderFactory
struct ExcelReaderFactory_t842;
// Excel.IExcelDataReader
struct IExcelDataReader_t347;
// System.IO.Stream
struct Stream_t844;

// Excel.IExcelDataReader Excel.ExcelReaderFactory::CreateOpenXmlReader(System.IO.Stream)
extern "C" Object_t * ExcelReaderFactory_CreateOpenXmlReader_m1822 (Object_t * __this /* static, unused */, Stream_t844 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
