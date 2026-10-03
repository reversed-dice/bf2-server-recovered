// FUNCTION: BF2 0x744de0
namespace dice { namespace hfe {
extern int fn_0x00407338(unsigned int a);
extern void atexit_0x004071c8(void* f, void* arg, void* dso);


void si_744de0(int a, int b) {
    if (a != 1)
        return;
    if (b != 0xffff)
        return;
    fn_0x00407338(0x10a5130);
    atexit_0x004071c8((void*)0x744dd0, 0, (void*)0xf66a88);
    *(void**)0x010a5128 = (void*)0x759dc150;
}
} }
