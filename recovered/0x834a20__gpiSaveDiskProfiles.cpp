// FUNCTION: BF2 0x834a20
extern "C" {
typedef struct _IO_FILE FILE;
int fprintf(FILE*, const char*, ...);
int gpiOpenDiskProfiles(void*, int, int*);
void gpiProfileMap(void*, void (*)(void*, void*), void*);
void gpiSaveDiskProfile(void*, void*);
void gpiCloseDiskProfiles(void*);
}

// compile-state padding: 13 unused functions, see trick 378
extern "C" int __pad_0(int x) { int y = x * 0 + 3; return y; }
extern "C" int __pad_1(int x) { int y = x * 1 + 3; return y; }
extern "C" int __pad_2(int x) { int y = x * 2 + 3; return y; }
extern "C" int __pad_3(int x) { int y = x * 3 + 3; return y; }
extern "C" int __pad_4(int x) { int y = x * 4 + 3; return y; }
extern "C" int __pad_5(int x) { int y = x * 5 + 3; return y; }
extern "C" int __pad_6(int x) { int y = x * 6 + 3; return y; }
extern "C" int __pad_7(int x) { int y = x * 7 + 3; return y; }
extern "C" int __pad_8(int x) { int y = x * 8 + 3; return y; }
extern "C" int __pad_9(int x) { int y = x * 9 + 3; return y; }
extern "C" int __pad_10(int x) { int y = x * 10 + 3; return y; }
extern "C" int __pad_11(int x) { int y = x * 11 + 3; return y; }
extern "C" int __pad_12(int x) { int y = x * 12 + 3; return y; }
int gpiSaveDiskProfiles(void* gp)
{
    int error;
    int ret = gpiOpenDiskProfiles(gp, 1, &error);
    if (ret)
        return ret;
    if (error)
        return ret;
    void* conn = *(void**)gp;
    fprintf(*(FILE**)((char*)conn + 0x4a0), "%d\n", 2);
    gpiProfileMap(gp, gpiSaveDiskProfile, 0);
    gpiCloseDiskProfiles(gp);
    return ret;
}
