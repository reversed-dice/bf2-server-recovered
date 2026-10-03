typedef void (*vfn1)(void*, int, int, int);
typedef void (*vfn2)(void*, int);

extern "C" void destroyTrailEffect_60ff50(void* self)
{
    void* t = *(void**)((char*)self + 0x380);
    if (t) {
        ((vfn1)(*(void***)t)[0x208/8])(t, 1, 0, 0);
        void* t2 = *(void**)((char*)self + 0x380);
        ((vfn2)(*(void***)t2)[0x68/8])(t2, 1);
        *(void**)((char*)self + 0x380) = 0;
    }
}
