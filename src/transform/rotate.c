// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Derive a rotation transformation matrix from the given phi, theta, and psi
// pseudoeuler rotation components.
// The angle is in radians.
bari_mat4 bari_rotate(float phi, float theta, float psi)
{
	return bari_mprod4(bari_rotate_z(psi),
	       bari_mprod4(bari_rotate_y(theta),
	                   bari_rotate_x(phi)));
}
