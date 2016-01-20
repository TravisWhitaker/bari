// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise negation on bari_mat2.
bari_mat2 bari_mneg2(bari_mat2 a)
{
	bari_mat2 r;
	r.xx = -a.xx;
	r.yx = -a.yx;
	r.xy = -a.xy;
	r.yy = -a.yy;
	return r;
}
