// FUNCTION: BF2 0x467800
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);
extern void* fn_0x004677a0();
void si_4177d0(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x108b628);
    atexit_0x004071c8((void*)0x467670, 0, (void*)0xf66a88);
    *(void**)0x0108b620 = fn_0x004677a0();
}
} }
