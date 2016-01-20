// libbari Copyright (C) Travis Whitker 2015-2016

#include <bari.h>

#include <math.h>

// Derive an infinite perspective projection transformation matrix from a
// field-of-view angle in radians, aspect ratio, and near plane distance.
// Someone please check this math.
bari_mat4 bari_infinite_perspective(float fovy, float aspect, float near)
{
	bari_mat4 r = bari_mat4_zero;
	float t = near*tanf(fovy / 2);
	r.xx =  near / (aspect * t);
	r.yy = near / t;
	r.zz = -1;
	r.zw = -2 * near;
	r.wz = -1;
	return r;
}
