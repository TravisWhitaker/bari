// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <stdio.h>

// Print a string representation of a bari_mat3 to stdout.
void bari_mat3_print(bari_mat3 a)
{
	printf("((%f, %f, %f)\n (%f, %f, %f)\n (%f, %f, %f))\n\n", a.xx, a.xy, a.xz, a.yx, a.yy, a.yz, a.zx, a.zy, a.zz);
	return;
}
