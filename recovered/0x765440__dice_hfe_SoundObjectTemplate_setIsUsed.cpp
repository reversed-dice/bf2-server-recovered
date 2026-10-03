// FUNCTION: BF2 0x765440
extern "C" void fn_765440(void* self, unsigned char arg)
{
    if (*(char*)((char*)self + 0xb0))
        return;
    void* obj = *(void**)((char*)self + 0x78);
    if (obj) {
        void** vt = *(void***)obj;
        ((void (*)(void*))vt[0x2e])(obj);
    }
    void** vt2 = *(void***)self;
    ((void (*)(void*, int, int))vt2[0x13])(self, 0x20, 0);
}
