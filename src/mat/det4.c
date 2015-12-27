// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// This is slow. Subdeterminants are shared, and the variable names come from
// this element labeling:
//
// | a b c d |
// | e f g h |
// | i j k l |
// | m n p q |
//
// So the variable 'kq_lp' is this subdeterminant:
//
// | k l |
// | p q |
float bari_det4(bari_mat4 a)
{
	float kq_lp = (a.zz * a.ww) - (a.zw * a.wz);
	float jq_ln = (a.zy * a.ww) - (a.zw * a.wy);
	float jp_kn = (a.zy * a.wz) - (a.zz * a.wy);
	float iq_lm = (a.zx * a.ww) - (a.zw * a.wx);
	float ip_km = (a.zx * a.wz) - (a.zz * a.wx);
	float in_jm = (a.zx * a.wy) - (a.zy * a.wx);
	return (a.xx * ((a.yy * kq_lp) - (a.yz * jq_ln) + (a.yw * jp_kn)))
	     - (a.xy * ((a.yx * kq_lp) - (a.yz * iq_lm) + (a.yw * ip_km)))
	     + (a.xz * ((a.yx * jq_ln) - (a.yy * iq_lm) + (a.yw * in_jm)))
	     - (a.xw * ((a.yx * jp_kn) - (a.yy * ip_km) + (a.yz * in_jm)));
}
