// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat3 bari_msum3(bari_mat3 a, bari_mat3 b)
{
	bari_mat3 r;
	r.xx = a.xx + b.xx;
	r.yx = a.yx + b.yx;
	r.zx = a.zx + b.zx;
	r.xy = a.xy + b.xy;
	r.yy = a.yy + b.yy;
	r.zy = a.zy + b.zy;
	r.xz = a.xz + b.xz;
	r.yz = a.yz + b.yz;
	r.zz = a.zz + b.zz;
	return r;
}
