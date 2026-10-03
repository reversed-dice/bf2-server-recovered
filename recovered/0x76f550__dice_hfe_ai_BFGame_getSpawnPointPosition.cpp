// FUNCTION: BF2 0x76f550
extern "C" void* g_10c42c0;
typedef void* (*vfn1)(void*);
extern "C" void* target_76f550(void* self)
{
    void* g = g_10c42c0;
    void* o = ((vfn1*)*(void***)g)[0x50/8](g);
    return ((vfn1*)*(void***)o)[0x68/8](o);
}
