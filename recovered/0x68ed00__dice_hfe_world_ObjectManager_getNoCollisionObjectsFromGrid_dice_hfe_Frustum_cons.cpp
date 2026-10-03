// FUNCTION: BF2 0x68ed00
extern "C" void fn_internal(void* a, int b, void* c, void* d, void* e, unsigned char f);

extern "C" void fn_68ed00(void* a, void* c, void* d, void* e, unsigned char f)
{
    fn_internal(a, 0, c, d, e, f);
}
