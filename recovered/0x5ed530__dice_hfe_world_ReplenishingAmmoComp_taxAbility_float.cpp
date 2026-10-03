// FUNCTION: BF2 0x5ed530
extern "C" void* fn_5ed450(void* self, float f);

extern "C" void fn_5ed530(void* self, float f)
{
    void* r = fn_5ed450(self, f);
    if (!r)
        return;
    void** vt = *(void***)r;
    ((void (*)(void*, float))vt[0x28])(r, f);
}
