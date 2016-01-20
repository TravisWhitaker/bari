// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <stdio.h>

// Print a string representation of a bari_mat2 to stdout.
void bari_mat2_print(bari_mat2 a)
{
	printf("((%f, %f)\n (%f, %f))\n\n", a.xx, a.xy, a.yx, a.yy);
	return;
}
