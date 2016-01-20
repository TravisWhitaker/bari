// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Reflection over hyperplanes. Reflect "a" over the hyperplane normal to "n".
// "n" must be normal.
bari_vec4 reflect4(bari_vec4 a, bari_vec4 n)
{
	bari_vec4 r;
	float m = 2 * ((a.x * n.x) + (a.y * n.y) + (a.z * n.z) + (a.w * n.w));
	r.x = a.x - (m * n.x);
	r.y = a.y - (m * n.y);
	r.z = a.z - (m * n.z);
	r.w = a.w - (m * n.w);
	return r;
}
