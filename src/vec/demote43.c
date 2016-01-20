// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Demote a bari_vec4 to a bari_vec3, ignoring the w component.
bari_vec3 bari_demote43(bari_vec4 a)
{
	return *((bari_vec3 *)&a);
}
