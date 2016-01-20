// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

// Constructor for bari_vec4.
bari_vec4 bari_mkvec4(float x, float y, float z, float w)
{
	bari_vec4 v = {x, y, z, w};
	return v;
}
