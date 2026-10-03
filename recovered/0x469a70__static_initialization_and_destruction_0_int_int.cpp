// FUNCTION: BF2 0x469a70
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);
extern void* fn_0x00469a10();
void si_469a70(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x108b668);
    atexit_0x004071c8((void*)0x4689a0, 0, (void*)0xf66a88);
    *(void**)0x0108b660 = fn_0x00469a10();
}
} }
