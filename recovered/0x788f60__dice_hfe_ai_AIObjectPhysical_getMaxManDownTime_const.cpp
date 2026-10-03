// FUNCTION: BF2 0x788f60
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, unsigned int);
typedef float (*vfn3)(void*);

extern "C" unsigned int g_cid_788f60;

extern "C" float getMaxManDownTime_788f60(void* self)
{
    void* p = ((vfn1)(*(void***)*(void**)((char*)self + 8))[0x40/8])(*(void**)((char*)self + 8));
    void* q = ((vfn2)(*(void***)*(void**)((char*)p + 0x28))[0xc0/8])(*(void**)((char*)p + 0x28), g_cid_788f60);
    if (q) {
        return ((vfn3)(*(void***)q)[0x220/8])(q);
    }
    return *(float*)0xb2f3bc;
}
