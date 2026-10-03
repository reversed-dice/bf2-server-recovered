// FUNCTION: BF2 0x785560
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, int);
extern "C" void* fn_699e30(void*, int);
extern "C" void* target_785560(void* self, int idx)
{
    void* x = *(void**)((char*)self + 8);
    void* a = ((vfn1*)*(void***)x)[0x40/8](x);
    void* b = fn_699e30(a, 0);
    return ((vfn2*)*(void***)b)[0x28/8](b, idx);
}
