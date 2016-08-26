#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;

#include "mscorlib_System_Array3829468939.h"
#include "System_Configuration_System_Configuration_Configur2048066811.h"

#pragma once
// System.Configuration.ConfigurationProperty[]
struct ConfigurationPropertyU5BU5D_t3364493498  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ConfigurationProperty_t2048066811 * m_Items[1];

public:
	inline ConfigurationProperty_t2048066811 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ConfigurationProperty_t2048066811 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ConfigurationProperty_t2048066811 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
