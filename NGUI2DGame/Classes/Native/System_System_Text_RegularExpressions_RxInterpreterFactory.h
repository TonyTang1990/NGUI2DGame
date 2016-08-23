#pragma once
#include <stdint.h>
// System.Collections.IDictionary
struct IDictionary_t1060;
// System.Byte[]
struct ByteU5BU5D_t159;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t2180;
// System.String[]
struct StringU5BU5D_t258;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.RxInterpreterFactory
struct  RxInterpreterFactory_t2183  : public Object_t
{
	// System.Collections.IDictionary System.Text.RegularExpressions.RxInterpreterFactory::mapping
	Object_t * ___mapping_0;
	// System.Byte[] System.Text.RegularExpressions.RxInterpreterFactory::program
	ByteU5BU5D_t159* ___program_1;
	// System.Text.RegularExpressions.EvalDelegate System.Text.RegularExpressions.RxInterpreterFactory::eval_del
	EvalDelegate_t2180 * ___eval_del_2;
	// System.String[] System.Text.RegularExpressions.RxInterpreterFactory::namesMapping
	StringU5BU5D_t258* ___namesMapping_3;
	// System.Int32 System.Text.RegularExpressions.RxInterpreterFactory::gap
	int32_t ___gap_4;
};
