// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <stdio.h>

void bari_vec4_print(bari_vec4 a)
{
	printf("(%f, %f, %f, %f)", a.x, a.y, a.z, a.w);
	return;
}
