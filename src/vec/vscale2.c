// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_vec2 bari_vscale2(bari_vec2 a, float b)
{
	bari_vec2 r;
	r.x = b * a.x;
	r.y = b * a.y;
	return r;
}
