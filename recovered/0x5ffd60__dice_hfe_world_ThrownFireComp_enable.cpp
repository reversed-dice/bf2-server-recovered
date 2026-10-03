// FUNCTION: BF2 0x5ffd60
extern "C" int fn_74aaa0(void);
extern "C" void fn_5f5510(void* self, int v);

extern "C" void fn_5ffd60(void* self)
{
    int v = *(int*)((char*)self + 0x1b8);
    if (v != 0) {
        int r = fn_74aaa0();
        if ((unsigned)v <= (unsigned)r)
            fn_5f5510(self, *(int*)((char*)self + 0x1b8));
    }
    void** vt = *(void***)self;
    ((void (*)(void*))vt[0x26])(self);
}
