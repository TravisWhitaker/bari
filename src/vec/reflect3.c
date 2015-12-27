// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// 'n' must be normalized.
bari_vec3 reflect3(bari_vec3 a, bari_vec3 n)
{
	bari_vec3 r;
	float m = 2 * ((a.x * n.x) + (a.y * n.y) + (a.z * n.z));
	r.x = a.x - (m * n.x);
	r.y = a.y - (m * n.y);
	r.z = a.z - (m * n.z);
	return r;
}
