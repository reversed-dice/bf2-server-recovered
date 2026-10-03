// FUNCTION: BF2 0x68ed20
extern "C" void fn_internal(void* a, int b, void* c, void* d, void* e, unsigned char f);

extern "C" void fn_68ed20(void* a, void* c, void* d, void* e, unsigned char f)
{
    fn_internal(a, 1, c, d, e, f);
}
