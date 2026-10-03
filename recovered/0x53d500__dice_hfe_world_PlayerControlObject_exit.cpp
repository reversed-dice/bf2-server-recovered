// FUNCTION: BF2 0x53d500
extern "C" void fn_53c550(void*, int);
extern "C" void target_53d500(void* self)
{
    void* x = *(void**)((char*)self + 0x268);
    if (x && *(void**)((char*)x + 8)) {
        fn_53c550(self, 0);
    }
}
