// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Matrix-vector product on bari_mat2 * bari_vec2.
bari_vec2 bari_vprod2(bari_mat2 m, bari_vec2 v)
{
	bari_vec2 r;
	r.x = (m.xx * v.x) + (m.xy * v.y);
	r.y = (m.yx * v.x) + (m.yy * v.y);
	return r;
}
