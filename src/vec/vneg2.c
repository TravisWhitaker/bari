// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise negation on bari_vec2.
bari_vec2 bari_vneg2(bari_vec2 a)
{
	bari_vec2 r;
	r.x = -a.x;
	r.y = -a.y;
	return r;
}
