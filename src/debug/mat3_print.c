// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <stdio.h>

void bari_mat3_print(bari_mat3 a)
{
	printf("((%f, %f, %f)\n (%f, %f, %f)\n (%f, %f, %f))\n\n", a.xx, a.xy, a.xz, a.yx, a.yy, a.yz, a.zx, a.zy, a.zz);
	return;
}
