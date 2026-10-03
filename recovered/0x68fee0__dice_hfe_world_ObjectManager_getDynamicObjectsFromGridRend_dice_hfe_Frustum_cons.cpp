// FUNCTION: BF2 0x68fee0
extern "C" void fn_internal(void* a, void* b, void* c, void* d, void* e, unsigned int f, int g, unsigned char h);

extern "C" void fn_68faf0(void* a, void* b, void* c, void* d, void* e, unsigned int f, unsigned char g)
{
    fn_internal(a, b, c, d, e, f, 0, g);
}
