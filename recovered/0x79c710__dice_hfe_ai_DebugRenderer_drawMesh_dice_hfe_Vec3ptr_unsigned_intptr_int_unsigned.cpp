// FUNCTION: BF2 0x79c710
extern "C" void fn_79c710(void* a, void* b, void* c, void* d, void* e, unsigned char f)
{
    void* g = *(void**)0x10adfb0;
    void** vt = *(void***)g;
    ((void (*)(void*, void*, void*, void*, void*, unsigned char))vt[0xc])(g, b, c, d, e, f);
}
