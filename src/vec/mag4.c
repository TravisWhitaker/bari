// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

float bari_mag4(bari_vec4 a)
{
	return sqrtf((a.x * a.x) + (a.y * a.y) + (a.z * a.z) + (a.w * a.w));
}
