// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat2 bari_mprod2(bari_mat2 a, bari_mat2 b)
{
	bari_mat2 r;
	r.xx = (a.xx * b.xx) + (a.xy * b.yx);
	r.yx = (a.yx * b.xx) + (a.yy * b.yx);
	r.xy = (a.xx * b.xy) + (a.xy * b.yy);
	r.yy = (a.yx * b.xy) + (a.yy * b.yy);
	return r;
}
