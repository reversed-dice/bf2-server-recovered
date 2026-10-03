// FUNCTION: BF2 0x76c080
extern "C" void* fn_76c080(void* self, void* arg)
{
    void** vt = *(void***)self;
    void* (*fn)(void*, void*) = (void* (*)(void*, void*))vt[5];
    void* g = *(void**)0x112ee38;
    void** vt2 = *(void***)g;
    void* r = ((void* (*)(void*))vt2[8])(g);
    return fn(self, r);
}
