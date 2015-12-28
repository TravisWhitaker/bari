// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat4 bari_scale(float mx, float my, float mz)
{
	bari_mat4 r = bari_mat4_id;
	r.xx = mx;
	r.yy = my;
	r.zz = mz;
	return r;
}
