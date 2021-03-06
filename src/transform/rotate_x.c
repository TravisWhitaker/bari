// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <math.h>

// Derive a rotation transformation matrix for rotation about the x axis from
// the given phi pseudoeuler angle component.
bari_mat4 bari_rotate_x(float phi)
{
	bari_mat4 r = bari_mat4_id;
	r.yy = cosf(phi);
	r.zy = sinf(phi);
	r.yz = -sinf(phi);
	r.zz = cosf(phi);
	return r;
}
