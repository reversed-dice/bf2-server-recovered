extern "C" int g_cid_c7d03c;
extern "C" void fn_546810(void*);

typedef void* (*vfn148)(void*);
typedef int (*vfn20)(void*);
typedef void (*vfn5e0)(void*);
typedef void (*vfn5d8)(void*);

extern "C" void resetOnDeath_494d30(void* self)
{
    void* a = ((vfn148)(*(void***)self)[0x148/8])(self);
    if (a) {
        void* t = *(void**)((char*)a + 0x28);
        if (((vfn20)(*(void***)t)[0x20/8])(t) == g_cid_c7d03c) {
            fn_546810(a);
        }
    }
    *(char*)((char*)self + 0x459) = 0;
    ((vfn5e0)(*(void***)self)[0x5e0/8])(self);
    ((vfn5d8)(*(void***)self)[0x5d8/8])(self);
}
