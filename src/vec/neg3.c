// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_vec3 bari_neg3(bari_vec3 a)
{
	bari_vec3 r;
	r.x = -a.x;
	r.y = -a.y;
	r.z = -a.z;
	return r;
}
