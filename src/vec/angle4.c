// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

float bari_angle4(bari_vec4 a, bari_vec4 b)
{
	float ma = sqrtf((a.x * a.x) + (a.y * a.y) + (a.z * a.z) + (a.w * a.w));
	float mb = sqrtf((b.x * b.x) + (b.y * b.y) + (b.z * b.z) + (b.w * b.w));
	float dp = (a.x * b.x) + (a.y * b.y) + (a.z * b.z) + (a.w * b.w);
	return acosf(dp / (ma * mb));
}
