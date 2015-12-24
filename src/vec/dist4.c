// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

float bari_dist4(bari_vec4 a, bari_vec4 b)
{
	float x = a.x - b.x;
	float y = a.y - b.y;
	float z = a.z - b.z;
	float w = a.w - b.w;
	return sqrtf((x * x) + (y * y) + (z * z) + (w * w));
}
