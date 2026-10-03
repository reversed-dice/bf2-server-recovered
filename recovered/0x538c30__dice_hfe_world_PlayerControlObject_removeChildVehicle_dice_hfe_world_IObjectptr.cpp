// FUNCTION: BF2 0x538c30
extern "C" void operator delete(void* p);

extern "C" void fn_538c30(void* self, void* rsi)
{
    void* node = *(void**)((char*)self + 0x270);
    void* rdx = 0;
    if (node)
        rdx = *(void**)((char*)node + 8);
    if (rdx == rsi) {
        int* p = *(int**)((char*)self + 0x270);
        if (p && --*p == 0)
            operator delete(p);
        *(void**)((char*)self + 0x270) = 0;
    }
}
