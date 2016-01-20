// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise scaling on a bari_mat2.
bari_mat2 bari_mscale2(bari_mat2 a, float b)
{
	bari_mat2 r;
	r.xx = b * a.xx;
	r.yx = b * a.yx;
	r.xy = b * a.xy;
	r.yy = b * a.yy;
	return r;
}
