// FUNCTION: BF2 0x41f630
extern "C" void* g_10b8c08;
extern "C" void* g_10b3730;

typedef char (*vfn278)(void*);
typedef void (*vfn2c0)(void*, unsigned);
typedef void (*vfn2d0)(void*, unsigned);
typedef void (*vfn28)(void*, int, unsigned, unsigned, float);

extern "C" int executeClient_41f630(void* self)
{
    vfn278 f = (vfn278)(*(void***)g_10b8c08)[0x278/8];
    char r = f(g_10b8c08);
    if (r == 0) {
        vfn2c0 f1 = (vfn2c0)(*(void***)g_10b8c08)[0x2c0/8];
        f1(g_10b8c08, *(unsigned*)((char*)self + 0x10));
        vfn2d0 f2 = (vfn2d0)(*(void***)g_10b8c08)[0x2d0/8];
        f2(g_10b8c08, *(unsigned*)((char*)self + 0x14));
    }
    vfn28 f3 = (vfn28)(*(void***)g_10b3730)[0x28/8];
    f3(g_10b3730, 2, 0x48, 0, 0.0f);
    return 1;
}
