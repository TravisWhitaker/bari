// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Demote a bari_vec3 to bari_vec2, ignoring the z component.
bari_vec2 bari_demote32(bari_vec3 a)
{
	return *((bari_vec2 *)&a);
}
