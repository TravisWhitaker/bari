// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Dot product on bari_vec3.
float bari_dot3(bari_vec3 a, bari_vec3 b)
{
	return (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
}
