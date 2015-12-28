// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <math.h>

// The angle is in radians.
bari_mat4 bari_rotate_y(float theta)
{
	bari_mat4 r = bari_mat4_id;
	r.xx = cosf(theta);
	r.zx = -sinf(theta);
	r.xz = sinf(theta);
	r.zz = cosf(theta);
	return r;
}
