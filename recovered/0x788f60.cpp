extern "C" int g_iid;
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, int);
typedef float (*vfn3)(void*);

extern "C" float getMaxManDownTime_788f60(void* self)
{
    void* r = ((vfn1)(*(void***)(*(void**)((char*)self + 0x8)))[0x40/8])(*(void**)((char*)self + 0x8));
    void* t = *(void**)((char*)r + 0x28);
    void* p = ((vfn2)(*(void***)t)[0xc0/8])(t, g_iid);
    if (p) {
        return ((vfn3)(*(void***)p)[0x220/8])(p);
    }
    return *(float*)0xb2f3bc;
}
