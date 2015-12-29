// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <stdio.h>

void bari_mat2_print(bari_mat2 a)
{
	printf("((%f, %f), (%f, %f))", a.xx, a.xy, a.yx, a.yy);
	return;
}
