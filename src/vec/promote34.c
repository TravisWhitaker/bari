// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Promote a bari_vec3 to bari_vec4 with the supplied w component.
bari_vec4 bari_promote34(bari_vec3 a, float w)
{
	bari_vec4 r;
	*((bari_vec3 *)&r) = a;
	r.w = w;
	return r;
}
