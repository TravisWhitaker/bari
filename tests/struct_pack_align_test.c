// libbari Copyright (C) Travis Whiatker 2015-2016

#include <stdio.h>

#include <bari.h>

int main()
{
	printf("Running struct packing and alignment test... ");

	bari_vec2 v2 = {1, 2};
	float *v2arr = (float *)&v2;
	if(!((v2.x == v2arr[0]) &&
	     (v2.y == v2arr[1])))
	{
		printf("FAILED\nStruct alignment failure: bari_vec2\n");
		return -1;
	}

	bari_vec3 v3 = {1, 2, 3};
	float *v3arr = (float *)&v3;
	if(!((v3.x == v3arr[0]) &&
	     (v3.y == v3arr[1]) &&
	     (v3.z == v3arr[2])))
	{
		printf("FAILED\nStruct alignment failure: bari_vec3\n");
		return -1;
	}

	bari_vec4 v4 = {1, 2, 3, 4};
	float *v4arr = (float *)&v4;
	if(!((v4.x == v4arr[0]) &&
	     (v4.y == v4arr[1]) &&
	     (v4.z == v4arr[2]) &&
	     (v4.w == v4arr[3])))
	{
		printf("FAILED\nStruct alignment failure: bari_vec4\n");
		return -1;
	}

	bari_mat2 m2 = {1, 2, 3, 4};
	float *m2arr = (float *)&m2;
	if(!((m2.xx == m2arr[0]) &&
	     (m2.yx == m2arr[1]) &&
	     (m2.xy == m2arr[2]) &&
	     (m2.yy == m2arr[3])))
	{
		printf("FAILED\nStruct alignment failure: bari_mat2\n");
		return -1;
	}

	bari_mat3 m3 = {1, 2, 3, 4, 5, 6, 7 ,8, 9};
	float *m3arr = (float *)&m3;
	if(!((m3.xx == m3arr[0]) &&
	     (m3.yx == m3arr[1]) &&
	     (m3.zx == m3arr[2]) &&
	     (m3.xy == m3arr[3]) &&
	     (m3.yy == m3arr[4]) &&
	     (m3.zy == m3arr[5]) &&
	     (m3.xz == m3arr[6]) &&
	     (m3.yz == m3arr[7]) &&
	     (m3.zz == m3arr[8])))
	{
		printf("FAILED\nStruct alignment failure: bari_mat3\n");
		return -1;
	}

	bari_mat4 m4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
	float *m4arr = (float *)&m4;
	if(!((m4.xx == m4arr[0])  &&
	     (m4.yx == m4arr[1])  &&
	     (m4.zx == m4arr[2])  &&
	     (m4.wx == m4arr[3])  &&
	     (m4.xy == m4arr[4])  &&
	     (m4.yy == m4arr[5])  &&
	     (m4.zy == m4arr[6])  &&
	     (m4.wy == m4arr[7])  &&
	     (m4.xz == m4arr[8])  &&
	     (m4.yz == m4arr[9])  &&
	     (m4.zz == m4arr[10]) &&
	     (m4.wz == m4arr[11]) &&
	     (m4.xw == m4arr[12]) &&
	     (m4.yw == m4arr[13]) &&
	     (m4.zw == m4arr[14]) &&
	     (m4.ww == m4arr[15])))
	{
		printf("FAILED\nStruct alignment failure: bari_mat4\n");
		return -1;
	}

	printf("OK\n");
	return 0;
}
