#include <stdio.h>

extern "C" int* getBuildNrString_4ec3b0()
{
    if (*(char*)0xf66b60 == 0) {
        sprintf((char*)0xf66b60, "0xb3a85f", 1, 5, 0xc51, 0x322, 0);
    }
    return (int*)0xf66b60;
}
