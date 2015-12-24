// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_vec3 bari_cross(bari_vec3 a, bari_vec3 b)
{
	bari_vec3 r;
	r.x = (a.y * b.z) - (a.z * b.y);
	r.y = (a.z * b.x) - (a.x * b.z);
	r.z = (a.x * b.y) - (a.y * b.x);
	return r;
}
