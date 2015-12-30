// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat2 bari_trans2(bari_mat2 a)
{
	bari_mat2 r;
	r.xx = a.xx;
	r.yx = a.xy;
	r.xy = a.yx;
	r.yy = a.yy;
	return r;
}
