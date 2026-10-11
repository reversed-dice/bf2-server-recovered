// FUNCTION: BF2 0x82d1c0
// BF2_FLAGS: -fcrossjumping
extern "C" int  gpiSetErrorString(void* gpi, const char* msg);
extern "C" int  gpiProfileMap(void* gpi, int (*fn)(void*), int a3);
extern "C" int  gpiFreeProfileInfo(void* info);

int gpiDisable(void* gpi, int state)
{
    char* p = *(char**)gpi;

    if (state == 0x100) {
        *(int*)(p + 0x100) = 0;
        while (gpiProfileMap(gpi, gpiFreeProfileInfo, 0) == 0)
            ;
        return 0;
    }
    else if (state == 0x101) {
        *(int*)(p + 0x108) = 0;
        return 0;
    }
    else if (state == 0x102) {
        *(int*)(p + 0x104) = 0;
        return 0;
    }
    else {
        gpiSetErrorString(gpi, "Invalid state.");
        return 2;
    }
}
