// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Reflection over lines. Reflect "a" over the line normal to "n". "n" must be
// normal.
bari_vec2 reflect2(bari_vec2 a, bari_vec2 n)
{
	bari_vec2 r;
	float m = 2 * ((a.x * n.x) + (a.y * n.y));
	r.x = a.x - (m * n.x);
	r.y = a.y - (m * n.y);
	return r;
}
