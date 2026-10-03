// FUNCTION: BF2 0x6f8990
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);



extern void atexit_0x004071c8(void* f, void* arg, void* dso);

void si_6f8990(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x10a4268);
    atexit_0x004071c8((void*)0x6f8980, 0, (void*)0xf66a88);
    *(void**)0x010a4250 = 0;
    *(void**)0x010a4258 = 0;
    *(void**)0x010a4260 = 0;
    atexit_0x004071c8((void*)0x6f8ac0, 0, (void*)0xf66a88);
}
} }
