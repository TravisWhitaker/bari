// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat3 bari_mprod3(bari_mat3 a, bari_mat3 b)
{
	bari_mat3 r;
	r.xx = (a.xx * b.xx) + (a.xy * b.yx) + (a.xz * b.zx);
	r.yx = (a.yx * b.xx) + (a.yy * b.yx) + (a.yz * b.zx);
	r.zx = (a.zx * b.xx) + (a.zy * b.yx) + (a.zz * b.zx);
	r.xy = (a.xx * b.xy) + (a.xy * b.yy) + (a.xz * b.zy);
	r.yy = (a.yx * b.xy) + (a.yy * b.yy) + (a.yz * b.zy);
	r.zy = (a.zx * b.xy) + (a.zy * b.yy) + (a.zz * b.zy);
	r.xz = (a.xx * b.xz) + (a.xy * b.yz) + (a.xz * b.zz);
	r.yz = (a.yx * b.xz) + (a.yy * b.yz) + (a.yz * b.zz);
	r.zz = (a.zx * b.xz) + (a.zy * b.yz) + (a.zz * b.zz);
	return r;
}
