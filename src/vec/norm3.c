// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

// Normalization on bari_vec3.
bari_vec3 bari_norm3(bari_vec3 a)
{
	bari_vec3 r;
	float m = sqrtf((a.x * a.x) + (a.y * a.y) + (a.z * a.z));
	r.x = a.x / m;
	r.y = a.y / m;
	r.z = a.z / m;
	return r;
}
