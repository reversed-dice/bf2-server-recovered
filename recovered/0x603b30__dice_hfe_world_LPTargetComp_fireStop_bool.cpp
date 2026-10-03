// FUNCTION: BF2 0x603b30
extern "C" void fn_603b30(void* self, unsigned char arg)
{
    void* s = *(void**)((char*)self + 0x98);
    unsigned int st = (unsigned int)*(int*)((char*)s + 0x54) - 3;
    if (st <= 1)
        return;
    void* p = *(void**)((char*)self + 0x48);
    if (!p)
        return;
    void* q = *(void**)((char*)p + 8);
    if (!q)
        return;
    void* g = *(void**)0x112ee48;
    void** vt = *(void***)g;
    ((void (*)(void*, void*, int, float))vt[0x34])(g, q, 0x1e, *(float*)((char*)*(void**)((char*)q + 0x28) + 0x1f8));
}
