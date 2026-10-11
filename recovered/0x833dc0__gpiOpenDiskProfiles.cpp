// FUNCTION: BF2 0x833dc0
extern "C" {
typedef struct _IO_FILE FILE;
FILE* fopen(const char*, const char*);
extern char GPIInfoCacheFilename[];
}

int gpiOpenDiskProfiles(void* gp, int write, int* error)
{
    void* conn = *(void**)gp;
    FILE* file;
    if (write)
        file = fopen(GPIInfoCacheFilename, "wt");
    else
        file = fopen(GPIInfoCacheFilename, "rt");
    if (file == 0)
    {
        *error = 1;
        return 0;
    }
    *(FILE**)((char*)conn + 0x4a0) = file;
    *error = 0;
    return 0;
}
