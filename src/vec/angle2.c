// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

float bari_angle2(bari_vec2 a, bari_vec2 b)
{
	float ma = sqrtf((a.x * a.x) + (a.y * a.y));
	float mb = sqrtf((b.x * b.x) + (b.y * b.y));
	float dp = (a.x * b.x) + (a.y * b.y);
	return acosf(dp / (ma * mb));
}
