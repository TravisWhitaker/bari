// libbari Copyright (C) Travis Whitker 2015-2016

#include <bari.h>

#include <math.h>

// Derive a finite perspective projection transformation matrix from the given
// vertical field-of-view angle in radians, aspect ratio, near plane distance,
// and far plane distance.
// Someone please check this math.
bari_mat4 bari_perspective(float fovy, float aspect, float near, float far)
{
	bari_mat4 r = bari_mat4_zero;
	float t = tanf(fovy / 2);
	r.xx = 1 / (aspect * t);
	r.yy = 1 / t;
	r.zz = (-(far + near)) / (far - near);
	r.zw = 1 / ((1 / far) - (1 / near));
	r.wz = -1;
	return r;
}
