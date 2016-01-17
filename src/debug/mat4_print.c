// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <stdio.h>

void bari_mat4_print(bari_mat4 a)
{
	printf("((%f, %f, %f, %f)\n (%f, %f, %f, %f)\n (%f, %f, %f, %f)\n (%f, %f, %f, %f))\n\n", a.xx, a.xy, a.xz, a.xw, a.yx, a.yy, a.yz, a.yw, a.zx, a.zy, a.zz, a.zw, a.wx, a.wy, a.wz, a.ww);
	return;
}
