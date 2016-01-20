// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Element-wise scaling on a bari_mat4.
bari_mat4 bari_mscale4(bari_mat4 a, float b)
{
	bari_mat4 r;
	r.xx = b * a.xx;
	r.yx = b * a.yx;
	r.zx = b * a.zx;
	r.wx = b * a.wx;
	r.xy = b * a.xy;
	r.yy = b * a.yy;
	r.zy = b * a.zy;
	r.wy = b * a.wy;
	r.xz = b * a.xz;
	r.yz = b * a.yz;
	r.zz = b * a.zz;
	r.wz = b * a.wz;
	r.xw = b * a.xw;
	r.yw = b * a.yw;
	r.zw = b * a.zw;
	r.ww = b * a.ww;
	return r;
}
