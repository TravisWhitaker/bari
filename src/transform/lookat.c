// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Derive a camera transformation matrix from an eye position vector,
// field-of-view center vector, and field-of-view orientation. Intuitively, the
// "eye" vector is the location of the camera in the world, the "center" vector
// is the direction the camera is pointing towards, and the camera is rotated
// around the "center" axis such that the "up" vector is pointing up in the
// frame.
// Someone please check this math.
bari_mat4 bari_lookat(bari_vec3 eye, bari_vec3 center, bari_vec3 up)
{
	bari_mat4 r = bari_mat4_zero;
	bari_vec3 za = bari_norm3(bari_vsub3(center, eye));
	bari_vec3 xa = bari_norm3(bari_cross(za, up));
	bari_vec3 ya = bari_cross(xa, za);
	r.xx = xa.x;
	r.yx = ya.x;
	r.zx = -za.x;
	r.xy = xa.y;
	r.yy = ya.y;
	r.zy = -za.y;
	r.xz = xa.z;
	r.yz = ya.z;
	r.zz = -za.z;
	r.xw = -bari_dot3(xa, eye);
	r.yw = -bari_dot3(ya, eye);
	r.zw = bari_dot3(za, eye);
	r.ww = 1;
	return r;
}
