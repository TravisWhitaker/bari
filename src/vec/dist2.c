// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

// Distance between two bari_vec2.
float bari_dist2(bari_vec2 a, bari_vec2 b)
{
	float x = a.x - b.x;
	float y = a.y - b.y;
	return sqrtf((x * x) + (y * y));
}
