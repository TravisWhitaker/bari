// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_vec3 bari_demote43(bari_vec4 a)
{
	return *((bari_vec3 *)&a);
}
