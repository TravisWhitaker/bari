// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_vec2 bari_demote32(bari_vec3 a)
{
	return *((bari_vec2 *)&a);
}
