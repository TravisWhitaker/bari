// libbari Copyright (C) Travis Whitaker 2015-2016

#include <math.h>

#include <bari.h>

// Magnitude (length) on bari_vec2.
float bari_mag2(bari_vec2 a)
{
	return sqrtf((a.x * a.x) + (a.y * a.y));
}
