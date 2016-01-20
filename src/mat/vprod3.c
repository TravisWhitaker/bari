// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Matrix-vector product on bari_mat3 * bari_vec3.
bari_vec3 bari_vprod3(bari_mat3 m, bari_vec3 v)
{
	bari_vec3 r;
	r.x = (m.xx * v.x) + (m.xy * v.y) + (m.xz * v.z);
	r.y = (m.yx * v.x) + (m.yy * v.y) + (m.yz * v.z);
	r.z = (m.zx * v.x) + (m.zy * v.y) + (m.zz * v.z);
	return r;
}
