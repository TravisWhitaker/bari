// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_vec2 bari_neg2(bari_vec2 a)
{
	bari_vec2 r;
	r.x = -a.x;
	r.y = -a.y;
	return r;
}
