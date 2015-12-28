// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat4 bari_mprod4(bari_mat4 a, bari_mat4 b)
{
	bari_mat4 r;
	r.xx = (a.xx * b.xx) + (a.xy * b.yx) + (a.xz * b.zx) + (a.xw * b.wx);
	r.yx = (a.xy * b.xx) + (a.yy * b.yx) + (a.zy * b.zx) + (a.wy * b.wx);
	r.zx = (a.xz * b.xx) + (a.yz * b.yx) + (a.zz * b.zx) + (a.wz * b.wx);
	r.wx = (a.xw * b.xx) + (a.yw * b.yx) + (a.zw * b.zx) + (a.ww * b.wx);
	r.xy = (a.xx * b.xy) + (a.xy * b.yy) + (a.xz * b.zy) + (a.xw * b.wy);
	r.yy = (a.xy * b.xy) + (a.yy * b.yy) + (a.zy * b.zy) + (a.wy * b.wy);
	r.zy = (a.xz * b.xy) + (a.yz * b.yy) + (a.zz * b.zy) + (a.wz * b.wy);
	r.wy = (a.xw * b.xy) + (a.yw * b.yy) + (a.zw * b.zy) + (a.ww * b.wy);
	r.xz = (a.xx * b.xz) + (a.xy * b.yz) + (a.xz * b.zz) + (a.xw * b.wz);
	r.yz = (a.xy * b.xz) + (a.yy * b.yz) + (a.zy * b.zz) + (a.wy * b.wz);
	r.zz = (a.xz * b.xz) + (a.yz * b.yz) + (a.zz * b.zz) + (a.wz * b.wz);
	r.wz = (a.xw * b.xz) + (a.yw * b.yz) + (a.zw * b.zz) + (a.ww * b.wz);
	r.xw = (a.xx * b.xw) + (a.xy * b.yw) + (a.xz * b.zw) + (a.xw * b.ww);
	r.yw = (a.xy * b.xw) + (a.yy * b.yw) + (a.zy * b.zw) + (a.wy * b.ww);
	r.zw = (a.xz * b.xw) + (a.yz * b.yw) + (a.zz * b.zw) + (a.wz * b.ww);
	r.ww = (a.xw * b.xw) + (a.yw * b.yw) + (a.zw * b.zw) + (a.ww * b.ww);
	return r;
}
