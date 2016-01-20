// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise subtraction on bari_vec3.
bari_vec3 bari_vsub3(bari_vec3 a, bari_vec3 b)
{
	bari_vec3 r;
	r.x = a.x - b.x;
	r.y = a.y - b.y;
	r.z = a.z - b.z;
	return r;
}
