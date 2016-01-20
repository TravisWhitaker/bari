// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise subtraction on bari_mat2.
bari_mat2 bari_msub2(bari_mat2 a, bari_mat2 b)
{
	bari_mat2 r;
	r.xx = a.xx - b.xx;
	r.yx = a.yx - b.yx;
	r.xy = a.xy - b.xy;
	r.yy = a.yy - b.yy;
	return r;
}
