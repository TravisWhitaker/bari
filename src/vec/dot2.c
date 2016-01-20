// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Dot product on bari_vec2.
float bari_dot2(bari_vec2 a, bari_vec2 b)
{
	return (a.x * b.x) + (a.y * b.y);
}
