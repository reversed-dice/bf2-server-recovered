extern "C" void fn_763fa0(void*);
typedef void* (*vfn300)(void*);
typedef char (*vfn310)(void*);

extern "C" void trigger1PLanding_764000(void* self)
{
    void* p = *(void**)((char*)self + 0x8);
    void* a = ((vfn300)(*(void***)p)[0x300/8])(p);
    if (a) {
        if (((vfn310)(*(void***)a)[0x310/8])(a)) {
            fn_763fa0(self);
        }
    }
}
