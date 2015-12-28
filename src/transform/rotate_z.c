// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <math.h>

// The angle is in radians.
bari_mat4 bari_rotate_z(float psi)
{
	bari_mat4 r = bari_mat4_id;
	r.xx = cosf(psi);
	r.yx = sinf(psi);
	r.xy = -sinf(psi);
	r.yy = cosf(psi);
	return r;
}
