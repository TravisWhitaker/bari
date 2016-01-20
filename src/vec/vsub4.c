// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise subtraction on bari_vec4.
bari_vec4 bari_vsub4(bari_vec4 a, bari_vec4 b)
{
	bari_vec4 r;
	r.x = a.x - b.x;
	r.y = a.y - b.y;
	r.z = a.z - b.z;
	r.w = a.w - b.w;
	return r;
}
