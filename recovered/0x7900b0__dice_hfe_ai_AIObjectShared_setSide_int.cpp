// FUNCTION: BF2 0x7900b0
extern "C" void fn_7900b0(void* self, int arg)
{
    if (*(int*)((char*)self + 0x14) == arg)
        return;
    *(int*)((char*)self + 0x14) = arg;
    void** vt = *(void***)self;
    void* r = ((void* (*)(void*, int))vt[0x1e])(self, 5);
    if (!r)
        return;
    void** vt2 = *(void***)r;
    ((void (*)(void*, double))vt2[0x19])(r, *(double*)0xb35f10);
}
