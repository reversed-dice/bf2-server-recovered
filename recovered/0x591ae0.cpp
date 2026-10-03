typedef void (*vfn1)(void*, int);

extern "C" void handleVisualUpdate_591ae0(void* self, float a, float b)
{
    void* t = *(void**)((char*)self + 0x218);
    if (t) {
        ((vfn1)(*(void***)t)[0x20/8])(t, 1);
    }
}
