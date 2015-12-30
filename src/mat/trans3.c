// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat3 bari_trans3(bari_mat3 a)
{
	bari_mat3 r;
	r.xx = a.xx;
	r.yx = a.xy;
	r.zx = a.xz;
	r.xy = a.yx;
	r.yy = a.yy;
	r.zy = a.yz;
	r.xz = a.zx;
	r.yz = a.zy;
	r.zz = a.zz;
	return r;
}
