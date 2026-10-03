extern "C" void* g_mgr;
extern "C" void* g_other;
typedef void* (*vfn1)(void*);
typedef void (*vfn2)(void*, char);

extern "C" bool setCommander_4c0070(void* self, int mode, bool flag)
{
    void* m = g_mgr;
    if (m && g_other) {
        void* p = ((vfn1)(*(void***)m)[0x40/8])(m);
        if (p) {
            ((vfn2)(*(void***)p)[0x180/8])(p, flag ? 1 : 0);
        }
        return true;
    }
    return false;
}
