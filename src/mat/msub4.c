// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat4 bari_msub4(bari_mat4 a, bari_mat4 b)
{
	bari_mat4 r;
	r.xx = a.xx - b.xx;
	r.yx = a.yx - b.yx;
	r.zx = a.zx - b.zx;
	r.wx = a.wx - b.wx;
	r.xy = a.xy - b.xy;
	r.yy = a.yy - b.yy;
	r.zy = a.zy - b.zy;
	r.wy = a.wy - b.wy;
	r.xz = a.xz - b.xz;
	r.yz = a.yz - b.yz;
	r.zz = a.zz - b.zz;
	r.wz = a.wz - b.wz;
	r.xw = a.xw - b.xw;
	r.yw = a.yw - b.yw;
	r.zw = a.zw - b.zw;
	r.ww = a.ww - b.ww;
	return r;
}
