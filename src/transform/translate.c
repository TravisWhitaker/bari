// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat4 bari_translate(float dx, float dy, float dz)
{
	bari_mat4 r = bari_mat4_id;
	r.xw = dx;
	r.yw = dy;
	r.zw = dz;
	return r;
}
