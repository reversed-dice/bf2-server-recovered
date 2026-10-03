extern "C" void* g_mgr;
typedef char (*vfn0)(void*);
extern "C" void shutdownDemo_4da750(void*, int);

extern "C" void shutdownDemo_4da9e0(void* self)
{
    void* m = g_mgr;
    if (m && ((vfn0)(*(void***)m)[0x1c0/8])(m)) {
        shutdownDemo_4da750(self, 1);
    }
}
