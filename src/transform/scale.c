// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Derive a scaling transformation matrix from the given signed scaling
// coefficients.
bari_mat4 bari_scale(float mx, float my, float mz)
{
	bari_mat4 r = bari_mat4_id;
	r.xx = mx;
	r.yy = my;
	r.zz = mz;
	return r;
}
