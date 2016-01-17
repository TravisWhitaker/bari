// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <stdio.h>

void bari_mat2_print(bari_mat2 a)
{
	printf("((%f, %f)\n (%f, %f))\n\n", a.xx, a.xy, a.yx, a.yy);
	return;
}
