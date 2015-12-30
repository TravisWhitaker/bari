// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_vec4 bari_vprod4(bari_mat4 m, bari_vec4 v)
{
	bari_vec4 r;
	r.x = (m.xx * v.x) + (m.xy * v.y) + (m.xz * v.z) + (m.xw * v.w);
	r.y = (m.yx * v.x) + (m.yy * v.y) + (m.yz * v.z) + (m.yw * v.w);
	r.z = (m.zx * v.x) + (m.zy * v.y) + (m.zz * v.z) + (m.zw * v.w);
	r.w = (m.wx * v.x) + (m.wy * v.y) + (m.wz * v.z) + (m.ww * v.w);
	return r;
}
