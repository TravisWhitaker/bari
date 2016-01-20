// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise negation on bari_vec3.
bari_vec3 bari_vneg3(bari_vec3 a)
{
	bari_vec3 r;
	r.x = -a.x;
	r.y = -a.y;
	r.z = -a.z;
	return r;
}
