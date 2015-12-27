// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat3 bari_mneg3(bari_mat3 a)
{
	bari_mat3 r;
	r.xx = -a.xx;
	r.yx = -a.yx;
	r.zx = -a.zx;
	r.xy = -a.xy;
	r.yy = -a.yy;
	r.zy = -a.zy;
	r.xz = -a.xz;
	r.yz = -a.yz;
	r.zz = -a.zz;
	return r;
}
