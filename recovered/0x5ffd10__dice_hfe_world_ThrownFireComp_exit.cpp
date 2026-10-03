// FUNCTION: BF2 0x5ffd10
extern "C" void fn_5ffd10(void* self, unsigned char arg)
{
    void* obj = *(void**)((char*)self + 0x18);
    void** vt = *(void***)obj;
    if (!((void* (*)(void*))vt[0x70])(obj))
        return;
    void** vt2 = *(void***)self;
    if (((int (*)(void*))vt2[0x48])(self) <= 2)
        return;
    void** vt3 = *(void***)self;
    ((void (*)(void*))vt3[0x26])(self);
}
