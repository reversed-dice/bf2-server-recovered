extern "C" void* g_scoreManager;
extern "C" void* g_factory;
typedef void (*vfn1)(void*);
typedef void* (*vfn4)(void*, int, int, int);

extern "C" void setScoreManager_899d70(int id)
{
    void* m = g_scoreManager;
    if (m) {
        ((vfn1)(*(void***)m)[0x10/8])(m);
        g_scoreManager = 0;
    }
    void* f = g_factory;
    void* r = ((vfn4)(*(void***)f)[0x68/8])(f, id, 0xc4b8, 0);
    g_scoreManager = r;
}
