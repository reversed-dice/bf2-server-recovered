// FUNCTION: BF2 0x791d90
extern "C" void* fn_791d90(void* self, int arg2, int arg3)
{
    void** vt = *(void***)self;
    void* (*fn)(void*, int, int) = (void* (*)(void*, int, int))vt[0x13];
    void* g = *(void**)0x10ade60;
    void** vt2 = *(void***)g;
    ((void (*)(void*))vt2[2])(g);
    return fn(self, arg2, arg3);
}
