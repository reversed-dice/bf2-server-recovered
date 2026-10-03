extern "C" void* g_112ee48;
extern "C" void fn_55d2e0(void*);
extern "C" void fn_5741c0(void*);
typedef void (*vfn1a0)(void*, void*, int, float);

extern "C" void enableCachedObject_55d500(void* self)
{
    fn_55d2e0(self);
    fn_5741c0(self);
    ((vfn1a0)(*(void***)g_112ee48)[0x1a0/8])(g_112ee48, self, 0x1d, *(float*)0xb2f3bc);
}
