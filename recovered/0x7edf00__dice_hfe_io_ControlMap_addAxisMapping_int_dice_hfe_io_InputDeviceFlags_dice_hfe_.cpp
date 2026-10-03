// FUNCTION: BF2 0x7edf00
extern "C" unsigned char fn_internal(void* a, void* b, void* c, void* d, void* e, unsigned int f, unsigned char g, int h);

extern "C" unsigned char fn_7edf00(void* a, void* b, void* c, void* d, void* e, unsigned int f, unsigned char g)
{
    return fn_internal(a, b, c, d, e, f, g, 0);
}
