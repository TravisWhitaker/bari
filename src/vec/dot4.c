// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Dot product on bari_vec4.
float bari_dot4(bari_vec4 a, bari_vec4 b)
{
	return (a.x * b.x) + (a.y * b.y) + (a.z * b.z) + (a.w * b.w);
}
