// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise multiplication on bari_vec2.
bari_vec2 bari_vmul2(bari_vec2 a, bari_vec2 b)
{
	bari_vec2 r;
	r.x = a.x * b.x;
	r.y = a.y * b.y;
	return r;
}
