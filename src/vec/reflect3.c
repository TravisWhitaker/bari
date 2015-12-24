// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// 'n' must be normalized.
bari_vec3 reflect3(bari_vec3 a, bari_vec3 n)
{
	bari_vec3 r;
	float m = (a.x * n.x) + (a.y * n.y) + (a.z * n.z);
	r.x = a.x - (2 * m * n.x);
	r.y = a.y - (2 * m * n.y);
	r.z = a.z - (2 * m * n.z);
	return r;
}
