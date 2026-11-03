// from api 92.06%
// FUNCTION: BF2 0x74b410
#include <stdio.h>

typedef void* voidpf;

voidpf fopen_file_func(voidpf opaque, const char* filename, int mode)
{
    FILE* file = NULL;
    const char* mode_fopen = NULL;

    if ((mode & 3) == 1)
        mode_fopen = "rbS";
    else if (mode & 4)
        mode_fopen = "rbS";
    else if (mode & 8)
        mode_fopen = "wb";

    if ((filename != NULL) && (mode_fopen != NULL))
        file = fopen(filename, mode_fopen);

    return file;
}
