// FUNCTION: BF2 0x83c7b0
#include <stdio.h>
extern "C" void MD5Print(unsigned char* data, char* out)
{
    int i;
    for (i = 0; i < 16; i++, out += 2)
    {
        sprintf(out, "%02x", data[i]);
    }
}
