// FUNCTION: BF2 0x79c7b0
extern "C" void fn_79c7b0(void* a, void* b, void* c, unsigned char d)
{
    void* g = *(void**)0x10adfb0;
    void** vt = *(void***)g;
    ((void (*)(void*, void*, void*, unsigned char))vt[0xb])(g, b, c, d);
}
