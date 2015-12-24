// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// 'n' must be normalized.
bari_vec4 reflect4(bari_vec4 a, bari_vec4 n)
{
	bari_vec4 r;
	float m = (a.x * n.x) + (a.y * n.y) + (a.z * n.z) + (a.w * n.w);
	r.x = a.x - (2 * m * n.x);
	r.y = a.y - (2 * m * n.y);
	r.z = a.z - (2 * m * n.z);
	r.w = a.w - (2 * m * n.w);
	return r;
}
