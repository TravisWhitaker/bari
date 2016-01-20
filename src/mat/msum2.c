// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise addition on bari_mat2.
bari_mat2 bari_msum2(bari_mat2 a, bari_mat2 b)
{
	bari_mat2 r;
	r.xx = a.xx + b.xx;
	r.yx = a.yx + b.yx;
	r.xy = a.xy + b.xy;
	r.yy = a.yy + b.yy;
	return r;
}
