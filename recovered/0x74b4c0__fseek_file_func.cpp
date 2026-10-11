// FUNCTION: BF2 0x74b4c0
#include <stdio.h>

typedef void* voidpf;
typedef unsigned long uLong;

long fseek_file_func(voidpf opaque, voidpf stream, uLong offset, int origin)
{
    FILE* fp = (FILE*)stream;
    int fseek_origin = 0;

    switch (origin) {
    case 1:
        fseek_origin = 1;
        break;
    case 2:
        fseek_origin = 2;
        break;
    case 0:
        fseek_origin = 0;
        break;
    default:
        return -1;
    }

    fseek(fp, offset, fseek_origin);
    return 0;
}
