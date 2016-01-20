// libbari Copyright (C) Travis Whitker 2015-2016

#include <bari.h>

// Derive an orthographic projection transformation matrix from the given
// left, right, bottom, top, near, and far plane distances from the eye point.
// Someone please check this math.
bari_mat4 bari_ortho(float left, float right, float bottom, float top, float near, float far)
{
	bari_mat4 r = bari_mat4_zero;
	float x = 1 / (left - right);
	float y = 1 / (bottom - top);
	float z = 1 / (near - far);
	r.xx = -2 * x;
	r.yy = -2 * y;
	r.zz = 2 * z;
	r.xw = (right + left) * x;
	r.yw = (top + bottom) * y;
	r.zw = (far + near) * z;
	r.ww = 1;
	return r;
}
