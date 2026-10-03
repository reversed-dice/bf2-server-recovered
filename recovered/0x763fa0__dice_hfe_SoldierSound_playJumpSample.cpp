// FUNCTION: BF2 0x763fa0
extern "C" unsigned char fn_763e20(void* self);

extern "C" void fn_763fa0(void* self)
{
    if (!fn_763e20(self))
        return;
    void* obj = *(void**)((char*)self + 0x28);
    if (!obj)
        obj = *(void**)((char*)self + 0x10);
    if (obj) {
        void** vt = *(void***)obj;
        ((void (*)(void*))vt[4])(obj);
    }
}
