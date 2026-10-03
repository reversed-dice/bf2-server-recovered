extern "C" int g_cid_c7ce6c;
extern "C" void fn_53d500(void*);

typedef void* (*vfn18)(void*, int);
typedef void (*vfn58)(void*);
typedef void (*vfn230)(void*, int);
typedef void (*vfn40)(void*);

extern "C" void exit_529800(void* self, void* x)
{
    void* t = *(void**)((char*)self + 0x270);
    void* r = 0;
    if (t) r = *(void**)((char*)t + 0x8);
    void* a = ((vfn18)(*(void***)r)[0x18/8])(r, g_cid_c7ce6c);
    fn_53d500(self);
    ((vfn58)(*(void***)a)[0x58/8])(a);
    *(char*)((char*)self + 0x63c) = 0;
    void* c = *(void**)((char*)r + 0x88);
    ((vfn230)(*(void***)c)[0x230/8])(c, 1);
    void* d = *(void**)((char*)r + 0x90);
    ((vfn40)(*(void***)d)[0x40/8])(d);
    *(char*)((char*)self + 0x63f) = 1;
}
