// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

// Magnitude (length) on bari_vec3.
float bari_mag3(bari_vec3 a)
{
	return sqrtf((a.x * a.x) + (a.y * a.y) + (a.z * a.z));
}
