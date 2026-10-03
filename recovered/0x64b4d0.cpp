typedef void (*vfn1)(void*, float);

extern "C" void cbProgressCallback_64b4d0(void* cb, int a, int b, int c, int d, int e, void* p7)
{
    if (p7) {
        ((vfn1)(*(void***)p7)[0x38/8])(p7, (float)d / (float)e);
    }
}
