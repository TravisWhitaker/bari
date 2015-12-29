// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <stdio.h>

void bari_mat3_print(bari_mat3 a)
{
	printf("((%f, %f, %f), (%f, %f, %f), (%f, %f, %f))", a.xx, a.xy, a.xz, a.yx, a.yy, a.yz, a.zx, a.zy, a.zz);
	return;
}
