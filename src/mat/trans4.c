// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat4 bari_trans4(bari_mat4 a)
{
	bari_mat4 r;
	r.xx = a.xx;
	r.yx = a.xy;
	r.zx = a.xz;
	r.wx = a.xw;
	r.xy = a.yx;
	r.yy = a.yy;
	r.zy = a.yz;
	r.wy = a.yw;
	r.xz = a.zx;
	r.yz = a.zy;
	r.zz = a.zz;
	r.wz = a.zw;
	r.xw = a.wx;
	r.yw = a.wy;
	r.zw = a.wz;
	r.ww = a.ww;
	return r;
}
