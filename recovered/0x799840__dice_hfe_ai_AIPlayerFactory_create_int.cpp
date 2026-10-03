// FUNCTION: BF2 0x799840
extern "C" void* fn_799840(void* self, void* arg)
{
    void* g = *(void**)0x112ee38;
    void** vt = *(void***)g;
    void* r = ((void* (*)(void*))vt[8])(g);
    if (!r)
        return 0;
    void** vt2 = *(void***)self;
    return ((void* (*)(void*, void*))vt2[5])(self, r);
}
