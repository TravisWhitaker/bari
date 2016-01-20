// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

// Distance between two bari_vec3.
float bari_dist3(bari_vec3 a, bari_vec3 b)
{
	float x = a.x - b.x;
	float y = a.y - b.y;
	float z = a.z - b.z;
	return sqrtf((x * x) + (y * y) + (z * z));
}
