// libbari Copyright (C) Travis Whitaker 2015-2016

#ifndef BARI_H
#define BARI_H

typedef struct
{
	float x;
	float y;
} bari_vec2;

typedef struct
{
	float x;
	float y;
	float z;
} bari_vec3;

typedef struct
{
	float x;
	float y;
	float z;
	float w;
} bari_vec4;

typedef struct
{
	float xx;
	float yx;
	float xy;
	float yy;
} bari_mat2;

typedef struct
{
	float xx;
	float yx;
	float zx;
	float xy;
	float yy;
	float zy;
	float xz;
	float yz;
	float zz;
} bari_mat3;

typedef struct
{
	float xx;
	float yx;
	float zx;
	float wx;
	float xy;
	float yy;
	float zy;
	float wy;
	float xz;
	float yz;
	float zz;
	float wz;
	float xw;
	float yw;
	float zw;
	float ww;
} bari_mat4;

#endif
