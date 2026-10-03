extern "C" void* g_108daa0;
extern "C" void fn_407338(unsigned int);
extern "C" void fn_4071c8(void*, int, void*);
extern "C" void* fn_4eea40(void*, float);

extern "C" void func_4e5690(int self, unsigned int a, int b)
{
    if (--self == 0 && a == 0xffff) {
        fn_407338(0x108daa8);
        fn_4071c8((void*)0x4e5680, 0, (void*)0xf66a88);
        g_108daa0 = fn_4eea40((void*)0xb3a318, 0.0f);
    }
}
