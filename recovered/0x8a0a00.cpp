extern "C" void* g_materialManager;
extern "C" void* g_factory;
typedef void (*vfn1)(void*);
typedef void* (*vfn4)(void*, int, int, int);

extern "C" void setMaterialManager_8a0a00(int id)
{
    void* m = g_materialManager;
    if (m) {
        ((vfn1)(*(void***)m)[0x10/8])(m);
        g_materialManager = 0;
    }
    void* f = g_factory;
    void* r = ((vfn4)(*(void***)f)[0x68/8])(f, id, 0xc4ae, 0);
    g_materialManager = r;
}
