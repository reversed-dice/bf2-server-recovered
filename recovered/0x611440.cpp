extern "C" int g_idx_ca2018;

typedef void* (*vfn2b8)(void*);
typedef void* (*vfn48)(void*);
typedef void (*vfnB0)(void*, int, void*);
typedef void (*vfnC0)(void*, int, int);
typedef void (*vfn10)(void*);

extern "C" void turnIntoTracer_611440(void* self, char flag)
{
    void* t = *(void**)((char*)self + 0x258);
    void* a = ((vfn2b8)(*(void***)t)[0x2b8/8])(t);
    if (a) {
        void* tt = *(void**)((char*)self + 0x258);
        void* r = ((vfn48)(*(void***)(*(void**)((char*)tt + 0x248)))[0x48/8])(*(void**)((char*)tt + 0x248));
        if (r) {
            ((vfnB0)(*(void***)self)[0xb0/8])(self, g_idx_ca2018, r);
            ((vfnC0)(*(void***)self)[0xc0/8])(self, 0x1802, 0);
            ((vfn10)(*(void***)r)[0x10/8])(r);
        }
    }
    *(char*)((char*)self + 0x360) = flag;
}
