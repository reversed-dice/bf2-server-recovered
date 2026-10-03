// FUNCTION: BF2 0x620aa0
extern "C" void fn_620aa0(void* self)
{
    *(void**)self = (void*)0xb7dfd0;
    *(void**)((char*)self + 0x20) = (void*)0xb7e080;
    void* p = *(void**)((char*)self + 0x30);
    if (p) {
        void** vt = *(void***)p;
        ((void (*)(void*))vt[1])(p);
    }
    *(void**)((char*)self + 0x20) = (void*)0xb7e1b0;
    *(void**)self = (void*)0xb7bcb0;
}
