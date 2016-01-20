// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Row-major constructor for bari_mat3.
bari_mat3 bari_mkmat3(float xx, float xy, float xz,
                      float yx, float yy, float yz,
                      float zx, float zy, float zz)
{
	bari_mat3 m = {xx, yx, zx, xy, yy, zy, xz, yz, zz};
	return m;
}
