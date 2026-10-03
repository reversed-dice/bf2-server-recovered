typedef void (*vfn1)(void*, int);

extern "C" void postFire_60a7d0(void* self, void* ev)
{
    void* t = *(void**)((char*)self + 0x28);
    if (t) {
        if (*(char*)((char*)(*(void**)((char*)self + 0x40)) + 0x24) == 0) {
            ((vfn1)(*(void***)t)[0x68/8])(t, 1);
        } else {
            ((vfn1)(*(void***)t)[0x60/8])(t, 1);
        }
    }
}
