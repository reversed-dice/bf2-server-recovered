typedef void* (*vfn18)(void*, int);
typedef void* (*vfn48)(void*, void*, void*);

extern "C" void* handlePickup_472160(void* self, void* arg1, void* arg2, void* rcxc)
{
    void* m = 0;
    if (rcxc) {
        m = ((vfn18)(*(void***)rcxc)[0x18/8])(rcxc, *(int*)0xc7d0e4);
    }
    return ((vfn48)(*(void***)m)[0x48/8])(m, arg2, arg1);
}
