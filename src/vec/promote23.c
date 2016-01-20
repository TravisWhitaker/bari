// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Promote a bari_vec2 to bari_vec3 with the supplied z component.
bari_vec3 bari_promote23(bari_vec2 a, float z)
{
	bari_vec3 r;
	*((bari_vec2 *)&r) = a;
	r.z = z;
	return r;
}
