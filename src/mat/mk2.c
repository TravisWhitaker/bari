// libbari Copyright (C) Travis Whitaker 2015-2016

#include <bari.h>

bari_mat2 bari_mkmat2(float xx, float xy,
                      float yx, float yy)
{
    bari_mat2 m = {xx, yx, xy, yy};
    return m;
}
