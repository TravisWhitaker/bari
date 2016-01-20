// libbari Copyright (C) Travis Whitaker 2015-2016

#ifndef BARI_H
#define BARI_H

// Two-component vector.
typedef struct
{
	float x;
	float y;
} bari_vec2;

// Three-component vector.
typedef struct
{
	float x;
	float y;
	float z;
} bari_vec3;

// Four-component vector.
typedef struct
{
	float x;
	float y;
	float z;
	float w;
} bari_vec4;

// Two-by-two matrix stored in OpenGL-native column-major order.
typedef struct
{
	float xx;
	float yx;
	float xy;
	float yy;
} bari_mat2;

// Three-by-three matrix stored in OpenGL-native column-native order.
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

// Four-by-four matrix stored in OpenGL-native column-native order.
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

static const bari_vec2 bari_vec2_zero = {0, 0};
static const bari_vec3 bari_vec3_zero = {0, 0, 0};
static const bari_vec4 bari_vec4_zero = {0, 0, 0, 0};

static const bari_mat2 bari_mat2_zero = {0, 0, 0, 0};
static const bari_mat3 bari_mat3_zero = {0, 0, 0, 0, 0, 0, 0, 0, 0};
static const bari_mat4 bari_mat4_zero = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

// Identity matrices:

static const bari_mat2 bari_mat2_id = {1, 0,
                                       0, 1};
static const bari_mat3 bari_mat3_id = {1, 0, 0,
                                       0, 1, 0,
                                       0, 0, 1};
static const bari_mat4 bari_mat4_id = {1, 0, 0, 0,
                                       0, 1, 0, 0,
                                       0, 0, 1, 0,
                                       0, 0, 0, 1};

// Vector constructors:

bari_vec2 bari_mkvec2(float x, float y);
bari_vec3 bari_mkvec3(float x, float y, float z);
bari_vec4 bari_mkvec4(float x, float y, float z, float w);

// Row-=major matrix constructors:

bari_mat2 bari_mkmat2(float xx, float xy,
                      float yx, float yy);
bari_mat3 bari_mkmat3(float xx, float xy, float xz,
                      float yx, float yy, float yz,
                      float zx, float zy, float zz);
bari_mat4 bari_mkmat4(float xx, float xy, float xz, float xw,
                      float yx, float yy, float yz, float yw,
                      float zx, float zy, float zz, float zw,
                      float wx, float wy, float wz, float ww);

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

// Matrix functions:

float bari_det2(bari_mat2 a);
float bari_det3(bari_mat3 a);
float bari_det4(bari_mat4 a);

bari_mat2 bari_mneg2(bari_mat2 a);
bari_mat3 bari_mneg3(bari_mat3 a);
bari_mat4 bari_mneg4(bari_mat4 a);

bari_mat2 bari_mprod2(bari_mat2 a, bari_mat2 b);
bari_mat3 bari_mprod3(bari_mat3 a, bari_mat3 b);
bari_mat4 bari_mprod4(bari_mat4 a, bari_mat4 b);

bari_mat2 bari_mscale2(bari_mat2 a, float b);
bari_mat3 bari_mscale3(bari_mat3 a, float b);
bari_mat4 bari_mscale4(bari_mat4 a, float b);

bari_mat2 bari_msub2(bari_mat2 a, bari_mat2 b);
bari_mat3 bari_msub3(bari_mat3 a, bari_mat3 b);
bari_mat4 bari_msub4(bari_mat4 a, bari_mat4 b);

bari_mat2 bari_msum2(bari_mat2 a, bari_mat2 b);
bari_mat3 bari_msub3(bari_mat3 a, bari_mat3 b);
bari_mat4 bari_msub4(bari_mat4 a, bari_mat4 b);

bari_mat2 bari_trans2(bari_mat2 a);
bari_mat3 bari_trans3(bari_mat3 a);
bari_mat4 bari_trans4(bari_mat4 a);

bari_vec2 bari_vprod2(bari_mat2 m, bari_vec2 v);
bari_vec3 bari_vprod3(bari_mat3 m, bari_vec3 v);
bari_vec4 bari_vprod4(bari_mat4 m, bari_vec4 v);

// Transformation matrices:

bari_mat4 bari_infinite_perspective(float fovy, float aspect, float near);

bari_mat4 bari_lookat(bari_vec3 eye, bari_vec3 center, bari_vec3 up);

bari_mat4 bari_ortho(float left, float right, float bottom, float top, float near, float far);

bari_mat4 bari_perspective(float fovy, float aspect, float near, float far);

bari_mat4 bari_rotate(float phi, float theta, float psi);
bari_mat4 bari_rotate_x(float phi);
bari_mat4 bari_rotate_y(float theta);
bari_mat4 bari_rotate_z(float psi);

bari_mat4 bari_scale(float mx, float my, float mz);

bari_mat4 bari_translate(float dx, float dy, float dz);

// Debugging functions:

void bari_vec2_print(bari_vec2 a);
void bari_vec3_print(bari_vec3 a);
void bari_vec4_print(bari_vec4 a);

void bari_mat2_print(bari_mat2 a);
void bari_mat3_print(bari_mat3 a);
void bari_mat4_print(bari_mat4 a);

#endif
