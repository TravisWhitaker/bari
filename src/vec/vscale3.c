// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise scaling on bari_vec3.
bari_vec3 bari_vscale3(bari_vec3 a, float b)
{
	bari_vec3 r;
	r.x = b * a.x;
	r.y = b * a.y;
	r.z = b * a.z;
	return r;
}
