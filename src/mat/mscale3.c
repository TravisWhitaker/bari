// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat3 bari_mscale3(bari_mat3 a, float b)
{
	bari_mat3 r;
	r.xx = b * a.xx;
	r.yx = b * a.yx;
	r.zx = b * a.zx;
	r.xy = b * a.xy;
	r.yy = b * a.yy;
	r.zy = b * a.zy;
	r.xz = b * a.xz;
	r.yz = b * a.yz;
	r.zz = b * a.zz;
	return r;
}
