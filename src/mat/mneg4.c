// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise negation on bari_mab4.
bari_mat4 bari_mneg4(bari_mat4 a)
{
	bari_mat4 r;
	r.xx = -a.xx;
	r.yx = -a.yx;
	r.zx = -a.zx;
	r.wx = -a.wx;
	r.xy = -a.xy;
	r.yy = -a.yy;
	r.zy = -a.zy;
	r.wy = -a.wy;
	r.xz = -a.xz;
	r.yz = -a.yz;
	r.zz = -a.zz;
	r.ww = -a.ww;
	r.xw = -a.xw;
	r.yw = -a.yw;
	r.zw = -a.zw;
	r.ww = -a.ww;
	return r;
}
