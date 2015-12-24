// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_vec3 bari_scale3(bari_vec3 a, float b)
{
	bari_vec3 r;
	r.x = b * a.x;
	r.y = b * a.y;
	r.z = b * a.z;
	return r;
}
