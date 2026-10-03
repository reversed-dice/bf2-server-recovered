// FUNCTION: BF2 0xaf7370
typedef void* (*vfn1)(void*);
extern "C" void* fn_af38a0(void*);
extern "C" void* pad1(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    ((vfn1*)*(void***)((char*)self + 0x110))[0xc8/8]((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" int target_af7370(void* self, void* a, void* b, void* c)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = fn_af38a0(self);
    ((vfn1*)*(void***)x)[0xc8/8](x);
ret0:
    return 0;
}

