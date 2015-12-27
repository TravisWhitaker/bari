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

// Zeros:

const bari_vec2 bari_vec2_zero = {0, 0};
const bari_vec3 bari_vec3_zero = {0, 0, 0};
const bari_vec4 bari_vec4_zero = {0, 0, 0, 0};

const bari_mat2 bari_mat2_zero = {0, 0, 0, 0};
const bari_mat3 bari_mat3_zero = {0, 0, 0, 0, 0, 0, 0, 0, 0};
const bari_mat4 bari_mat4_zero = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

// Identity matrices:

const bari_mat2 bari_mat2_id = {1, 0,
                                0, 1};
const bari_mat3 bari_mat3_id = {1, 0, 0,
                                0, 1, 0,
                                0, 0, 1};
const bari_mat4 bari_mat4_id = {1, 0, 0, 0,
                                0, 1, 0, 0,
                                0, 0, 1, 0,
                                0, 0, 0, 1};

// Vector functions:

float bari_angle2(bari_vec2 a, bari_vec2 b);
float bari_angle3(bari_vec3 a, bari_vec3 b);
float bari_angle4(bari_vec4 a, bari_vec4 b);

bari_vec3 bari_cross(bari_vec3 a, bari_vec3 b);

bari_vec2 bari_demote32(bari_vec3 a);
bari_vec3 bari_demote43(bari_vec4 a);

float bari_dist2(bari_vec2 a, bari_vec2 b);
float bari_dist3(bari_vec3 a, bari_vec3 b);
float bari_dist4(bari_vec4 a, bari_vec4 b);

float bari_dot2(bari_vec2 a, bari_vec2 b);
float bari_dot3(bari_vec3 a, bari_vec3 b);
float bari_dot4(bari_vec4 a, bari_vec4 b);

float bari_mag2(bari_vec2 a);
float bari_mag3(bari_vec3 a);
float bari_mag4(bari_vec4 a);

bari_vec2 bari_norm2(bari_vec2 a);
bari_vec3 bari_norm3(bari_vec3 a);
bari_vec4 bari_norm4(bari_vec4 a);

bari_vec3 bari_promote23(bari_vec2 a, float z);
bari_vec4 bari_promote34(bari_vec3 a, float w);

bari_vec2 bari_reflect2(bari_vec2 a, bari_vec2 n);
bari_vec3 bari_reflect3(bari_vec3 a, bari_vec3 n);
bari_vec4 bari_reflect4(bari_vec4 a, bari_vec4 n);

bari_vec2 bari_vneg2(bari_vec2 a);
bari_vec3 bari_vneg3(bari_vec3 a);
bari_vec4 bari_vneg4(bari_vec4 a);

bari_vec2 bari_vscale2(bari_vec2 a, float b);
bari_vec3 bari_vscale3(bari_vec3 a, float b);
bari_vec4 bari_vscale4(bari_vec4 a, float b);

bari_vec2 bari_vsub2(bari_vec2 a, bari_vec2 b);
bari_vec3 bari_vsub3(bari_vec3 a, bari_vec3 b);
bari_vec4 bari_vsub4(bari_vec4 a, bari_vec4 b);

bari_vec2 bari_vsum2(bari_vec2 a, bari_vec2 b);
bari_vec3 bari_vsum3(bari_vec3 a, bari_vec3 b);
bari_vec4 bari_vsum4(bari_vec4 a, bari_vec4 b);

#endif
