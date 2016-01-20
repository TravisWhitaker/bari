// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Multiplication on bari_mat4.
bari_mat4 bari_mprod4(bari_mat4 a, bari_mat4 b)
{
	bari_mat4 r;
	r.xx = (a.xx * b.xx) + (a.xy * b.yx) + (a.xz * b.zx) + (a.xw * b.wx);
	r.yx = (a.yx * b.xx) + (a.yy * b.yx) + (a.yz * b.zx) + (a.yw * b.wx);
	r.zx = (a.zx * b.xx) + (a.zy * b.yx) + (a.zz * b.zx) + (a.zw * b.wx);
	r.wx = (a.wx * b.xx) + (a.wy * b.yx) + (a.wz * b.zx) + (a.ww * b.wx);
	r.xy = (a.xx * b.xy) + (a.xy * b.yy) + (a.xz * b.zy) + (a.xw * b.wy);
	r.yy = (a.yx * b.xy) + (a.yy * b.yy) + (a.yz * b.zy) + (a.yw * b.wy);
	r.zy = (a.zx * b.xy) + (a.zy * b.yy) + (a.zz * b.zy) + (a.zw * b.wy);
	r.wy = (a.wx * b.xy) + (a.wy * b.yy) + (a.wz * b.zy) + (a.ww * b.wy);
	r.xz = (a.xx * b.xz) + (a.xy * b.yz) + (a.xz * b.zz) + (a.xw * b.wz);
	r.yz = (a.yx * b.xz) + (a.yy * b.yz) + (a.yz * b.zz) + (a.yw * b.wz);
	r.zz = (a.zx * b.xz) + (a.zy * b.yz) + (a.zz * b.zz) + (a.zw * b.wz);
	r.wz = (a.wx * b.xz) + (a.wy * b.yz) + (a.wz * b.zz) + (a.ww * b.wz);
	r.xw = (a.xx * b.xw) + (a.xy * b.yw) + (a.xz * b.zw) + (a.xw * b.ww);
	r.yw = (a.yx * b.xw) + (a.yy * b.yw) + (a.yz * b.zw) + (a.yw * b.ww);
	r.zw = (a.zx * b.xw) + (a.zy * b.yw) + (a.zz * b.zw) + (a.zw * b.ww);
	r.ww = (a.wx * b.xw) + (a.wy * b.yw) + (a.wz * b.zw) + (a.ww * b.ww);
	return r;
}
