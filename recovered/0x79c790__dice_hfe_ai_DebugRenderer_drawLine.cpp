// FUNCTION: BF2 0x79c790
typedef void* (*vfn3)(void*, void*, void*, int);
extern "C" void* g_010adfb0;
extern "C" void target_79c790(void* self, void* a, void* b)
{
    void* g = g_010adfb0;
    ((vfn3*)*(void***)g)[0x40/8](g, a, b, 1);
}
