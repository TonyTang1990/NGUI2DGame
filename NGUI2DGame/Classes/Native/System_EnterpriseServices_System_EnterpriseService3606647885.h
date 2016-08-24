#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Attribute542643598.h"
#include "mscorlib_System_Guid2533601593.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EnterpriseServices.ApplicationIDAttribute
struct  ApplicationIDAttribute_t3606647885  : public Attribute_t542643598
{
public:
	// System.Guid System.EnterpriseServices.ApplicationIDAttribute::guid
	Guid_t2533601593  ___guid_0;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ApplicationIDAttribute_t3606647885, ___guid_0)); }
	inline Guid_t2533601593  get_guid_0() const { return ___guid_0; }
	inline Guid_t2533601593 * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t2533601593  value)
	{
		___guid_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
