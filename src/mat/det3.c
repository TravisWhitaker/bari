// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

float bari_det3(bari_mat3 a)
{
	return (a.xx * ((a.yy * a.zz) - (a.yz * a.zy)))
	     - (a.xy * ((a.yx * a.zz) - (a.yz * a.zx)))
	     + (a.xz * ((a.yx * a.zy) - (a.yy * a.zx)));
}
