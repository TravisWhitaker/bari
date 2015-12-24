// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_vec4 bari_vscale4(bari_vec4 a, float b)
{
	bari_vec4 r;
	r.x = b * a.x;
	r.y = b * a.y;
	r.z = b * a.z;
	r.w = b * a.w;
	return r;
}
