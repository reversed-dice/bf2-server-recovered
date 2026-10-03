typedef void (*vfn1)(void*, float, float);

extern "C" void graphMinMax_73b310(void* self, int a, int b)
{
    *(int*)((char*)self + 0x5c) = a;
    *(int*)((char*)self + 0x60) = b;
    void* t = *(void**)((char*)self + 0x30);
    if (t) {
        ((vfn1)(*(void***)t)[0x38/8])(t, (float)a, (float)b);
    }
}
