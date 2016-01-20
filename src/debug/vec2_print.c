// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

#include <stdio.h>

// Print a string representation of a bari_vec2 to stdout.
void bari_vec2_print(bari_vec2 a)
{
	printf("(%f, %f)\n\n", a.x, a.y);
	return;
}
