// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

bari_vec4 bari_norm4(bari_vec4 a)
{
	bari_vec4 r;
	float m = sqrtf((a.x * a.x) + (a.y * a.y) + (a.z * a.z) + (a.w * a.w));
	r.x = a.x / m;
	r.y = a.y / m;
	r.z = a.z / m;
	r.w = a.w / m;
	return r;
}
