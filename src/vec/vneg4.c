// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise negation on bari_vec4.
bari_vec4 bari_vneg4(bari_vec4 a)
{
	bari_vec4 r;
	r.x = -a.x;
	r.y = -a.y;
	r.z = -a.z;
	r.w = -a.w;
	return r;
}
