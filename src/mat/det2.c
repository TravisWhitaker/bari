// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Determinant on bari_mat2.
float bari_det2(bari_mat2 a)
{
	return (a.xx * a.yy) - (a.xy * a.yx);
}
