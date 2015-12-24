// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// 'n' must be normalized.
bari_vec2 reflect2(bari_vec2 a, bari_vec2 n)
{
	bari_vec2 r;
	float m = (a.x * n.x) + (a.y * n.y);
	r.x = a.x - (2 * m * n.x);
	r.y = a.y - (2 * m * n.y);
	return r;
}
