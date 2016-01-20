// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

// Compute the angle between two bari_vec3.
float bari_angle3(bari_vec3 a, bari_vec3 b)
{
	float ma = sqrtf((a.x * a.x) + (a.y * a.y) + (a.z * a.z));
	float mb = sqrtf((b.x * b.x) + (b.y * b.y) + (b.z * b.z));
	float dp = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
	return acosf(dp / (ma * mb));
}
