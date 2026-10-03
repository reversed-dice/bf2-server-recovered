typedef void (*vfn68)(void*, int);

extern "C" void postFire_60b390(void* self, void* arg)
{
    void* t = *(void**)((char*)self + 0x28);
    if (t) {
        if (*(float*)0xb38948 > *(float*)((char*)arg + 0x40)) {
            ((vfn68)(*(void***)t)[0x68/8])(t, 4);
        } else {
            ((vfn68)(*(void***)t)[0x68/8])(t, 1);
        }
    }
}
