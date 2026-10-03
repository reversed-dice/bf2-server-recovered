// FUNCTION: BF2 0x55c8f0
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);
extern void* fn_0x0055c8b0();
void si_55c8f0(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x108eee0);
    atexit_0x004071c8((void*)0x55c6a0, 0, (void*)0xf66a88);
    *(void**)0x0108eed0 = fn_0x0055c8b0();
}
} }
