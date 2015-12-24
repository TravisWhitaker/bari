// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

bari_vec2 bari_norm2(bari_vec2 a)
{
	bari_vec2 r;
	float m = sqrtf((a.x * a.x) + (a.y * a.y));
	r.x = a.x / m;
	r.y = a.y / m;
	return r;
}
